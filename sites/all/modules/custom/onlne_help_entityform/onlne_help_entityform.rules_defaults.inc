<?php
/**
 * @file
 * onlne_help_entityform.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function onlne_help_entityform_default_rules_configuration() {
  $items = array();
  $items['rules_online_help_nofitication'] = entity_import('rules_config', '{ "rules_online_help_nofitication" : {
      "LABEL" : "Online Help Nofitication",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "entityform" ],
      "ON" : { "entityform_insert" : [] },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "entityform" ],
            "type" : "entityform",
            "bundle" : { "value" : { "online_help" : "online_help" } }
          }
        }
      ],
      "DO" : [
        { "mail" : {
            "to" : "cqbent@gmail.com",
            "subject" : "online help submission",
            "message" : "view the submission here: \\r\\n[entityform:url]",
            "from" : "cqbent@gmail.com",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
