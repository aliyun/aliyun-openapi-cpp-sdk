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

#include <alibabacloud/cms/model/DescribeAlertLogListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

DescribeAlertLogListResult::DescribeAlertLogListResult() :
	ServiceResult()
{}

DescribeAlertLogListResult::DescribeAlertLogListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAlertLogListResult::~DescribeAlertLogListResult()
{}

void DescribeAlertLogListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAlertLogListNode = value["AlertLogList"]["Alarm"];
	for (auto valueAlertLogListAlarm : allAlertLogListNode)
	{
		Alarm alertLogListObject;
		if(!valueAlertLogListAlarm["RuleId"].isNull())
			alertLogListObject.ruleId = valueAlertLogListAlarm["RuleId"].asString();
		if(!valueAlertLogListAlarm["RuleName"].isNull())
			alertLogListObject.ruleName = valueAlertLogListAlarm["RuleName"].asString();
		if(!valueAlertLogListAlarm["Namespace"].isNull())
			alertLogListObject._namespace = valueAlertLogListAlarm["Namespace"].asString();
		if(!valueAlertLogListAlarm["Product"].isNull())
			alertLogListObject.product = valueAlertLogListAlarm["Product"].asString();
		if(!valueAlertLogListAlarm["EventName"].isNull())
			alertLogListObject.eventName = valueAlertLogListAlarm["EventName"].asString();
		if(!valueAlertLogListAlarm["GroupId"].isNull())
			alertLogListObject.groupId = valueAlertLogListAlarm["GroupId"].asString();
		if(!valueAlertLogListAlarm["GroupName"].isNull())
			alertLogListObject.groupName = valueAlertLogListAlarm["GroupName"].asString();
		if(!valueAlertLogListAlarm["MetricName"].isNull())
			alertLogListObject.metricName = valueAlertLogListAlarm["MetricName"].asString();
		if(!valueAlertLogListAlarm["InstanceId"].isNull())
			alertLogListObject.instanceId = valueAlertLogListAlarm["InstanceId"].asString();
		if(!valueAlertLogListAlarm["InstanceName"].isNull())
			alertLogListObject.instanceName = valueAlertLogListAlarm["InstanceName"].asString();
		if(!valueAlertLogListAlarm["Level"].isNull())
			alertLogListObject.level = valueAlertLogListAlarm["Level"].asString();
		if(!valueAlertLogListAlarm["LevelChange"].isNull())
			alertLogListObject.levelChange = valueAlertLogListAlarm["LevelChange"].asString();
		if(!valueAlertLogListAlarm["SendStatus"].isNull())
			alertLogListObject.sendStatus = valueAlertLogListAlarm["SendStatus"].asString();
		if(!valueAlertLogListAlarm["AlertTime"].isNull())
			alertLogListObject.alertTime = valueAlertLogListAlarm["AlertTime"].asString();
		if(!valueAlertLogListAlarm["Message"].isNull())
			alertLogListObject.message = valueAlertLogListAlarm["Message"].asString();
		auto allExtendedInfoNode = valueAlertLogListAlarm["ExtendedInfo"]["ExtInfo"];
		for (auto valueAlertLogListAlarmExtendedInfoExtInfo : allExtendedInfoNode)
		{
			Alarm::ExtInfo extendedInfoObject;
			if(!valueAlertLogListAlarmExtendedInfoExtInfo["Name"].isNull())
				extendedInfoObject.name = valueAlertLogListAlarmExtendedInfoExtInfo["Name"].asString();
			if(!valueAlertLogListAlarmExtendedInfoExtInfo["Value"].isNull())
				extendedInfoObject.value = valueAlertLogListAlarmExtendedInfoExtInfo["Value"].asString();
			alertLogListObject.extendedInfo.push_back(extendedInfoObject);
		}
		auto allDimensionsNode = valueAlertLogListAlarm["Dimensions"]["DimensionsItem"];
		for (auto valueAlertLogListAlarmDimensionsDimensionsItem : allDimensionsNode)
		{
			Alarm::DimensionsItem dimensionsObject;
			if(!valueAlertLogListAlarmDimensionsDimensionsItem["Key"].isNull())
				dimensionsObject.key = valueAlertLogListAlarmDimensionsDimensionsItem["Key"].asString();
			if(!valueAlertLogListAlarmDimensionsDimensionsItem["Value"].isNull())
				dimensionsObject.value = valueAlertLogListAlarmDimensionsDimensionsItem["Value"].asString();
			alertLogListObject.dimensions.push_back(dimensionsObject);
		}
		auto escalationNode = value["Escalation"];
		if(!escalationNode["Times"].isNull())
			alertLogListObject.escalation.times = std::stoi(escalationNode["Times"].asString());
		if(!escalationNode["Expression"].isNull())
			alertLogListObject.escalation.expression = escalationNode["Expression"].asString();
		if(!escalationNode["Level"].isNull())
			alertLogListObject.escalation.level = escalationNode["Level"].asString();
		auto allContactGroups = value["ContactGroups"]["ContactGroup"];
		for (auto value : allContactGroups)
			alertLogListObject.contactGroups.push_back(value.asString());
		auto allWebhookList = value["WebhookList"]["WebhookList"];
		for (auto value : allWebhookList)
			alertLogListObject.webhookList.push_back(value.asString());
		auto allContactALIIWWList = value["ContactALIIWWList"]["ContactALIIMs"];
		for (auto value : allContactALIIWWList)
			alertLogListObject.contactALIIWWList.push_back(value.asString());
		auto allContactSMSList = value["ContactSMSList"]["ContactSMSList"];
		for (auto value : allContactSMSList)
			alertLogListObject.contactSMSList.push_back(value.asString());
		auto allContactOnCallList = value["ContactOnCallList"]["ContactOnCallList"];
		for (auto value : allContactOnCallList)
			alertLogListObject.contactOnCallList.push_back(value.asString());
		auto allContactMailList = value["ContactMailList"]["ContactMailList"];
		for (auto value : allContactMailList)
			alertLogListObject.contactMailList.push_back(value.asString());
		auto allContactDingList = value["ContactDingList"]["ContactDingList"];
		for (auto value : allContactDingList)
			alertLogListObject.contactDingList.push_back(value.asString());
		auto allDingdingWebhookList = value["DingdingWebhookList"]["ContactDingList"];
		for (auto value : allDingdingWebhookList)
			alertLogListObject.dingdingWebhookList.push_back(value.asString());
		alertLogList_.push_back(alertLogListObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

std::vector<DescribeAlertLogListResult::Alarm> DescribeAlertLogListResult::getAlertLogList()const
{
	return alertLogList_;
}

std::string DescribeAlertLogListResult::getMessage()const
{
	return message_;
}

int DescribeAlertLogListResult::getPageSize()const
{
	return pageSize_;
}

int DescribeAlertLogListResult::getPageNumber()const
{
	return pageNumber_;
}

int DescribeAlertLogListResult::getTotal()const
{
	return total_;
}

std::string DescribeAlertLogListResult::getCode()const
{
	return code_;
}

bool DescribeAlertLogListResult::getSuccess()const
{
	return success_;
}

