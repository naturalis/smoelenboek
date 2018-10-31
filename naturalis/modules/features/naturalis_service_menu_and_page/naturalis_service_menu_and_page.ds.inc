<?php
/**
 * @file
 * naturalis_service_menu_and_page.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function naturalis_service_menu_and_page_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|naturalis_service_menu_page|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'naturalis_service_menu_page';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'naturalis_logo' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => '',
      ),
    ),
  );
  $export['node|naturalis_service_menu_page|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function naturalis_service_menu_and_page_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|naturalis_service_menu_page|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'naturalis_service_menu_page';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ntrls_3col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'naturalis_logo',
      ),
      'middle' => array(
        1 => 'title',
        2 => 'body',
      ),
    ),
    'fields' => array(
      'naturalis_logo' => 'left',
      'title' => 'middle',
      'body' => 'middle',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'aside',
      'middle' => 'div',
      'right' => 'aside',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|naturalis_service_menu_page|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|naturalis_service_menu_page|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'naturalis_service_menu_page';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ntrls_3col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'naturalis_logo',
      ),
      'middle' => array(
        1 => 'title',
        2 => 'body',
      ),
    ),
    'fields' => array(
      'naturalis_logo' => 'left',
      'title' => 'middle',
      'body' => 'middle',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'middle' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '1',
    'page_option_title' => '',
  );
  $export['node|naturalis_service_menu_page|full'] = $ds_layout;

  return $export;
}
