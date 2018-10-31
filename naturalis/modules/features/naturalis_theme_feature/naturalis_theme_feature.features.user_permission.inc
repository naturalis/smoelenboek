<?php
/**
 * @file
 * naturalis_theme_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function naturalis_theme_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer ckeditor'.
  $permissions['administer ckeditor'] = array(
    'name' => 'administer ckeditor',
    'roles' => array(),
    'module' => 'ckeditor',
  );

  // Exported permission: 'customize ckeditor'.
  $permissions['customize ckeditor'] = array(
    'name' => 'customize ckeditor',
    'roles' => array(),
    'module' => 'ckeditor',
  );

  return $permissions;
}
