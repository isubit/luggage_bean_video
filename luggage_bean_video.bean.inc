<?php
/**
 * @file
 * luggage_bean_video.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function luggage_bean_video_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'video';
  $bean_type->label = 'Video';
  $bean_type->options = '';
  $bean_type->description = 'Embed a video with a title and caption.';
  $export['video'] = $bean_type;

  return $export;
}
