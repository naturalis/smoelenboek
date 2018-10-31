<?php
/**
 * @file
 * naturalis_theme_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function naturalis_theme_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
