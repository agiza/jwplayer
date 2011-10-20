<?php

/**
 * @file
 * Provide the views JWPlayer style with default options and form.
 */

/**
 * Implements views_plugin_style().
 */
class jwplayer_style_plugin extends views_plugin_style {
  function option_definition() {
    $options = parent::option_definition();
    $options['playerwidth'] = array('default' => FALSE);
    $options['playerheight'] = array('default' => 1);
    return $options;
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $form['playerwidth'] = array(
      '#type' => 'textfield',
      '#title' => t('Player width'),
      '#default_value' => $this->options['playerwidth'],
    );
    $form['playerheight'] = array(
      '#type' => 'textfield',
      '#title' => t('Player height'),
      '#default_value' => $this->options['playerheight'],
    );

    $form['title_field'] = array(
      '#type' => 'select',
      '#title' => t('Title field'),
      '#description' => t('Select the field that contains the title of the video to play.'),
      '#default_value' => $this->options['title_field'],
      '#options' => $form['grouping']['#options'],
      '#required' => TRUE,
    );

    $form['video_field'] = array(
      '#type' => 'select',
      '#title' => t('Video field'),
      '#description' => t('Select the field that contains the URL of the video to play.'),
      '#default_value' => $this->options['video_field'],
      '#options' => $form['grouping']['#options'],
      '#required' => TRUE,
    );
  }
}
