<?php
/**
 * @file
 * naturalis_help.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function naturalis_help_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-naturalis-help-menu.
  $menus['menu-naturalis-help-menu'] = array(
    'menu_name' => 'menu-naturalis-help-menu',
    'title' => 'Naturalis Help Menu',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Naturalis Help Menu');


  return $menus;
}
