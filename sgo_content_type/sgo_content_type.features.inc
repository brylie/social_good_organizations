<?php
/**
 * @file
 * sgo_content_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function sgo_content_type_node_info() {
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
