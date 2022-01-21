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

#include <alibabacloud/cms/model/DescribeAlertHistoryListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

DescribeAlertHistoryListResult::DescribeAlertHistoryListResult() :
	ServiceResult()
{}

DescribeAlertHistoryListResult::DescribeAlertHistoryListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAlertHistoryListResult::~DescribeAlertHistoryListResult()
{}

void DescribeAlertHistoryListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAlarmHistoryListNode = value["AlarmHistoryList"]["AlarmHistory"];
	for (auto valueAlarmHistoryListAlarmHistory : allAlarmHistoryListNode)
	{
		AlarmHistory alarmHistoryListObject;
		if(!valueAlarmHistoryListAlarmHistory["Status"].isNull())
			alarmHistoryListObject.status = std::stoi(valueAlarmHistoryListAlarmHistory["Status"].asString());
		if(!valueAlarmHistoryListAlarmHistory["MetricName"].isNull())
			alarmHistoryListObject.metricName = valueAlarmHistoryListAlarmHistory["MetricName"].asString();
		if(!valueAlarmHistoryListAlarmHistory["EvaluationCount"].isNull())
			alarmHistoryListObject.evaluationCount = std::stoi(valueAlarmHistoryListAlarmHistory["EvaluationCount"].asString());
		if(!valueAlarmHistoryListAlarmHistory["State"].isNull())
			alarmHistoryListObject.state = valueAlarmHistoryListAlarmHistory["State"].asString();
		if(!valueAlarmHistoryListAlarmHistory["PreLevel"].isNull())
			alarmHistoryListObject.preLevel = valueAlarmHistoryListAlarmHistory["PreLevel"].asString();
		if(!valueAlarmHistoryListAlarmHistory["Namespace"].isNull())
			alarmHistoryListObject._namespace = valueAlarmHistoryListAlarmHistory["Namespace"].asString();
		if(!valueAlarmHistoryListAlarmHistory["Webhooks"].isNull())
			alarmHistoryListObject.webhooks = valueAlarmHistoryListAlarmHistory["Webhooks"].asString();
		if(!valueAlarmHistoryListAlarmHistory["RuleName"].isNull())
			alarmHistoryListObject.ruleName = valueAlarmHistoryListAlarmHistory["RuleName"].asString();
		if(!valueAlarmHistoryListAlarmHistory["RuleId"].isNull())
			alarmHistoryListObject.ruleId = valueAlarmHistoryListAlarmHistory["RuleId"].asString();
		if(!valueAlarmHistoryListAlarmHistory["LastTime"].isNull())
			alarmHistoryListObject.lastTime = std::stol(valueAlarmHistoryListAlarmHistory["LastTime"].asString());
		if(!valueAlarmHistoryListAlarmHistory["Value"].isNull())
			alarmHistoryListObject.value = valueAlarmHistoryListAlarmHistory["Value"].asString();
		if(!valueAlarmHistoryListAlarmHistory["Expression"].isNull())
			alarmHistoryListObject.expression = valueAlarmHistoryListAlarmHistory["Expression"].asString();
		if(!valueAlarmHistoryListAlarmHistory["GroupId"].isNull())
			alarmHistoryListObject.groupId = valueAlarmHistoryListAlarmHistory["GroupId"].asString();
		if(!valueAlarmHistoryListAlarmHistory["AlertTime"].isNull())
			alarmHistoryListObject.alertTime = std::stol(valueAlarmHistoryListAlarmHistory["AlertTime"].asString());
		if(!valueAlarmHistoryListAlarmHistory["InstanceName"].isNull())
			alarmHistoryListObject.instanceName = valueAlarmHistoryListAlarmHistory["InstanceName"].asString();
		if(!valueAlarmHistoryListAlarmHistory["Dimensions"].isNull())
			alarmHistoryListObject.dimensions = valueAlarmHistoryListAlarmHistory["Dimensions"].asString();
		if(!valueAlarmHistoryListAlarmHistory["Level"].isNull())
			alarmHistoryListObject.level = valueAlarmHistoryListAlarmHistory["Level"].asString();
		auto allContacts = value["Contacts"]["Contact"];
		for (auto value : allContacts)
			alarmHistoryListObject.contacts.push_back(value.asString());
		auto allContactALIIMs = value["ContactALIIMs"]["ContactALIIM"];
		for (auto value : allContactALIIMs)
			alarmHistoryListObject.contactALIIMs.push_back(value.asString());
		auto allContactMails = value["ContactMails"]["ContactMail"];
		for (auto value : allContactMails)
			alarmHistoryListObject.contactMails.push_back(value.asString());
		auto allContactSmses = value["ContactSmses"]["ContactSms"];
		for (auto value : allContactSmses)
			alarmHistoryListObject.contactSmses.push_back(value.asString());
		auto allContactGroups = value["ContactGroups"]["ContactGroup"];
		for (auto value : allContactGroups)
			alarmHistoryListObject.contactGroups.push_back(value.asString());
		alarmHistoryList_.push_back(alarmHistoryListObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Total"].isNull())
		total_ = value["Total"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<DescribeAlertHistoryListResult::AlarmHistory> DescribeAlertHistoryListResult::getAlarmHistoryList()const
{
	return alarmHistoryList_;
}

std::string DescribeAlertHistoryListResult::getMessage()const
{
	return message_;
}

std::string DescribeAlertHistoryListResult::getTotal()const
{
	return total_;
}

std::string DescribeAlertHistoryListResult::getCode()const
{
	return code_;
}

bool DescribeAlertHistoryListResult::getSuccess()const
{
	return success_;
}

