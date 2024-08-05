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

#include <alibabacloud/arms/model/GetAlertRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

GetAlertRulesResult::GetAlertRulesResult() :
	ServiceResult()
{}

GetAlertRulesResult::GetAlertRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetAlertRulesResult::~GetAlertRulesResult()
{}

void GetAlertRulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto pageBeanNode = value["PageBean"];
	if(!pageBeanNode["Total"].isNull())
		pageBean_.total = std::stol(pageBeanNode["Total"].asString());
	if(!pageBeanNode["Page"].isNull())
		pageBean_.page = std::stol(pageBeanNode["Page"].asString());
	if(!pageBeanNode["Size"].isNull())
		pageBean_.size = std::stol(pageBeanNode["Size"].asString());
	auto allAlertRulesNode = pageBeanNode["AlertRules"]["alertRulesItem"];
	for (auto pageBeanNodeAlertRulesalertRulesItem : allAlertRulesNode)
	{
		PageBean::AlertRulesItem alertRulesItemObject;
		if(!pageBeanNodeAlertRulesalertRulesItem["AlertId"].isNull())
			alertRulesItemObject.alertId = std::stol(pageBeanNodeAlertRulesalertRulesItem["AlertId"].asString());
		if(!pageBeanNodeAlertRulesalertRulesItem["AlertName"].isNull())
			alertRulesItemObject.alertName = pageBeanNodeAlertRulesalertRulesItem["AlertName"].asString();
		if(!pageBeanNodeAlertRulesalertRulesItem["UserId"].isNull())
			alertRulesItemObject.userId = pageBeanNodeAlertRulesalertRulesItem["UserId"].asString();
		if(!pageBeanNodeAlertRulesalertRulesItem["RegionId"].isNull())
			alertRulesItemObject.regionId = pageBeanNodeAlertRulesalertRulesItem["RegionId"].asString();
		if(!pageBeanNodeAlertRulesalertRulesItem["AlertType"].isNull())
			alertRulesItemObject.alertType = pageBeanNodeAlertRulesalertRulesItem["AlertType"].asString();
		if(!pageBeanNodeAlertRulesalertRulesItem["AlertStatus"].isNull())
			alertRulesItemObject.alertStatus = pageBeanNodeAlertRulesalertRulesItem["AlertStatus"].asString();
		if(!pageBeanNodeAlertRulesalertRulesItem["CreatedTime"].isNull())
			alertRulesItemObject.createdTime = std::stol(pageBeanNodeAlertRulesalertRulesItem["CreatedTime"].asString());
		if(!pageBeanNodeAlertRulesalertRulesItem["UpdatedTime"].isNull())
			alertRulesItemObject.updatedTime = std::stol(pageBeanNodeAlertRulesalertRulesItem["UpdatedTime"].asString());
		if(!pageBeanNodeAlertRulesalertRulesItem["Extend"].isNull())
			alertRulesItemObject.extend = pageBeanNodeAlertRulesalertRulesItem["Extend"].asString();
		if(!pageBeanNodeAlertRulesalertRulesItem["NotifyStrategy"].isNull())
			alertRulesItemObject.notifyStrategy = pageBeanNodeAlertRulesalertRulesItem["NotifyStrategy"].asString();
		if(!pageBeanNodeAlertRulesalertRulesItem["AutoAddNewApplication"].isNull())
			alertRulesItemObject.autoAddNewApplication = pageBeanNodeAlertRulesalertRulesItem["AutoAddNewApplication"].asString() == "true";
		if(!pageBeanNodeAlertRulesalertRulesItem["MetricsType"].isNull())
			alertRulesItemObject.metricsType = pageBeanNodeAlertRulesalertRulesItem["MetricsType"].asString();
		if(!pageBeanNodeAlertRulesalertRulesItem["AlertCheckType"].isNull())
			alertRulesItemObject.alertCheckType = pageBeanNodeAlertRulesalertRulesItem["AlertCheckType"].asString();
		if(!pageBeanNodeAlertRulesalertRulesItem["ClusterId"].isNull())
			alertRulesItemObject.clusterId = pageBeanNodeAlertRulesalertRulesItem["ClusterId"].asString();
		if(!pageBeanNodeAlertRulesalertRulesItem["AlertGroup"].isNull())
			alertRulesItemObject.alertGroup = std::stol(pageBeanNodeAlertRulesalertRulesItem["AlertGroup"].asString());
		if(!pageBeanNodeAlertRulesalertRulesItem["PromQL"].isNull())
			alertRulesItemObject.promQL = pageBeanNodeAlertRulesalertRulesItem["PromQL"].asString();
		if(!pageBeanNodeAlertRulesalertRulesItem["Duration"].isNull())
			alertRulesItemObject.duration = pageBeanNodeAlertRulesalertRulesItem["Duration"].asString();
		if(!pageBeanNodeAlertRulesalertRulesItem["Level"].isNull())
			alertRulesItemObject.level = pageBeanNodeAlertRulesalertRulesItem["Level"].asString();
		if(!pageBeanNodeAlertRulesalertRulesItem["Message"].isNull())
			alertRulesItemObject.message = pageBeanNodeAlertRulesalertRulesItem["Message"].asString();
		if(!pageBeanNodeAlertRulesalertRulesItem["DurationCompareType"].isNull())
			alertRulesItemObject.durationCompareType = pageBeanNodeAlertRulesalertRulesItem["DurationCompareType"].asString();
		auto allLabelsNode = pageBeanNodeAlertRulesalertRulesItem["Labels"]["labelsItem"];
		for (auto pageBeanNodeAlertRulesalertRulesItemLabelslabelsItem : allLabelsNode)
		{
			PageBean::AlertRulesItem::LabelsItem labelsObject;
			if(!pageBeanNodeAlertRulesalertRulesItemLabelslabelsItem["Name"].isNull())
				labelsObject.name = pageBeanNodeAlertRulesalertRulesItemLabelslabelsItem["Name"].asString();
			if(!pageBeanNodeAlertRulesalertRulesItemLabelslabelsItem["Value"].isNull())
				labelsObject.value = pageBeanNodeAlertRulesalertRulesItemLabelslabelsItem["Value"].asString();
			alertRulesItemObject.labels.push_back(labelsObject);
		}
		auto allAnnotationsNode = pageBeanNodeAlertRulesalertRulesItem["Annotations"]["annotationsItem"];
		for (auto pageBeanNodeAlertRulesalertRulesItemAnnotationsannotationsItem : allAnnotationsNode)
		{
			PageBean::AlertRulesItem::AnnotationsItem annotationsObject;
			if(!pageBeanNodeAlertRulesalertRulesItemAnnotationsannotationsItem["Name"].isNull())
				annotationsObject.name = pageBeanNodeAlertRulesalertRulesItemAnnotationsannotationsItem["Name"].asString();
			if(!pageBeanNodeAlertRulesalertRulesItemAnnotationsannotationsItem["Value"].isNull())
				annotationsObject.value = pageBeanNodeAlertRulesalertRulesItemAnnotationsannotationsItem["Value"].asString();
			alertRulesItemObject.annotations.push_back(annotationsObject);
		}
		auto allTagsNode = pageBeanNodeAlertRulesalertRulesItem["Tags"]["tagsItem"];
		for (auto pageBeanNodeAlertRulesalertRulesItemTagstagsItem : allTagsNode)
		{
			PageBean::AlertRulesItem::TagsItem tagsObject;
			if(!pageBeanNodeAlertRulesalertRulesItemTagstagsItem["Key"].isNull())
				tagsObject.key = pageBeanNodeAlertRulesalertRulesItemTagstagsItem["Key"].asString();
			if(!pageBeanNodeAlertRulesalertRulesItemTagstagsItem["Value"].isNull())
				tagsObject.value = pageBeanNodeAlertRulesalertRulesItemTagstagsItem["Value"].asString();
			alertRulesItemObject.tags.push_back(tagsObject);
		}
		auto alertRuleContentNode = value["AlertRuleContent"];
		if(!alertRuleContentNode["Condition"].isNull())
			alertRulesItemObject.alertRuleContent.condition = alertRuleContentNode["Condition"].asString();
		auto allAlertRuleItemsNode = alertRuleContentNode["AlertRuleItems"]["alertRuleItemsItem"];
		for (auto alertRuleContentNodeAlertRuleItemsalertRuleItemsItem : allAlertRuleItemsNode)
		{
			PageBean::AlertRulesItem::AlertRuleContent::AlertRuleItemsItem alertRuleItemsItemObject;
			if(!alertRuleContentNodeAlertRuleItemsalertRuleItemsItem["N"].isNull())
				alertRuleItemsItemObject.n = std::stol(alertRuleContentNodeAlertRuleItemsalertRuleItemsItem["N"].asString());
			if(!alertRuleContentNodeAlertRuleItemsalertRuleItemsItem["MetricKey"].isNull())
				alertRuleItemsItemObject.metricKey = alertRuleContentNodeAlertRuleItemsalertRuleItemsItem["MetricKey"].asString();
			if(!alertRuleContentNodeAlertRuleItemsalertRuleItemsItem["Aggregate"].isNull())
				alertRuleItemsItemObject.aggregate = alertRuleContentNodeAlertRuleItemsalertRuleItemsItem["Aggregate"].asString();
			if(!alertRuleContentNodeAlertRuleItemsalertRuleItemsItem["Operator"].isNull())
				alertRuleItemsItemObject._operator = alertRuleContentNodeAlertRuleItemsalertRuleItemsItem["Operator"].asString();
			if(!alertRuleContentNodeAlertRuleItemsalertRuleItemsItem["Value"].isNull())
				alertRuleItemsItemObject.value = alertRuleContentNodeAlertRuleItemsalertRuleItemsItem["Value"].asString();
			alertRulesItemObject.alertRuleContent.alertRuleItems.push_back(alertRuleItemsItemObject);
		}
		auto filtersNode = value["Filters"];
		auto allDimFiltersNode = filtersNode["DimFilters"]["dimFiltersItem"];
		for (auto filtersNodeDimFiltersdimFiltersItem : allDimFiltersNode)
		{
			PageBean::AlertRulesItem::Filters::DimFiltersItem dimFiltersItemObject;
			if(!filtersNodeDimFiltersdimFiltersItem["FilterKey"].isNull())
				dimFiltersItemObject.filterKey = filtersNodeDimFiltersdimFiltersItem["FilterKey"].asString();
			if(!filtersNodeDimFiltersdimFiltersItem["FilterOpt"].isNull())
				dimFiltersItemObject.filterOpt = filtersNodeDimFiltersdimFiltersItem["FilterOpt"].asString();
			auto allFilterValues = value["FilterValues"]["filterValues"];
			for (auto value : allFilterValues)
				dimFiltersItemObject.filterValues.push_back(value.asString());
			alertRulesItemObject.filters.dimFilters.push_back(dimFiltersItemObject);
		}
		auto allCustomSLSFiltersNode = filtersNode["CustomSLSFilters"]["customSLSFiltersItem"];
		for (auto filtersNodeCustomSLSFilterscustomSLSFiltersItem : allCustomSLSFiltersNode)
		{
			PageBean::AlertRulesItem::Filters::CustomSLSFiltersItem customSLSFiltersItemObject;
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
			alertRulesItemObject.filters.customSLSFilters.push_back(customSLSFiltersItemObject);
		}
			auto allCustomSLSGroupByDimensions = filtersNode["CustomSLSGroupByDimensions"]["customSLSGroupByDimensions"];
			for (auto value : allCustomSLSGroupByDimensions)
				alertRulesItemObject.filters.customSLSGroupByDimensions.push_back(value.asString());
			auto allCustomSLSWheres = filtersNode["CustomSLSWheres"]["customSLSWheres"];
			for (auto value : allCustomSLSWheres)
				alertRulesItemObject.filters.customSLSWheres.push_back(value.asString());
		auto allPids = value["Pids"]["pids"];
		for (auto value : allPids)
			alertRulesItemObject.pids.push_back(value.asString());
		pageBean_.alertRules.push_back(alertRulesItemObject);
	}

}

GetAlertRulesResult::PageBean GetAlertRulesResult::getPageBean()const
{
	return pageBean_;
}

