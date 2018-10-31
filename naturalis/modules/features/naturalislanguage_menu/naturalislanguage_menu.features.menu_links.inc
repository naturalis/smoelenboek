<?php
/**
 * @file
 * naturalislanguage_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function naturalislanguage_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-naturalis-language-menu_en:<front>
  $menu_links['menu-naturalis-language-menu_en:<front>'] = array(
    'menu_name' => 'menu-naturalis-language-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'EN',
    'options' => array(
      'query' => array(
        'language' => 'en',
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-naturalis-language-menu_en:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-naturalis-language-menu_nl:<front>
  $menu_links['menu-naturalis-language-menu_nl:<front>'] = array(
    'menu_name' => 'menu-naturalis-language-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'NL',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'query' => array(
        'language' => 'nl',
      ),
      'identifier' => 'menu-naturalis-language-menu_nl:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('EN');
  t('NL');


  return $menu_links;
}
