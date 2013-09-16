<?php
/**
 * @file
 * social_good_organizations.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function social_good_organizations_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function social_good_organizations_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function social_good_organizations_node_info() {
  $items = array(
    'social_good_organization' => array(
      'name' => t('Social Good Organization'),
      'base' => 'node_content',
      'description' => t('Social Good Organization'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
