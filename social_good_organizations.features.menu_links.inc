<?php
/**
 * @file
 * social_good_organizations.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function social_good_organizations_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:social-good
  $menu_links['main-menu:social-good'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'social-good',
    'router_path' => 'social-good',
    'link_title' => 'Archive of Social Good',
    'options' => array(
      'attributes' => array(
        'title' => 'Search the archive',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Archive of Social Good');


  return $menu_links;
}
