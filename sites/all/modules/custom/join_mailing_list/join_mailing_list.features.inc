<?php
/**
 * @file
 * join_mailing_list.features.inc
 */

/**
 * Implements hook_default_entityform_type().
 */
function join_mailing_list_default_entityform_type() {
  $items = array();
  $items['join_mailing_list'] = entity_import('entityform_type', '{
    "type" : "join_mailing_list",
    "label" : "Join Mailing List",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "full_html" },
      "submit_button_text" : "Join Now",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "",
      "submission_text" : { "value" : "", "format" : "full_html" },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "1" : "1", "2" : 0, "3" : 0 },
      "resubmit_action" : "disallow",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "full_html" },
      "current_type" : "join_mailing_list",
      "enable_block" : 1
    },
    "weight" : "0",
    "rdf_mapping" : [],
    "paths" : []
  }');
  return $items;
}
