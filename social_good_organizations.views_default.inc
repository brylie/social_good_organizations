<?php
/**
 * @file
 * social_good_organizations.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function social_good_organizations_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'social_good_ngos';
  $view->description = 'Displays a list of Social Good Organizations, along with corresponding export options (CSV, XLS).';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Social Good Organizations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Social Good Organizations';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'social_good_organization' => 'social_good_organization',
  );
  /* Filter criterion: Content: Country (field_contry) */
  $handler->display->display_options['filters']['field_contry_tid']['id'] = 'field_contry_tid';
  $handler->display->display_options['filters']['field_contry_tid']['table'] = 'field_data_field_contry';
  $handler->display->display_options['filters']['field_contry_tid']['field'] = 'field_contry_tid';
  $handler->display->display_options['filters']['field_contry_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_contry_tid']['expose']['operator_id'] = 'field_contry_tid_op';
  $handler->display->display_options['filters']['field_contry_tid']['expose']['label'] = 'Country';
  $handler->display->display_options['filters']['field_contry_tid']['expose']['operator'] = 'field_contry_tid_op';
  $handler->display->display_options['filters']['field_contry_tid']['expose']['identifier'] = 'field_contry_tid';
  $handler->display->display_options['filters']['field_contry_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_contry_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_contry_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_contry_tid']['vocabulary'] = 'country';
  $handler->display->display_options['filters']['field_contry_tid']['hierarchy'] = 1;
  $handler->display->display_options['filters']['field_contry_tid']['error_message'] = FALSE;
  /* Filter criterion: Content: Population Served (field_population_served) */
  $handler->display->display_options['filters']['field_population_served_tid']['id'] = 'field_population_served_tid';
  $handler->display->display_options['filters']['field_population_served_tid']['table'] = 'field_data_field_population_served';
  $handler->display->display_options['filters']['field_population_served_tid']['field'] = 'field_population_served_tid';
  $handler->display->display_options['filters']['field_population_served_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_population_served_tid']['expose']['operator_id'] = 'field_population_served_tid_op';
  $handler->display->display_options['filters']['field_population_served_tid']['expose']['label'] = 'Population Served';
  $handler->display->display_options['filters']['field_population_served_tid']['expose']['operator'] = 'field_population_served_tid_op';
  $handler->display->display_options['filters']['field_population_served_tid']['expose']['identifier'] = 'field_population_served_tid';
  $handler->display->display_options['filters']['field_population_served_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_population_served_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_population_served_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_population_served_tid']['vocabulary'] = 'population';
  $handler->display->display_options['filters']['field_population_served_tid']['error_message'] = FALSE;
  /* Filter criterion: Content: Primary Mission (field_primary_mission) */
  $handler->display->display_options['filters']['field_primary_mission_tid']['id'] = 'field_primary_mission_tid';
  $handler->display->display_options['filters']['field_primary_mission_tid']['table'] = 'field_data_field_primary_mission';
  $handler->display->display_options['filters']['field_primary_mission_tid']['field'] = 'field_primary_mission_tid';
  $handler->display->display_options['filters']['field_primary_mission_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_primary_mission_tid']['expose']['operator_id'] = 'field_primary_mission_tid_op';
  $handler->display->display_options['filters']['field_primary_mission_tid']['expose']['label'] = 'Primary Mission';
  $handler->display->display_options['filters']['field_primary_mission_tid']['expose']['operator'] = 'field_primary_mission_tid_op';
  $handler->display->display_options['filters']['field_primary_mission_tid']['expose']['identifier'] = 'field_primary_mission_tid';
  $handler->display->display_options['filters']['field_primary_mission_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_primary_mission_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_primary_mission_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_primary_mission_tid']['vocabulary'] = 'mission';
  $handler->display->display_options['filters']['field_primary_mission_tid']['error_message'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['label'] = 'Welcome to the Archive of Social Good';
  $handler->display->display_options['header']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['header']['area_text_custom']['content'] = 'Select the country, population, or mission of the site that is of interest.  You can make multiple selections, but the database is limited at this point and you may not get any results.  Selecting a result site will lead you to a page with more information and a web link.
';
  $handler->display->display_options['path'] = 'social-good';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Archive of Social Good';
  $handler->display->display_options['menu']['description'] = 'Search the archive';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'social-good-ngos.xml';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
  );

  /* Display: CSV export */
  $handler = $view->new_display('views_data_export', 'CSV export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 1;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Description';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Contact */
  $handler->display->display_options['fields']['field_contact']['id'] = 'field_contact';
  $handler->display->display_options['fields']['field_contact']['table'] = 'field_data_field_contact';
  $handler->display->display_options['fields']['field_contact']['field'] = 'field_contact';
  $handler->display->display_options['fields']['field_contact']['element_label_colon'] = FALSE;
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_contry']['id'] = 'field_contry';
  $handler->display->display_options['fields']['field_contry']['table'] = 'field_data_field_contry';
  $handler->display->display_options['fields']['field_contry']['field'] = 'field_contry';
  $handler->display->display_options['fields']['field_contry']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contry']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_contact_email']['id'] = 'field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['table'] = 'field_data_field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['field'] = 'field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contact_email']['type'] = 'text_plain';
  /* Field: Content: Mission */
  $handler->display->display_options['fields']['field_mission']['id'] = 'field_mission';
  $handler->display->display_options['fields']['field_mission']['table'] = 'field_data_field_mission';
  $handler->display->display_options['fields']['field_mission']['field'] = 'field_mission';
  $handler->display->display_options['fields']['field_mission']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mission']['type'] = 'text_plain';
  /* Field: Content: Population Served */
  $handler->display->display_options['fields']['field_population_served']['id'] = 'field_population_served';
  $handler->display->display_options['fields']['field_population_served']['table'] = 'field_data_field_population_served';
  $handler->display->display_options['fields']['field_population_served']['field'] = 'field_population_served';
  $handler->display->display_options['fields']['field_population_served']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_population_served']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Primary Mission */
  $handler->display->display_options['fields']['field_primary_mission']['id'] = 'field_primary_mission';
  $handler->display->display_options['fields']['field_primary_mission']['table'] = 'field_data_field_primary_mission';
  $handler->display->display_options['fields']['field_primary_mission']['field'] = 'field_primary_mission';
  $handler->display->display_options['fields']['field_primary_mission']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_primary_mission']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Secondary Mission */
  $handler->display->display_options['fields']['field_2nd_mission']['id'] = 'field_2nd_mission';
  $handler->display->display_options['fields']['field_2nd_mission']['table'] = 'field_data_field_2nd_mission';
  $handler->display->display_options['fields']['field_2nd_mission']['field'] = 'field_2nd_mission';
  $handler->display->display_options['fields']['field_2nd_mission']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_2nd_mission']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Tertiary Mission */
  $handler->display->display_options['fields']['field_3rd_mission']['id'] = 'field_3rd_mission';
  $handler->display->display_options['fields']['field_3rd_mission']['table'] = 'field_data_field_3rd_mission';
  $handler->display->display_options['fields']['field_3rd_mission']['field'] = 'field_3rd_mission';
  $handler->display->display_options['fields']['field_3rd_mission']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_3rd_mission']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_website_link']['id'] = 'field_website_link';
  $handler->display->display_options['fields']['field_website_link']['table'] = 'field_data_field_website_link';
  $handler->display->display_options['fields']['field_website_link']['field'] = 'field_website_link';
  $handler->display->display_options['fields']['field_website_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_website_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_website_link']['type'] = 'link_plain';
  $handler->display->display_options['path'] = 'social-good/csv';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );

  /* Display: XLS export */
  $handler = $view->new_display('views_data_export', 'XLS export', 'views_data_export_3');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Description';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Contact */
  $handler->display->display_options['fields']['field_contact']['id'] = 'field_contact';
  $handler->display->display_options['fields']['field_contact']['table'] = 'field_data_field_contact';
  $handler->display->display_options['fields']['field_contact']['field'] = 'field_contact';
  $handler->display->display_options['fields']['field_contact']['element_label_colon'] = FALSE;
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_contry']['id'] = 'field_contry';
  $handler->display->display_options['fields']['field_contry']['table'] = 'field_data_field_contry';
  $handler->display->display_options['fields']['field_contry']['field'] = 'field_contry';
  $handler->display->display_options['fields']['field_contry']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contry']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_contact_email']['id'] = 'field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['table'] = 'field_data_field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['field'] = 'field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contact_email']['type'] = 'text_plain';
  /* Field: Content: Mission */
  $handler->display->display_options['fields']['field_mission']['id'] = 'field_mission';
  $handler->display->display_options['fields']['field_mission']['table'] = 'field_data_field_mission';
  $handler->display->display_options['fields']['field_mission']['field'] = 'field_mission';
  $handler->display->display_options['fields']['field_mission']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mission']['type'] = 'text_plain';
  /* Field: Content: Population Served */
  $handler->display->display_options['fields']['field_population_served']['id'] = 'field_population_served';
  $handler->display->display_options['fields']['field_population_served']['table'] = 'field_data_field_population_served';
  $handler->display->display_options['fields']['field_population_served']['field'] = 'field_population_served';
  $handler->display->display_options['fields']['field_population_served']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_population_served']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Primary Mission */
  $handler->display->display_options['fields']['field_primary_mission']['id'] = 'field_primary_mission';
  $handler->display->display_options['fields']['field_primary_mission']['table'] = 'field_data_field_primary_mission';
  $handler->display->display_options['fields']['field_primary_mission']['field'] = 'field_primary_mission';
  $handler->display->display_options['fields']['field_primary_mission']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_primary_mission']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Secondary Mission */
  $handler->display->display_options['fields']['field_2nd_mission']['id'] = 'field_2nd_mission';
  $handler->display->display_options['fields']['field_2nd_mission']['table'] = 'field_data_field_2nd_mission';
  $handler->display->display_options['fields']['field_2nd_mission']['field'] = 'field_2nd_mission';
  $handler->display->display_options['fields']['field_2nd_mission']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_2nd_mission']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Tertiary Mission */
  $handler->display->display_options['fields']['field_3rd_mission']['id'] = 'field_3rd_mission';
  $handler->display->display_options['fields']['field_3rd_mission']['table'] = 'field_data_field_3rd_mission';
  $handler->display->display_options['fields']['field_3rd_mission']['field'] = 'field_3rd_mission';
  $handler->display->display_options['fields']['field_3rd_mission']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_3rd_mission']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_website_link']['id'] = 'field_website_link';
  $handler->display->display_options['fields']['field_website_link']['table'] = 'field_data_field_website_link';
  $handler->display->display_options['fields']['field_website_link']['field'] = 'field_website_link';
  $handler->display->display_options['fields']['field_website_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_website_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_website_link']['type'] = 'link_plain';
  $handler->display->display_options['path'] = 'social-good/xls';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );

  /* Display: XML export */
  $handler = $view->new_display('views_data_export', 'XML export', 'views_data_export_2');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['style_options']['transform_type'] = 'underline';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Description';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Contact */
  $handler->display->display_options['fields']['field_contact']['id'] = 'field_contact';
  $handler->display->display_options['fields']['field_contact']['table'] = 'field_data_field_contact';
  $handler->display->display_options['fields']['field_contact']['field'] = 'field_contact';
  $handler->display->display_options['fields']['field_contact']['element_label_colon'] = FALSE;
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_contry']['id'] = 'field_contry';
  $handler->display->display_options['fields']['field_contry']['table'] = 'field_data_field_contry';
  $handler->display->display_options['fields']['field_contry']['field'] = 'field_contry';
  $handler->display->display_options['fields']['field_contry']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contry']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_contact_email']['id'] = 'field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['table'] = 'field_data_field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['field'] = 'field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contact_email']['type'] = 'text_plain';
  /* Field: Content: Mission */
  $handler->display->display_options['fields']['field_mission']['id'] = 'field_mission';
  $handler->display->display_options['fields']['field_mission']['table'] = 'field_data_field_mission';
  $handler->display->display_options['fields']['field_mission']['field'] = 'field_mission';
  $handler->display->display_options['fields']['field_mission']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mission']['type'] = 'text_plain';
  /* Field: Content: Population Served */
  $handler->display->display_options['fields']['field_population_served']['id'] = 'field_population_served';
  $handler->display->display_options['fields']['field_population_served']['table'] = 'field_data_field_population_served';
  $handler->display->display_options['fields']['field_population_served']['field'] = 'field_population_served';
  $handler->display->display_options['fields']['field_population_served']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_population_served']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Primary Mission */
  $handler->display->display_options['fields']['field_primary_mission']['id'] = 'field_primary_mission';
  $handler->display->display_options['fields']['field_primary_mission']['table'] = 'field_data_field_primary_mission';
  $handler->display->display_options['fields']['field_primary_mission']['field'] = 'field_primary_mission';
  $handler->display->display_options['fields']['field_primary_mission']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_primary_mission']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Secondary Mission */
  $handler->display->display_options['fields']['field_2nd_mission']['id'] = 'field_2nd_mission';
  $handler->display->display_options['fields']['field_2nd_mission']['table'] = 'field_data_field_2nd_mission';
  $handler->display->display_options['fields']['field_2nd_mission']['field'] = 'field_2nd_mission';
  $handler->display->display_options['fields']['field_2nd_mission']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_2nd_mission']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Tertiary Mission */
  $handler->display->display_options['fields']['field_3rd_mission']['id'] = 'field_3rd_mission';
  $handler->display->display_options['fields']['field_3rd_mission']['table'] = 'field_data_field_3rd_mission';
  $handler->display->display_options['fields']['field_3rd_mission']['field'] = 'field_3rd_mission';
  $handler->display->display_options['fields']['field_3rd_mission']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_3rd_mission']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_website_link']['id'] = 'field_website_link';
  $handler->display->display_options['fields']['field_website_link']['table'] = 'field_data_field_website_link';
  $handler->display->display_options['fields']['field_website_link']['field'] = 'field_website_link';
  $handler->display->display_options['fields']['field_website_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_website_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_website_link']['type'] = 'link_plain';
  $handler->display->display_options['path'] = 'social-good/xml';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $export['social_good_ngos'] = $view;

  return $export;
}
