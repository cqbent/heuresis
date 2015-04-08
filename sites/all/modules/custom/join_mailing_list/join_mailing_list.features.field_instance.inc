<?php
/**
 * @file
 * join_mailing_list.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function join_mailing_list_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'entityform-join_mailing_list-field_email_address'
  $field_instances['entityform-join_mailing_list-field_email_address'] = array(
    'bundle' => 'join_mailing_list',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_email_address',
    'label' => 'Stay in the loop as we launch and update our products:',
    'placeholder' => 'Email Address',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'use_title_as_placeholder' => 0,
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Stay in the loop as we launch and update our products:');

  return $field_instances;
}
