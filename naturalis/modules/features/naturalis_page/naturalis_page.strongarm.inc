<?php
/**
 * @file
 * naturalis_page.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function naturalis_page_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_naturalis_page';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_naturalis_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_naturalis_page';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_naturalis_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_naturalis_page';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_naturalis_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_naturalis_page';
  $strongarm->value = '1';
  $export['node_preview_naturalis_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_naturalis_page';
  $strongarm->value = 0;
  $export['node_submitted_naturalis_page'] = $strongarm;

  return $export;
}
