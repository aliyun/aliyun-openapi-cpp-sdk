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
	if(!pageBeanNode["TotalCount"].isNull())
		pageBean_.totalCount = std::stoi(pageBeanNode["TotalCount"].asString());
	if(!pageBeanNode["PageNumber"].isNull())
		pageBean_.pageNumber = std::stoi(pageBeanNode["PageNumber"].asString());
	if(!pageBeanNode["PageSize"].isNull())
		pageBean_.pageSize = std::stoi(pageBeanNode["PageSize"].asString());
	auto allAlertRulesNode = pageBeanNode["AlertRules"]["AlertRule"];
	for (auto pageBeanNodeAlertRulesAlertRule : allAlertRulesNode)
	{
		PageBean::AlertRule alertRuleObject;
		if(!pageBeanNodeAlertRulesAlertRule["AlertTitle"].isNull())
			alertRuleObject.alertTitle = pageBeanNodeAlertRulesAlertRule["AlertTitle"].asString();
		if(!pageBeanNodeAlertRulesAlertRule["AlertLevel"].isNull())
			alertRuleObject.alertLevel = pageBeanNodeAlertRulesAlertRule["AlertLevel"].asString();
		if(!pageBeanNodeAlertRulesAlertRule["AlertType"].isNull())
			alertRuleObject.alertType = std::stoi(pageBeanNodeAlertRulesAlertRule["AlertType"].asString());
		if(!pageBeanNodeAlertRulesAlertRule["AlertVersion"].isNull())
			alertRuleObject.alertVersion = std::stoi(pageBeanNodeAlertRulesAlertRule["AlertVersion"].asString());
		if(!pageBeanNodeAlertRulesAlertRule["Config"].isNull())
			alertRuleObject.config = pageBeanNodeAlertRulesAlertRule["Config"].asString();
		if(!pageBeanNodeAlertRulesAlertRule["ContactGroupIdList"].isNull())
			alertRuleObject.contactGroupIdList = pageBeanNodeAlertRulesAlertRule["ContactGroupIdList"].asString();
		if(!pageBeanNodeAlertRulesAlertRule["CreateTime"].isNull())
			alertRuleObject.createTime = std::stol(pageBeanNodeAlertRulesAlertRule["CreateTime"].asString());
		if(!pageBeanNodeAlertRulesAlertRule["Id"].isNull())
			alertRuleObject.id = std::stol(pageBeanNodeAlertRulesAlertRule["Id"].asString());
		if(!pageBeanNodeAlertRulesAlertRule["RegionId"].isNull())
			alertRuleObject.regionId = pageBeanNodeAlertRulesAlertRule["RegionId"].asString();
		if(!pageBeanNodeAlertRulesAlertRule["Status"].isNull())
			alertRuleObject.status = pageBeanNodeAlertRulesAlertRule["Status"].asString();
		if(!pageBeanNodeAlertRulesAlertRule["TaskId"].isNull())
			alertRuleObject.taskId = std::stol(pageBeanNodeAlertRulesAlertRule["TaskId"].asString());
		if(!pageBeanNodeAlertRulesAlertRule["TaskStatus"].isNull())
			alertRuleObject.taskStatus = pageBeanNodeAlertRulesAlertRule["TaskStatus"].asString();
		if(!pageBeanNodeAlertRulesAlertRule["UpdateTime"].isNull())
			alertRuleObject.updateTime = std::stol(pageBeanNodeAlertRulesAlertRule["UpdateTime"].asString());
		if(!pageBeanNodeAlertRulesAlertRule["UserId"].isNull())
			alertRuleObject.userId = pageBeanNodeAlertRulesAlertRule["UserId"].asString();
		auto alarmContextNode = value["AlarmContext"];
		if(!alarmContextNode["AlarmContentTemplate"].isNull())
			alertRuleObject.alarmContext.alarmContentTemplate = alarmContextNode["AlarmContentTemplate"].asString();
		if(!alarmContextNode["AlarmContentSubTitle"].isNull())
			alertRuleObject.alarmContext.alarmContentSubTitle = alarmContextNode["AlarmContentSubTitle"].asString();
		auto alertRule1Node = value["AlertRule"];
		if(!alertRule1Node["Operator"].isNull())
			alertRuleObject.alertRule1._operator = alertRule1Node["Operator"].asString();
		auto allRulesNode = alertRule1Node["Rules"]["Rule"];
		for (auto alertRule1NodeRulesRule : allRulesNode)
		{
			PageBean::AlertRule::AlertRule1::Rule ruleObject;
			if(!alertRule1NodeRulesRule["Aggregates"].isNull())
				ruleObject.aggregates = alertRule1NodeRulesRule["Aggregates"].asString();
			if(!alertRule1NodeRulesRule["Alias"].isNull())
				ruleObject.alias = alertRule1NodeRulesRule["Alias"].asString();
			if(!alertRule1NodeRulesRule["Measure"].isNull())
				ruleObject.measure = alertRule1NodeRulesRule["Measure"].asString();
			if(!alertRule1NodeRulesRule["NValue"].isNull())
				ruleObject.nValue = std::stoi(alertRule1NodeRulesRule["NValue"].asString());
			if(!alertRule1NodeRulesRule["Operator"].isNull())
				ruleObject._operator = alertRule1NodeRulesRule["Operator"].asString();
			if(!alertRule1NodeRulesRule["Value"].isNull())
				ruleObject.value = std::stof(alertRule1NodeRulesRule["Value"].asString());
			alertRuleObject.alertRule1.rules.push_back(ruleObject);
		}
		auto metricParamNode = value["MetricParam"];
		if(!metricParamNode["AppGroupId"].isNull())
			alertRuleObject.metricParam.appGroupId = metricParamNode["AppGroupId"].asString();
		if(!metricParamNode["AppId"].isNull())
			alertRuleObject.metricParam.appId = metricParamNode["AppId"].asString();
		if(!metricParamNode["Pid"].isNull())
			alertRuleObject.metricParam.pid = metricParamNode["Pid"].asString();
		if(!metricParamNode["Type"].isNull())
			alertRuleObject.metricParam.type = metricParamNode["Type"].asString();
		auto allDimensionsNode = metricParamNode["Dimensions"]["Dimension"];
		for (auto metricParamNodeDimensionsDimension : allDimensionsNode)
		{
			PageBean::AlertRule::MetricParam::Dimension dimensionObject;
			if(!metricParamNodeDimensionsDimension["Key"].isNull())
				dimensionObject.key = metricParamNodeDimensionsDimension["Key"].asString();
			if(!metricParamNodeDimensionsDimension["Type"].isNull())
				dimensionObject.type = metricParamNodeDimensionsDimension["Type"].asString();
			if(!metricParamNodeDimensionsDimension["Value"].isNull())
				dimensionObject.value = metricParamNodeDimensionsDimension["Value"].asString();
			alertRuleObject.metricParam.dimensions.push_back(dimensionObject);
		}
		auto noticeNode = value["Notice"];
		if(!noticeNode["EndTime"].isNull())
			alertRuleObject.notice.endTime = std::stol(noticeNode["EndTime"].asString());
		if(!noticeNode["NoticeEndTime"].isNull())
			alertRuleObject.notice.noticeEndTime = std::stol(noticeNode["NoticeEndTime"].asString());
		if(!noticeNode["NoticeStartTime"].isNull())
			alertRuleObject.notice.noticeStartTime = std::stol(noticeNode["NoticeStartTime"].asString());
		if(!noticeNode["StartTime"].isNull())
			alertRuleObject.notice.startTime = std::stol(noticeNode["StartTime"].asString());
		auto allAlertWays = value["AlertWays"]["AlertWay"];
		for (auto value : allAlertWays)
			alertRuleObject.alertWays.push_back(value.asString());
		pageBean_.alertRules.push_back(alertRuleObject);
	}

}

SearchAlertRulesResult::PageBean SearchAlertRulesResult::getPageBean()const
{
	return pageBean_;
}

