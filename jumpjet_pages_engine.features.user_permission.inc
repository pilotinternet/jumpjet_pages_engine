<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function jumpjet_pages_engine_user_default_permissions() {
  $permissions = array();

  // Exported permission: create jumpjet_sitepage content
  $permissions['create jumpjet_sitepage content'] = array(
    'name' => 'create jumpjet_sitepage content',
    'roles' => array(
      '0' => 'web developer',
      '1' => 'content editor',
      '2' => 'community manager',
      '3' => 'site manager',
    ),
  );

  // Exported permission: create jumpjet_system_page content
  $permissions['create jumpjet_system_page content'] = array(
    'name' => 'create jumpjet_system_page content',
    'roles' => array(
      '0' => 'web developer',
    ),
  );

  // Exported permission: delete any jumpjet_sitepage content
  $permissions['delete any jumpjet_sitepage content'] = array(
    'name' => 'delete any jumpjet_sitepage content',
    'roles' => array(
      '0' => 'web developer',
      '1' => 'content editor',
      '2' => 'community manager',
      '3' => 'site manager',
    ),
  );

  // Exported permission: delete any jumpjet_system_page content
  $permissions['delete any jumpjet_system_page content'] = array(
    'name' => 'delete any jumpjet_system_page content',
    'roles' => array(
      '0' => 'web developer',
    ),
  );

  // Exported permission: delete own jumpjet_sitepage content
  $permissions['delete own jumpjet_sitepage content'] = array(
    'name' => 'delete own jumpjet_sitepage content',
    'roles' => array(
      '0' => 'web developer',
      '1' => 'content editor',
      '2' => 'community manager',
      '3' => 'site manager',
    ),
  );

  // Exported permission: delete own jumpjet_system_page content
  $permissions['delete own jumpjet_system_page content'] = array(
    'name' => 'delete own jumpjet_system_page content',
    'roles' => array(
      '0' => 'web developer',
    ),
  );

  // Exported permission: edit any jumpjet_sitepage content
  $permissions['edit any jumpjet_sitepage content'] = array(
    'name' => 'edit any jumpjet_sitepage content',
    'roles' => array(
      '0' => 'web developer',
      '1' => 'content editor',
      '2' => 'community manager',
      '3' => 'site manager',
    ),
  );

  // Exported permission: edit any jumpjet_system_page content
  $permissions['edit any jumpjet_system_page content'] = array(
    'name' => 'edit any jumpjet_system_page content',
    'roles' => array(
      '0' => 'web developer',
    ),
  );

  // Exported permission: edit own jumpjet_sitepage content
  $permissions['edit own jumpjet_sitepage content'] = array(
    'name' => 'edit own jumpjet_sitepage content',
    'roles' => array(
      '0' => 'web developer',
      '1' => 'content author',
      '2' => 'content editor',
      '3' => 'community manager',
      '4' => 'site manager',
    ),
  );

  // Exported permission: edit own jumpjet_system_page content
  $permissions['edit own jumpjet_system_page content'] = array(
    'name' => 'edit own jumpjet_system_page content',
    'roles' => array(
      '0' => 'web developer',
    ),
  );

  // Exported permission: publish any jumpjet_sitepage content
  $permissions['publish any jumpjet_sitepage content'] = array(
    'name' => 'publish any jumpjet_sitepage content',
    'roles' => array(
      '0' => 'web developer',
    ),
  );

  // Exported permission: publish any jumpjet_system_page content
  $permissions['publish any jumpjet_system_page content'] = array(
    'name' => 'publish any jumpjet_system_page content',
    'roles' => array(
      '0' => 'web developer',
    ),
  );

  // Exported permission: publish own jumpjet_sitepage content
  $permissions['publish own jumpjet_sitepage content'] = array(
    'name' => 'publish own jumpjet_sitepage content',
    'roles' => array(
      '0' => 'web developer',
    ),
  );

  // Exported permission: publish own jumpjet_system_page content
  $permissions['publish own jumpjet_system_page content'] = array(
    'name' => 'publish own jumpjet_system_page content',
    'roles' => array(
      '0' => 'web developer',
    ),
  );

  // Exported permission: unpublish any jumpjet_sitepage content
  $permissions['unpublish any jumpjet_sitepage content'] = array(
    'name' => 'unpublish any jumpjet_sitepage content',
    'roles' => array(
      '0' => 'web developer',
    ),
  );

  // Exported permission: unpublish any jumpjet_system_page content
  $permissions['unpublish any jumpjet_system_page content'] = array(
    'name' => 'unpublish any jumpjet_system_page content',
    'roles' => array(
      '0' => 'web developer',
    ),
  );

  // Exported permission: unpublish own jumpjet_sitepage content
  $permissions['unpublish own jumpjet_sitepage content'] = array(
    'name' => 'unpublish own jumpjet_sitepage content',
    'roles' => array(
      '0' => 'web developer',
    ),
  );

  // Exported permission: unpublish own jumpjet_system_page content
  $permissions['unpublish own jumpjet_system_page content'] = array(
    'name' => 'unpublish own jumpjet_system_page content',
    'roles' => array(
      '0' => 'web developer',
    ),
  );

  return $permissions;
}
