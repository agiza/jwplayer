<?php
/**
 * @file
 * Views integration for jwplayer module.
 */

/**
  * Implements hook_views_plugin().
  */
function jwplayer_views_plugins() {
  return array(
    'module' => 'jwplayer',
    'style' => array(
      'jwplayer' => array(
        'title' => t('JWPlayer with playlist'),
        'theme' => 'jwplayer_playlist_view',
        'theme path' => drupal_get_path('module', 'jwplayer') . '/templates',
        'path' => drupal_get_path('module', 'jwplayer') . '/includes',
        'help' => t('Display a video player and a playlist containing all of the selected videos.'),
        'handler' => 'jwplayer_style_plugin',
        'uses row plugin' => TRUE,
        'uses options' => TRUE,
        'type' => 'normal',
      ),
    ),
  );
}