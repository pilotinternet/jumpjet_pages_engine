<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function jumpjet_pages_engine_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function jumpjet_pages_engine_node_info() {
  $items = array(
    'jumpjet_sitepage' => array(
      'name' => t('Site Page'),
      'module' => 'features',
      'description' => t('A page on the site for general, static content. The pages can be created and updated by the web team. It\'s suitable for pages such as \'about us\'.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Page Content'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'jumpjet_system_page' => array(
      'name' => t('System Page'),
      'module' => 'features',
      'description' => t('A page on the website created by an administrator that shouldn\'t be editable by others - eg terms and conditions, privacy policy, and embedded form from another application etc.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Page Content'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
