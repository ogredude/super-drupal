<?php
/**
 * @file
 * vendors_gallery.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vendors_gallery_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function vendors_gallery_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function vendors_gallery_image_default_styles() {
  $styles = array();

  // Exported image style: slide
  $styles['slide'] = array(
    'name' => 'slide',
    'effects' => array(),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function vendors_gallery_node_info() {
  $items = array(
    'vendor' => array(
      'name' => t('Vendor'),
      'base' => 'node_content',
      'description' => t('Vendor Logo and URL'),
      'has_title' => '1',
      'title_label' => t('Vendor Name'),
      'help' => '',
    ),
  );
  return $items;
}
