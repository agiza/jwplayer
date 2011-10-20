<?php
/**
 * @file
 * Admin pages for jwplayer module.
 */

/**
 * Settings form for JWPlayer module.
 */
function jwplayer_settings_form() {
  $form = array();

  if (!module_exists('ajaxlog')) {
  $form['jwplayer_ajaxlog'] = array(
    '#type' => 'markup',
    '#value' => t('Error logging for the video player requires the ajaxlog module.'),
  );
  }

  $form['jwplayer_error_log_enabled'] = array(
  '#type' => 'checkbox',
  '#title' => t('Enable error logging.'),
  '#default_value' => variable_get('jwplayer_error_log_enabled', FALSE),
  '#description' => t('Log video player errors with watchdog. Requires ajaxlog module.'),
  );
  return system_settings_form($form);
}
