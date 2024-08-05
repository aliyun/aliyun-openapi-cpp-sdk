/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/arms/model/CreateOrUpdateAlertRuleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

CreateOrUpdateAlertRuleResult::CreateOrUpdateAlertRuleResult() :
	ServiceResult()
{}

CreateOrUpdateAlertRuleResult::CreateOrUpdateAlertRuleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateOrUpdateAlertRuleResult::~CreateOrUpdateAlertRuleResult()
{}

void CreateOrUpdateAlertRuleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto alertRuleNode = value["AlertRule"];
	if(!alertRuleNode["AlertId"].isNull())
		alertRule_.alertId = std::stof(alertRuleNode["AlertId"].asString());
	if(!alertRuleNode["AlertName"].isNull())
		alertRule_.alertName = alertRuleNode["AlertName"].asString();
	if(!alertRuleNode["UserId"].isNull())
		alertRule_.userId = alertRuleNode["UserId"].asString();
	if(!alertRuleNode["RegionId"].isNull())
		alertRule_.regionId = alertRuleNode["RegionId"].asString();
	if(!alertRuleNode["AlertType"].isNull())
		alertRule_.alertType = alertRuleNode["AlertType"].asString();
	if(!alertRuleNode["AlertStatus"].isNull())
		alertRule_.alertStatus = alertRuleNode["AlertStatus"].asString();
	if(!alertRuleNode["CreatedTime"].isNull())
		alertRule_.createdTime = std::stol(alertRuleNode["CreatedTime"].asString());
	if(!alertRuleNode["UpdatedTime"].isNull())
		alertRule_.updatedTime = std::stol(alertRuleNode["UpdatedTime"].asString());
	if(!alertRuleNode["Extend"].isNull())
		alertRule_.extend = alertRuleNode["Extend"].asString();
	if(!alertRuleNode["NotifyStrategy"].isNull())
		alertRule_.notifyStrategy = alertRuleNode["NotifyStrategy"].asString();
	if(!alertRuleNode["AutoAddNewApplication"].isNull())
		alertRule_.autoAddNewApplication = alertRuleNode["AutoAddNewApplication"].asString() == "true";
	if(!alertRuleNode["MetricsType"].isNull())
		alertRule_.metricsType = alertRuleNode["MetricsType"].asString();
	if(!alertRuleNode["AlertCheckType"].isNull())
		alertRule_.alertCheckType = alertRuleNode["AlertCheckType"].asString();
	if(!alertRuleNode["ClusterId"].isNull())
		alertRule_.clusterId = alertRuleNode["ClusterId"].asString();
	if(!alertRuleNode["AlertGroup"].isNull())
		alertRule_.alertGroup = std::stol(alertRuleNode["AlertGroup"].asString());
	if(!alertRuleNode["PromQL"].isNull())
		alertRule_.promQL = alertRuleNode["PromQL"].asString();
	if(!alertRuleNode["Duration"].isNull())
		alertRule_.duration = alertRuleNode["Duration"].asString();
	if(!alertRuleNode["Level"].isNull())
		alertRule_.level = alertRuleNode["Level"].asString();
	if(!alertRuleNode["Message"].isNull())
		alertRule_.message = alertRuleNode["Message"].asString();
	if(!alertRuleNode["NotifyMode"].isNull())
		alertRule_.notifyMode = alertRuleNode["NotifyMode"].asString();
	auto allLabelsNode = alertRuleNode["Labels"]["labelsItem"];
	for (auto alertRuleNodeLabelslabelsItem : allLabelsNode)
	{
		AlertRule::LabelsItem labelsItemObject;
		if(!alertRuleNodeLabelslabelsItem["Name"].isNull())
			labelsItemObject.name = alertRuleNodeLabelslabelsItem["Name"].asString();
		if(!alertRuleNodeLabelslabelsItem["Value"].isNull())
			labelsItemObject.value = alertRuleNodeLabelslabelsItem["Value"].asString();
		alertRule_.labels.push_back(labelsItemObject);
	}
	auto allAnnotationsNode = alertRuleNode["Annotations"]["annotationsItem"];
	for (auto alertRuleNodeAnnotationsannotationsItem : allAnnotationsNode)
	{
		AlertRule::AnnotationsItem annotationsItemObject;
		if(!alertRuleNodeAnnotationsannotationsItem["Name"].isNull())
			annotationsItemObject.name = alertRuleNodeAnnotationsannotationsItem["Name"].asString();
		if(!alertRuleNodeAnnotationsannotationsItem["Value"].isNull())
			annotationsItemObject.value = alertRuleNodeAnnotationsannotationsItem["Value"].asString();
		alertRule_.annotations.push_back(annotationsItemObject);
	}
	auto allTagsNode = alertRuleNode["Tags"]["Tag"];
	for (auto alertRuleNodeTagsTag : allTagsNode)
	{
		AlertRule::Tag tagObject;
		if(!alertRuleNodeTagsTag["Key"].isNull())
			tagObject.key = alertRuleNodeTagsTag["Key"].asString();
		if(!alertRuleNodeTagsTag["Value"].isNull())
			tagObject.value = alertRuleNodeTagsTag["Value"].asString();
		alertRule_.tags.push_back(tagObject);
	}
	auto alertRuleContentNode = alertRuleNode["AlertRuleContent"];
	if(!alertRuleContentNode["Condition"].isNull())
		alertRule_.alertRuleContent.condition = alertRuleContentNode["Condition"].asString();
	auto allAlertRuleItemsNode = alertRuleContentNode["AlertRuleItems"]["alertRuleItemsItem"];
	for (auto alertRuleContentNodeAlertRuleItemsalertRuleItemsItem : allAlertRuleItemsNode)
	{
		AlertRule::AlertRuleContent::AlertRuleItemsItem alertRuleItemsItemObject;
		if(!alertRuleContentNodeAlertRuleItemsalertRuleItemsItem["N"].isNull())
			alertRuleItemsItemObject.n = std::stof(alertRuleContentNodeAlertRuleItemsalertRuleItemsItem["N"].asString());
		if(!alertRuleContentNodeAlertRuleItemsalertRuleItemsItem["MetricKey"].isNull())
			alertRuleItemsItemObject.metricKey = alertRuleContentNodeAlertRuleItemsalertRuleItemsItem["MetricKey"].asString();
		if(!alertRuleContentNodeAlertRuleItemsalertRuleItemsItem["Aggregate"].isNull())
			alertRuleItemsItemObject.aggregate = alertRuleContentNodeAlertRuleItemsalertRuleItemsItem["Aggregate"].asString();
		if(!alertRuleContentNodeAlertRuleItemsalertRuleItemsItem["Operator"].isNull())
			alertRuleItemsItemObject._operator = alertRuleContentNodeAlertRuleItemsalertRuleItemsItem["Operator"].asString();
		if(!alertRuleContentNodeAlertRuleItemsalertRuleItemsItem["Value"].isNull())
			alertRuleItemsItemObject.value = alertRuleContentNodeAlertRuleItemsalertRuleItemsItem["Value"].asString();
		alertRule_.alertRuleContent.alertRuleItems.push_back(alertRuleItemsItemObject);
	}
	auto filtersNode = alertRuleNode["Filters"];
	auto allDimFiltersNode = filtersNode["DimFilters"]["dimFiltersItem"];
	for (auto filtersNodeDimFiltersdimFiltersItem : allDimFiltersNode)
	{
		AlertRule::Filters::DimFiltersItem dimFiltersItemObject;
		if(!filtersNodeDimFiltersdimFiltersItem["FilterKey"].isNull())
			dimFiltersItemObject.filterKey = filtersNodeDimFiltersdimFiltersItem["FilterKey"].asString();
		if(!filtersNodeDimFiltersdimFiltersItem["FilterOpt"].isNull())
			dimFiltersItemObject.filterOpt = filtersNodeDimFiltersdimFiltersItem["FilterOpt"].asString();
		auto allFilterValues = value["FilterValues"]["filterValues"];
		for (auto value : allFilterValues)
			dimFiltersItemObject.filterValues.push_back(value.asString());
		alertRule_.filters.dimFilters.push_back(dimFiltersItemObject);
	}
	auto allCustomSLSFiltersNode = filtersNode["CustomSLSFilters"]["customSLSFiltersItem"];
	for (auto filtersNodeCustomSLSFilterscustomSLSFiltersItem : allCustomSLSFiltersNode)
	{
		AlertRule::Filters::CustomSLSFiltersItem customSLSFiltersItemObject;
		if(!filtersNodeCustomSLSFilterscustomSLSFiltersItem["Key"].isNull())
			customSLSFiltersItemObject.key = filtersNodeCustomSLSFilterscustomSLSFiltersItem["Key"].asString();
		if(!filtersNodeCustomSLSFilterscustomSLSFiltersItem["Opt"].isNull())
			customSLSFiltersItemObject.opt = filtersNodeCustomSLSFilterscustomSLSFiltersItem["Opt"].asString();
		if(!filtersNodeCustomSLSFilterscustomSLSFiltersItem["Value"].isNull())
			customSLSFiltersItemObject.value = filtersNodeCustomSLSFilterscustomSLSFiltersItem["Value"].asString();
		if(!filtersNodeCustomSLSFilterscustomSLSFiltersItem["T"].isNull())
			customSLSFiltersItemObject.t = filtersNodeCustomSLSFilterscustomSLSFiltersItem["T"].asString();
		if(!filtersNodeCustomSLSFilterscustomSLSFiltersItem["Show"].isNull())
			customSLSFiltersItemObject.show = filtersNodeCustomSLSFilterscustomSLSFiltersItem["Show"].asString() == "true";
		alertRule_.filters.customSLSFilters.push_back(customSLSFiltersItemObject);
	}
		auto allCustomSLSGroupByDimensions = filtersNode["CustomSLSGroupByDimensions"]["customSLSGroupByDimensions"];
		for (auto value : allCustomSLSGroupByDimensions)
			alertRule_.filters.customSLSGroupByDimensions.push_back(value.asString());
		auto allCustomSLSWheres = filtersNode["CustomSLSWheres"]["customSLSWheres"];
		for (auto value : allCustomSLSWheres)
			alertRule_.filters.customSLSWheres.push_back(value.asString());
		auto allPids = alertRuleNode["Pids"]["pids"];
		for (auto value : allPids)
			alertRule_.pids.push_back(value.asString());

}

CreateOrUpdateAlertRuleResult::AlertRule CreateOrUpdateAlertRuleResult::getAlertRule()const
{
	return alertRule_;
}

