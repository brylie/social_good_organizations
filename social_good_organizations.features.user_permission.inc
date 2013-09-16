<?php
/**
 * @file
 * social_good_organizations.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function social_good_organizations_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create social_good_organization content'.
  $permissions['create social_good_organization content'] = array(
    'name' => 'create social_good_organization content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any social_good_organization content'.
  $permissions['delete any social_good_organization content'] = array(
    'name' => 'delete any social_good_organization content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own social_good_organization content'.
  $permissions['delete own social_good_organization content'] = array(
    'name' => 'delete own social_good_organization content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any social_good_organization content'.
  $permissions['edit any social_good_organization content'] = array(
    'name' => 'edit any social_good_organization content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own social_good_organization content'.
  $permissions['edit own social_good_organization content'] = array(
    'name' => 'edit own social_good_organization content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
