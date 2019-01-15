<?php
/**
 * @file
 * luggage_bean_video.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function luggage_bean_video_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create any video bean'.
  $permissions['create any video bean'] = array(
    'name' => 'create any video bean',
    'roles' => array(
      'bean editor' => 'bean editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any video bean'.
  $permissions['delete any video bean'] = array(
    'name' => 'delete any video bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'edit any video bean'.
  $permissions['edit any video bean'] = array(
    'name' => 'edit any video bean',
    'roles' => array(
      'bean editor' => 'bean editor',
      'content editor' => 'content editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any video bean'.
  $permissions['view any video bean'] = array(
    'name' => 'view any video bean',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  return $permissions;
}
