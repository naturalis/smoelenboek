<?php
/**
 * @file
 * naturalis_external_links_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function naturalis_external_links_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-naturalis-externe-links.
  $menus['menu-naturalis-externe-links'] = array(
    'menu_name' => 'menu-naturalis-externe-links',
    'title' => 'Naturalis Externe Links',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Naturalis Externe Links');


  return $menus;
}
