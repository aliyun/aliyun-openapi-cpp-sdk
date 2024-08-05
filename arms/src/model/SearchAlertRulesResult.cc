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

#include <alibabacloud/arms/model/SearchAlertRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

SearchAlertRulesResult::SearchAlertRulesResult() :
	ServiceResult()
{}

SearchAlertRulesResult::SearchAlertRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SearchAlertRulesResult::~SearchAlertRulesResult()
{}

void SearchAlertRulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto pageBeanNode = value["PageBean"];
	if(!pageBeanNode["PageNumber"].isNull())
		pageBean_.pageNumber = std::stoi(pageBeanNode["PageNumber"].asString());
	if(!pageBeanNode["PageSize"].isNull())
		pageBean_.pageSize = std::stoi(pageBeanNode["PageSize"].asString());
	if(!pageBeanNode["TotalCount"].isNull())
		pageBean_.totalCount = std::stoi(pageBeanNode["TotalCount"].asString());
	auto allAlertRulesNode = pageBeanNode["AlertRules"]["AlertRuleEntity"];
	for (auto pageBeanNodeAlertRulesAlertRuleEntity : allAlertRulesNode)
	{
		PageBean::AlertRuleEntity alertRuleEntityObject;
		if(!pageBeanNodeAlertRulesAlertRuleEntity["Status"].isNull())
			alertRuleEntityObject.status = pageBeanNodeAlertRulesAlertRuleEntity["Status"].asString();
		if(!pageBeanNodeAlertRulesAlertRuleEntity["UpdateTime"].isNull())
			alertRuleEntityObject.updateTime = std::stol(pageBeanNodeAlertRulesAlertRuleEntity["UpdateTime"].asString());
		if(!pageBeanNodeAlertRulesAlertRuleEntity["ContactGroupIdList"].isNull())
			alertRuleEntityObject.contactGroupIdList = pageBeanNodeAlertRulesAlertRuleEntity["ContactGroupIdList"].asString();
		if(!pageBeanNodeAlertRulesAlertRuleEntity["CreateTime"].isNull())
			alertRuleEntityObject.createTime = std::stol(pageBeanNodeAlertRulesAlertRuleEntity["CreateTime"].asString());
		if(!pageBeanNodeAlertRulesAlertRuleEntity["AlertTitle"].isNull())
			alertRuleEntityObject.alertTitle = pageBeanNodeAlertRulesAlertRuleEntity["AlertTitle"].asString();
		if(!pageBeanNodeAlertRulesAlertRuleEntity["UserId"].isNull())
			alertRuleEntityObject.userId = pageBeanNodeAlertRulesAlertRuleEntity["UserId"].asString();
		if(!pageBeanNodeAlertRulesAlertRuleEntity["AlertVersion"].isNull())
			alertRuleEntityObject.alertVersion = std::stoi(pageBeanNodeAlertRulesAlertRuleEntity["AlertVersion"].asString());
		if(!pageBeanNodeAlertRulesAlertRuleEntity["HostByAlertManager"].isNull())
			alertRuleEntityObject.hostByAlertManager = pageBeanNodeAlertRulesAlertRuleEntity["HostByAlertManager"].asString() == "true";
		if(!pageBeanNodeAlertRulesAlertRuleEntity["AlertType"].isNull())
			alertRuleEntityObject.alertType = std::stoi(pageBeanNodeAlertRulesAlertRuleEntity["AlertType"].asString());
		if(!pageBeanNodeAlertRulesAlertRuleEntity["ContactGroupIds"].isNull())
			alertRuleEntityObject.contactGroupIds = pageBeanNodeAlertRulesAlertRuleEntity["ContactGroupIds"].asString();
		if(!pageBeanNodeAlertRulesAlertRuleEntity["Config"].isNull())
			alertRuleEntityObject.config = pageBeanNodeAlertRulesAlertRuleEntity["Config"].asString();
		if(!pageBeanNodeAlertRulesAlertRuleEntity["RegionId"].isNull())
			alertRuleEntityObject.regionId = pageBeanNodeAlertRulesAlertRuleEntity["RegionId"].asString();
		if(!pageBeanNodeAlertRulesAlertRuleEntity["AlertLevel"].isNull())
			alertRuleEntityObject.alertLevel = pageBeanNodeAlertRulesAlertRuleEntity["AlertLevel"].asString();
		if(!pageBeanNodeAlertRulesAlertRuleEntity["TaskStatus"].isNull())
			alertRuleEntityObject.taskStatus = pageBeanNodeAlertRulesAlertRuleEntity["TaskStatus"].asString();
		if(!pageBeanNodeAlertRulesAlertRuleEntity["Title"].isNull())
			alertRuleEntityObject.title = pageBeanNodeAlertRulesAlertRuleEntity["Title"].asString();
		if(!pageBeanNodeAlertRulesAlertRuleEntity["TaskId"].isNull())
			alertRuleEntityObject.taskId = std::stol(pageBeanNodeAlertRulesAlertRuleEntity["TaskId"].asString());
		if(!pageBeanNodeAlertRulesAlertRuleEntity["Id"].isNull())
			alertRuleEntityObject.id = std::stol(pageBeanNodeAlertRulesAlertRuleEntity["Id"].asString());
		if(!pageBeanNodeAlertRulesAlertRuleEntity["ResourceGroupId"].isNull())
			alertRuleEntityObject.resourceGroupId = pageBeanNodeAlertRulesAlertRuleEntity["ResourceGroupId"].asString();
		auto alarmContextNode = value["AlarmContext"];
		if(!alarmContextNode["AlarmContentTemplate"].isNull())
			alertRuleEntityObject.alarmContext.alarmContentTemplate = alarmContextNode["AlarmContentTemplate"].asString();
		if(!alarmContextNode["SubTitle"].isNull())
			alertRuleEntityObject.alarmContext.subTitle = alarmContextNode["SubTitle"].asString();
		if(!alarmContextNode["AlarmContentSubTitle"].isNull())
			alertRuleEntityObject.alarmContext.alarmContentSubTitle = alarmContextNode["AlarmContentSubTitle"].asString();
		if(!alarmContextNode["Content"].isNull())
			alertRuleEntityObject.alarmContext.content = alarmContextNode["Content"].asString();
		auto alertRuleNode = value["AlertRule"];
		if(!alertRuleNode["Operator"].isNull())
			alertRuleEntityObject.alertRule._operator = alertRuleNode["Operator"].asString();
		auto allRulesNode = alertRuleNode["Rules"]["Rule"];
		for (auto alertRuleNodeRulesRule : allRulesNode)
		{
			PageBean::AlertRuleEntity::AlertRule::Rule ruleObject;
			if(!alertRuleNodeRulesRule["Measure"].isNull())
				ruleObject.measure = alertRuleNodeRulesRule["Measure"].asString();
			if(!alertRuleNodeRulesRule["Value"].isNull())
				ruleObject.value = std::stof(alertRuleNodeRulesRule["Value"].asString());
			if(!alertRuleNodeRulesRule["Aggregates"].isNull())
				ruleObject.aggregates = alertRuleNodeRulesRule["Aggregates"].asString();
			if(!alertRuleNodeRulesRule["NValue"].isNull())
				ruleObject.nValue = std::stoi(alertRuleNodeRulesRule["NValue"].asString());
			if(!alertRuleNodeRulesRule["Operator"].isNull())
				ruleObject._operator = alertRuleNodeRulesRule["Operator"].asString();
			if(!alertRuleNodeRulesRule["Alias"].isNull())
				ruleObject.alias = alertRuleNodeRulesRule["Alias"].asString();
			alertRuleEntityObject.alertRule.rules.push_back(ruleObject);
		}
		auto metricParamNode = value["MetricParam"];
		if(!metricParamNode["Type"].isNull())
			alertRuleEntityObject.metricParam.type = metricParamNode["Type"].asString();
		if(!metricParamNode["AppGroupId"].isNull())
			alertRuleEntityObject.metricParam.appGroupId = metricParamNode["AppGroupId"].asString();
		if(!metricParamNode["AppId"].isNull())
			alertRuleEntityObject.metricParam.appId = metricParamNode["AppId"].asString();
		if(!metricParamNode["Pid"].isNull())
			alertRuleEntityObject.metricParam.pid = metricParamNode["Pid"].asString();
		auto allDimensionsNode = metricParamNode["Dimensions"]["Dimension"];
		for (auto metricParamNodeDimensionsDimension : allDimensionsNode)
		{
			PageBean::AlertRuleEntity::MetricParam::Dimension dimensionObject;
			if(!metricParamNodeDimensionsDimension["Key"].isNull())
				dimensionObject.key = metricParamNodeDimensionsDimension["Key"].asString();
			if(!metricParamNodeDimensionsDimension["Type"].isNull())
				dimensionObject.type = metricParamNodeDimensionsDimension["Type"].asString();
			if(!metricParamNodeDimensionsDimension["Value"].isNull())
				dimensionObject.value = metricParamNodeDimensionsDimension["Value"].asString();
			alertRuleEntityObject.metricParam.dimensions.push_back(dimensionObject);
		}
		auto noticeNode = value["Notice"];
		if(!noticeNode["EndTime"].isNull())
			alertRuleEntityObject.notice.endTime = std::stol(noticeNode["EndTime"].asString());
		if(!noticeNode["NoticeEndTime"].isNull())
			alertRuleEntityObject.notice.noticeEndTime = std::stol(noticeNode["NoticeEndTime"].asString());
		if(!noticeNode["StartTime"].isNull())
			alertRuleEntityObject.notice.startTime = std::stol(noticeNode["StartTime"].asString());
		if(!noticeNode["NoticeStartTime"].isNull())
			alertRuleEntityObject.notice.noticeStartTime = std::stol(noticeNode["NoticeStartTime"].asString());
		auto allAlertWays = value["AlertWays"]["AlertWay"];
		for (auto value : allAlertWays)
			alertRuleEntityObject.alertWays.push_back(value.asString());
		auto allAlertWay = value["AlertWay"]["AlertWay"];
		for (auto value : allAlertWay)
			alertRuleEntityObject.alertWay.push_back(value.asString());
		pageBean_.alertRules.push_back(alertRuleEntityObject);
	}

}

SearchAlertRulesResult::PageBean SearchAlertRulesResult::getPageBean()const
{
	return pageBean_;
}

