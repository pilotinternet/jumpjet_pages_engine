<?php

/**
 * Implementation of hook_strongarm().
 */
function jumpjet_pages_engine_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_jumpjet_sitepage';
  $strongarm->value = 0;

  $export['comment_anonymous_jumpjet_sitepage'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_jumpjet_system_page';
  $strongarm->value = 0;

  $export['comment_anonymous_jumpjet_system_page'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_jumpjet_sitepage';
  $strongarm->value = '3';

  $export['comment_controls_jumpjet_sitepage'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_jumpjet_system_page';
  $strongarm->value = '3';

  $export['comment_controls_jumpjet_system_page'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_jumpjet_sitepage';
  $strongarm->value = '4';

  $export['comment_default_mode_jumpjet_sitepage'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_jumpjet_system_page';
  $strongarm->value = '4';

  $export['comment_default_mode_jumpjet_system_page'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_jumpjet_sitepage';
  $strongarm->value = '1';

  $export['comment_default_order_jumpjet_sitepage'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_jumpjet_system_page';
  $strongarm->value = '1';

  $export['comment_default_order_jumpjet_system_page'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_jumpjet_sitepage';
  $strongarm->value = '50';

  $export['comment_default_per_page_jumpjet_sitepage'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_jumpjet_system_page';
  $strongarm->value = '50';

  $export['comment_default_per_page_jumpjet_system_page'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_jumpjet_sitepage';
  $strongarm->value = '0';

  $export['comment_form_location_jumpjet_sitepage'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_jumpjet_system_page';
  $strongarm->value = '0';

  $export['comment_form_location_jumpjet_system_page'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_jumpjet_sitepage';
  $strongarm->value = '0';

  $export['comment_jumpjet_sitepage'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_jumpjet_system_page';
  $strongarm->value = '0';

  $export['comment_jumpjet_system_page'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_jumpjet_sitepage';
  $strongarm->value = '1';

  $export['comment_preview_jumpjet_sitepage'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_jumpjet_system_page';
  $strongarm->value = '1';

  $export['comment_preview_jumpjet_system_page'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_jumpjet_sitepage';
  $strongarm->value = '1';

  $export['comment_subject_field_jumpjet_sitepage'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_jumpjet_system_page';
  $strongarm->value = '1';

  $export['comment_subject_field_jumpjet_system_page'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commentformsettings_anonymoushomepage_jumpjet_sitepage';
  $strongarm->value = '0';

  $export['commentformsettings_anonymoushomepage_jumpjet_sitepage'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commentformsettings_anonymoushomepage_jumpjet_system_page';
  $strongarm->value = '0';

  $export['commentformsettings_anonymoushomepage_jumpjet_system_page'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commentformsettings_anonymousmail_jumpjet_sitepage';
  $strongarm->value = '0';

  $export['commentformsettings_anonymousmail_jumpjet_sitepage'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commentformsettings_anonymousmail_jumpjet_system_page';
  $strongarm->value = '0';

  $export['commentformsettings_anonymousmail_jumpjet_system_page'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commentformsettings_anonymousname_jumpjet_sitepage';
  $strongarm->value = '0';

  $export['commentformsettings_anonymousname_jumpjet_sitepage'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commentformsettings_anonymousname_jumpjet_system_page';
  $strongarm->value = '0';

  $export['commentformsettings_anonymousname_jumpjet_system_page'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commentformsettings_author_jumpjet_sitepage';
  $strongarm->value = '0';

  $export['commentformsettings_author_jumpjet_sitepage'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commentformsettings_author_jumpjet_system_page';
  $strongarm->value = '0';

  $export['commentformsettings_author_jumpjet_system_page'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commentformsettings_inputformat_jumpjet_sitepage';
  $strongarm->value = '0';

  $export['commentformsettings_inputformat_jumpjet_sitepage'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commentformsettings_inputformat_jumpjet_system_page';
  $strongarm->value = '0';

  $export['commentformsettings_inputformat_jumpjet_system_page'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commentformsettings_preview_jumpjet_sitepage';
  $strongarm->value = '0';

  $export['commentformsettings_preview_jumpjet_sitepage'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commentformsettings_preview_jumpjet_system_page';
  $strongarm->value = '0';

  $export['commentformsettings_preview_jumpjet_system_page'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commentformsettings_size_jumpjet_sitepage';
  $strongarm->value = '15';

  $export['commentformsettings_size_jumpjet_sitepage'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commentformsettings_size_jumpjet_system_page';
  $strongarm->value = '15';

  $export['commentformsettings_size_jumpjet_system_page'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commentformsettings_submit_jumpjet_sitepage';
  $strongarm->value = 'Save';

  $export['commentformsettings_submit_jumpjet_sitepage'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commentformsettings_submit_jumpjet_system_page';
  $strongarm->value = 'Save';

  $export['commentformsettings_submit_jumpjet_system_page'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commentformsettings_title_jumpjet_sitepage';
  $strongarm->value = '0';

  $export['commentformsettings_title_jumpjet_sitepage'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commentformsettings_title_jumpjet_system_page';
  $strongarm->value = '0';

  $export['commentformsettings_title_jumpjet_system_page'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_jumpjet_sitepage';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-4',
    'revision_information' => '-2',
    'author' => '0',
    'options' => '-1',
    'comment_settings' => '3',
    'menu' => '1',
    'taxonomy' => '-3',
    'path' => '2',
  );

  $export['content_extra_weights_jumpjet_sitepage'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_jumpjet_system_page';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-4',
    'revision_information' => '-3',
    'author' => '-2',
    'options' => '-1',
    'comment_settings' => '2',
    'menu' => '0',
    'path' => '1',
  );

  $export['content_extra_weights_jumpjet_system_page'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'enable_revisions_page_jumpjet_sitepage';
  $strongarm->value = 1;

  $export['enable_revisions_page_jumpjet_sitepage'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'enable_revisions_page_jumpjet_system_page';
  $strongarm->value = 1;

  $export['enable_revisions_page_jumpjet_system_page'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'form_build_id_jumpjet_sitepage';
  $strongarm->value = 'form-e7919e5cb8c5e334a3c8a3d5297ea660';

  $export['form_build_id_jumpjet_sitepage'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'form_build_id_jumpjet_system_page';
  $strongarm->value = 'form-500636fe4fe3f13d406e605a84b5555a';

  $export['form_build_id_jumpjet_system_page'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_jumpjet_sitepage';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );

  $export['node_options_jumpjet_sitepage'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_jumpjet_system_page';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );

  $export['node_options_jumpjet_system_page'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformsettings_cancel_jumpjet_sitepage';
  $strongarm->value = '1';

  $export['nodeformsettings_cancel_jumpjet_sitepage'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformsettings_cancel_jumpjet_system_page';
  $strongarm->value = '1';

  $export['nodeformsettings_cancel_jumpjet_system_page'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformsettings_inputformat_jumpjet_sitepage';
  $strongarm->value = '0';

  $export['nodeformsettings_inputformat_jumpjet_sitepage'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformsettings_inputformat_jumpjet_system_page';
  $strongarm->value = '0';

  $export['nodeformsettings_inputformat_jumpjet_system_page'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformsettings_preview_jumpjet_sitepage';
  $strongarm->value = 0;

  $export['nodeformsettings_preview_jumpjet_sitepage'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformsettings_preview_jumpjet_system_page';
  $strongarm->value = 0;

  $export['nodeformsettings_preview_jumpjet_system_page'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformsettings_revisionlog_jumpjet_sitepage';
  $strongarm->value = '0';

  $export['nodeformsettings_revisionlog_jumpjet_sitepage'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformsettings_revisionlog_jumpjet_system_page';
  $strongarm->value = '0';

  $export['nodeformsettings_revisionlog_jumpjet_system_page'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformsettings_splitsummary_jumpjet_sitepage';
  $strongarm->value = '1';

  $export['nodeformsettings_splitsummary_jumpjet_sitepage'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformsettings_splitsummary_jumpjet_system_page';
  $strongarm->value = '1';

  $export['nodeformsettings_splitsummary_jumpjet_system_page'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformsettings_submit_jumpjet_sitepage';
  $strongarm->value = 'Save';

  $export['nodeformsettings_submit_jumpjet_sitepage'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformsettings_submit_jumpjet_system_page';
  $strongarm->value = 'Save';

  $export['nodeformsettings_submit_jumpjet_system_page'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'submission_body_rows_jumpjet_sitepage';
  $strongarm->value = '20';

  $export['submission_body_rows_jumpjet_sitepage'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'submission_body_rows_jumpjet_system_page';
  $strongarm->value = '20';

  $export['submission_body_rows_jumpjet_system_page'] = $strongarm;
  return $export;
}
