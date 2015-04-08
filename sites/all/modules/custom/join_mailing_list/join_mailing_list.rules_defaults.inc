<?php
/**
 * @file
 * join_mailing_list.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function join_mailing_list_default_rules_configuration() {
  $items = array();
  $items['rules_join_mailing_list'] = entity_import('rules_config', '{ "rules_join_mailing_list" : {
      "LABEL" : "Join Mailing List",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "entityform" ],
      "ON" : { "entityform_insert" : [] },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "entityform" ],
            "type" : "entityform",
            "bundle" : { "value" : { "join_mailing_list" : "join_mailing_list" } }
          }
        }
      ],
      "DO" : [
        { "mail" : {
            "to" : "cqbent@gmail.com",
            "subject" : "Join mailing list request",
            "message" : "A new request to join mailing list from:\\r\\n[entityform:field-email-address]\\r\\n",
            "from" : "info@heuresistech.com",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
