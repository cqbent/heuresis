<?php
/**
 * @file
 * onlne_help_entityform.features.inc
 */

/**
 * Implements hook_default_entityform_type().
 */
function onlne_help_entityform_default_entityform_type() {
  $items = array();
  $items['online_help'] = entity_import('entityform_type', '{
    "type" : "online_help",
    "label" : "Online help",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "full_html" },
      "submit_button_text" : "Submit Ticket",
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
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : {
        "value" : "\\u003Cp\\u003E\\u003Cstrong\\u003ENeed some help? \\u003C\\/strong\\u003EAsk a Tech. Please use the form below to submit\\u0026nbsp;a ticket to one of our techs:\\u003C\\/p\\u003E\\r\\n",
        "format" : "full_html"
      }
    },
    "weight" : "0",
    "rdf_mapping" : [],
    "paths" : { "submit" : {
        "source" : "eform\\/submit\\/online-help",
        "alias" : "customer-services\\/online-help",
        "language" : "und"
      }
    }
  }');
  return $items;
}
