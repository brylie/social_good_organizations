<?php
/**
 * @file
 * sgo_feed_importer.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function sgo_feed_importer_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'social_good_organizations_importer';
  $feeds_importer->config = array(
    'name' => 'Social Good Organizations importer',
    'description' => 'Import the archive of social good organizations.',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'description',
            'target' => 'body',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'contact',
            'target' => 'field_contact',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'email',
            'target' => 'field_contact_email',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'mission',
            'target' => 'field_mission',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'population_served',
            'target' => 'field_population_served',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          6 => array(
            'source' => 'primary_mission',
            'target' => 'field_primary_mission',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          7 => array(
            'source' => 'secondary_mission',
            'target' => 'field_2nd_mission',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          8 => array(
            'source' => 'tertiary_mission',
            'target' => 'field_3rd_mission',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          9 => array(
            'source' => 'website',
            'target' => 'field_website_link:url',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'country',
            'target' => 'field_country',
            'term_search' => '0',
            'autocreate' => 1,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'social_good_organization',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['social_good_organizations_importer'] = $feeds_importer;

  return $export;
}
