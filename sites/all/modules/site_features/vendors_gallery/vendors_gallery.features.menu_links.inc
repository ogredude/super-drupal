<?php
/**
 * @file
 * vendors_gallery.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function vendors_gallery_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:vendors
  $menu_links['main-menu:vendors'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'vendors',
    'router_path' => 'vendors',
    'link_title' => 'Vendors',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Vendors');


  return $menu_links;
}
