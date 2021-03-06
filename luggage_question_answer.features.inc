<?php
/**
 * @file
 * luggage_question_answer.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function luggage_question_answer_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function luggage_question_answer_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function luggage_question_answer_node_info() {
  $items = array(
    'qa' => array(
      'name' => t('Question and Answer'),
      'base' => 'node_content',
      'description' => t('A question and answer post.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
