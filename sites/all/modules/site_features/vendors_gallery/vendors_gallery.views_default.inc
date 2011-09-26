<?php
/**
 * @file
 * vendors_gallery.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function vendors_gallery_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'featured_vendors';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Vendors';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Featured Vendors';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Vendor Link */
  $handler->display->display_options['fields']['field_vendor_link']['id'] = 'field_vendor_link';
  $handler->display->display_options['fields']['field_vendor_link']['table'] = 'field_data_field_vendor_link';
  $handler->display->display_options['fields']['field_vendor_link']['field'] = 'field_vendor_link';
  $handler->display->display_options['fields']['field_vendor_link']['label'] = '';
  $handler->display->display_options['fields']['field_vendor_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_vendor_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_vendor_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_vendor_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_vendor_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_vendor_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_vendor_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_vendor_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_vendor_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_vendor_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_vendor_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_vendor_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_vendor_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_vendor_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_vendor_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_vendor_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_vendor_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_vendor_link']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_vendor_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_vendor_link']['type'] = 'plain';
  $handler->display->display_options['fields']['field_vendor_link']['field_api_classes'] = 0;
  /* Field: Content: Vendor Logo */
  $handler->display->display_options['fields']['field_vendor_logo']['id'] = 'field_vendor_logo';
  $handler->display->display_options['fields']['field_vendor_logo']['table'] = 'field_data_field_vendor_logo';
  $handler->display->display_options['fields']['field_vendor_logo']['field'] = 'field_vendor_logo';
  $handler->display->display_options['fields']['field_vendor_logo']['label'] = '';
  $handler->display->display_options['fields']['field_vendor_logo']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_vendor_logo']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_vendor_logo']['alter']['path'] = '[field_vendor_link]';
  $handler->display->display_options['fields']['field_vendor_logo']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_vendor_logo']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_vendor_logo']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_vendor_logo']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_vendor_logo']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_vendor_logo']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_vendor_logo']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_vendor_logo']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_vendor_logo']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_vendor_logo']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_vendor_logo']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_vendor_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_vendor_logo']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_vendor_logo']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_vendor_logo']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_vendor_logo']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_vendor_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_vendor_logo']['settings'] = array(
    'image_style' => 'slide',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_vendor_logo']['field_api_classes'] = 0;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'vendor' => 'vendor',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default (This option is for views slideshow cycle, it is not used for views_slideshow ddblock)',
    'module' => 'views_slideshow_ddblock',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'view_node' => 0,
    'field_slider_image' => 0,
    'field_slider_image_1' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'view_node' => 0,
    'field_slider_image' => 0,
    'field_slider_image_1' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['effect'] = 'toss';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_ddblock'] = array(
    'widget' => 'cycle',
    'debug_info' => 'none',
    'mapping_wrapper' => array(
      'mappings' => array(
        0 => array(
          'target' => 'node_id',
          'source' => '',
        ),
        1 => array(
          'target' => 'slide_image',
          'source' => '',
        ),
        2 => array(
          'target' => 'slide_title',
          'source' => '',
        ),
        3 => array(
          'target' => 'slide_text',
          'source' => '',
        ),
        4 => array(
          'target' => 'slide_read_more',
          'source' => '',
        ),
        5 => array(
          'target' => 'pager_image',
          'source' => '',
        ),
        6 => array(
          'target' => 'pager_text',
          'source' => '',
        ),
        7 => array(
          'target' => '',
          'source' => '',
        ),
        8 => array(
          'target' => '',
          'source' => '',
        ),
        9 => array(
          'target' => '',
          'source' => '',
        ),
        10 => array(
          'target' => '',
          'source' => '',
        ),
        11 => array(
          'target' => '',
          'source' => '',
        ),
        12 => array(
          'target' => '',
          'source' => '',
        ),
        13 => array(
          'target' => '',
          'source' => '',
        ),
        14 => array(
          'target' => '',
          'source' => '',
        ),
        15 => array(
          'target' => '',
          'source' => '',
        ),
      ),
    ),
    'template' => 'default',
    'template_size_wrapper' => array(
      'template_size' => 'default',
    ),
    'content_container' => array(
      'container' => 'div.slide',
      'overflow' => 0,
    ),
    'settings' => array(
      'fx' => 'fade',
      'speed' => '500',
      'timeout' => '5000',
      'order' => 'none',
      'pause' => 1,
      'next' => 0,
      'pager_toggle' => 1,
      'pager_settings' => array(
        'pager' => 'custom-pager',
        'pager_container' => '.custom-pager-item',
        'nr_of_pager_items' => '3',
        'pager_position' => 'left',
        'pager_event' => 'click',
        'pager_disable_click' => 1,
        'pager_fast' => 1,
        'pager_pause' => 1,
      ),
      'pager2' => 0,
      'pager2_settings' => array(
        'pager2_event' => 'click',
        'pager2_position' => array(
          'slide' => 'slide',
          'pager' => 0,
        ),
        'pager2_pager' => array(
          'pager2_pager_prev' => 'prev',
          'pager2_pager_next' => 'next',
          'pager2_pager_hide' => 1,
        ),
        'pager2_slide' => array(
          'pager2_slide_prev' => '',
          'pager2_slide_next' => '',
          'pager2_slide_hide' => 1,
        ),
      ),
      'slide_text' => 1,
      'slide_text_settings' => array(
        'slide_text_container' => 'div.slide-text',
        'slide_text_position' => 'bottom',
        'slide_text_jquery' => 0,
        'slide_jquery' => array(
          'slide_text_before_effect' => 'hide',
          'slide_text_before_speed' => '500',
          'slide_text_after_effect' => 'show',
          'slide_text_after_speed' => '500',
        ),
      ),
      'custom' => array(
        'custom_jquery' => '',
      ),
    ),
    'template_submit' => 'get template sizes',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_slider_image_1' => 'field_slider_image_1',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['block_description'] = 'Featured Vendors Slideshow';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Vendors';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'vendors';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Vendors';
  $handler->display->display_options['menu']['weight'] = '0';
  $export['featured_vendors'] = $view;

  return $export;
}
