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
		if(!valueAlertLogListAlarm["MetricName"].isNull())
			alertLogListObject.metricName = valueAlertLogListAlarm["MetricName"].asString();
		if(!valueAlertLogListAlarm["EventName"].isNull())
			alertLogListObject.eventName = valueAlertLogListAlarm["EventName"].asString();
		if(!valueAlertLogListAlarm["Product"].isNull())
			alertLogListObject.product = valueAlertLogListAlarm["Product"].asString();
		if(!valueAlertLogListAlarm["BlackListUUID"].isNull())
			alertLogListObject.blackListUUID = valueAlertLogListAlarm["BlackListUUID"].asString();
		if(!valueAlertLogListAlarm["Message"].isNull())
			alertLogListObject.message = valueAlertLogListAlarm["Message"].asString();
		if(!valueAlertLogListAlarm["Namespace"].isNull())
			alertLogListObject._namespace = valueAlertLogListAlarm["Namespace"].asString();
		if(!valueAlertLogListAlarm["LevelChange"].isNull())
			alertLogListObject.levelChange = valueAlertLogListAlarm["LevelChange"].asString();
		if(!valueAlertLogListAlarm["InstanceId"].isNull())
			alertLogListObject.instanceId = valueAlertLogListAlarm["InstanceId"].asString();
		if(!valueAlertLogListAlarm["RuleName"].isNull())
			alertLogListObject.ruleName = valueAlertLogListAlarm["RuleName"].asString();
		if(!valueAlertLogListAlarm["RuleId"].isNull())
			alertLogListObject.ruleId = valueAlertLogListAlarm["RuleId"].asString();
		if(!valueAlertLogListAlarm["BlackListName"].isNull())
			alertLogListObject.blackListName = valueAlertLogListAlarm["BlackListName"].asString();
		if(!valueAlertLogListAlarm["GroupName"].isNull())
			alertLogListObject.groupName = valueAlertLogListAlarm["GroupName"].asString();
		if(!valueAlertLogListAlarm["GroupId"].isNull())
			alertLogListObject.groupId = valueAlertLogListAlarm["GroupId"].asString();
		if(!valueAlertLogListAlarm["AlertTime"].isNull())
			alertLogListObject.alertTime = valueAlertLogListAlarm["AlertTime"].asString();
		if(!valueAlertLogListAlarm["InstanceName"].isNull())
			alertLogListObject.instanceName = valueAlertLogListAlarm["InstanceName"].asString();
		if(!valueAlertLogListAlarm["BlackListDetail"].isNull())
			alertLogListObject.blackListDetail = valueAlertLogListAlarm["BlackListDetail"].asString();
		if(!valueAlertLogListAlarm["Level"].isNull())
			alertLogListObject.level = valueAlertLogListAlarm["Level"].asString();
		if(!valueAlertLogListAlarm["SendStatus"].isNull())
			alertLogListObject.sendStatus = valueAlertLogListAlarm["SendStatus"].asString();
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
		auto allWebhookListNode = valueAlertLogListAlarm["WebhookList"]["WebhookListItem"];
		for (auto valueAlertLogListAlarmWebhookListWebhookListItem : allWebhookListNode)
		{
			Alarm::WebhookListItem webhookListObject;
			if(!valueAlertLogListAlarmWebhookListWebhookListItem["code"].isNull())
				webhookListObject.code = valueAlertLogListAlarmWebhookListWebhookListItem["code"].asString();
			if(!valueAlertLogListAlarmWebhookListWebhookListItem["url"].isNull())
				webhookListObject.url = valueAlertLogListAlarmWebhookListWebhookListItem["url"].asString();
			if(!valueAlertLogListAlarmWebhookListWebhookListItem["message"].isNull())
				webhookListObject.message = valueAlertLogListAlarmWebhookListWebhookListItem["message"].asString();
			alertLogListObject.webhookList.push_back(webhookListObject);
		}
		auto allSendResultListNode = valueAlertLogListAlarm["SendResultList"]["SendResult"];
		for (auto valueAlertLogListAlarmSendResultListSendResult : allSendResultListNode)
		{
			Alarm::SendResult sendResultListObject;
			if(!valueAlertLogListAlarmSendResultListSendResult["Key"].isNull())
				sendResultListObject.key = valueAlertLogListAlarmSendResultListSendResult["Key"].asString();
			auto allValue = value["Value"]["Value"];
			for (auto value : allValue)
				sendResultListObject.value.push_back(value.asString());
			alertLogListObject.sendResultList.push_back(sendResultListObject);
		}
		auto sendDetailNode = value["SendDetail"];
		if(!sendDetailNode["ResultCode"].isNull())
			alertLogListObject.sendDetail.resultCode = sendDetailNode["ResultCode"].asString();
		auto allChannelResultListNode = sendDetailNode["ChannelResultList"]["ChannelResult"];
		for (auto sendDetailNodeChannelResultListChannelResult : allChannelResultListNode)
		{
			Alarm::SendDetail::ChannelResult channelResultObject;
			if(!sendDetailNodeChannelResultListChannelResult["Channel"].isNull())
				channelResultObject.channel = sendDetailNodeChannelResultListChannelResult["Channel"].asString();
			auto allResultListNode = sendDetailNodeChannelResultListChannelResult["ResultList"]["Result"];
			for (auto sendDetailNodeChannelResultListChannelResultResultListResult : allResultListNode)
			{
				Alarm::SendDetail::ChannelResult::Result resultListObject;
				if(!sendDetailNodeChannelResultListChannelResultResultListResult["Code"].isNull())
					resultListObject.code = sendDetailNodeChannelResultListChannelResultResultListResult["Code"].asString();
				if(!sendDetailNodeChannelResultListChannelResultResultListResult["RequestId"].isNull())
					resultListObject.requestId = sendDetailNodeChannelResultListChannelResultResultListResult["RequestId"].asString();
				if(!sendDetailNodeChannelResultListChannelResultResultListResult["Success"].isNull())
					resultListObject.success = sendDetailNodeChannelResultListChannelResultResultListResult["Success"].asString() == "true";
				if(!sendDetailNodeChannelResultListChannelResultResultListResult["Detail"].isNull())
					resultListObject.detail = sendDetailNodeChannelResultListChannelResultResultListResult["Detail"].asString();
				auto allNotifyTargetList = value["notifyTargetList"]["NotifyTarget"];
				for (auto value : allNotifyTargetList)
					resultListObject.notifyTargetList.push_back(value.asString());
				channelResultObject.resultList.push_back(resultListObject);
			}
			alertLogListObject.sendDetail.channelResultList.push_back(channelResultObject);
		}
		auto escalationNode = value["Escalation"];
		if(!escalationNode["Expression"].isNull())
			alertLogListObject.escalation.expression = escalationNode["Expression"].asString();
		if(!escalationNode["Times"].isNull())
			alertLogListObject.escalation.times = std::stoi(escalationNode["Times"].asString());
		if(!escalationNode["Level"].isNull())
			alertLogListObject.escalation.level = escalationNode["Level"].asString();
		auto allDingdingWebhookList = value["DingdingWebhookList"]["ContactDingList"];
		for (auto value : allDingdingWebhookList)
			alertLogListObject.dingdingWebhookList.push_back(value.asString());
		auto allContactOnCallList = value["ContactOnCallList"]["ContactOnCallList"];
		for (auto value : allContactOnCallList)
			alertLogListObject.contactOnCallList.push_back(value.asString());
		auto allContactMailList = value["ContactMailList"]["ContactMailList"];
		for (auto value : allContactMailList)
			alertLogListObject.contactMailList.push_back(value.asString());
		auto allContactGroups = value["ContactGroups"]["ContactGroup"];
		for (auto value : allContactGroups)
			alertLogListObject.contactGroups.push_back(value.asString());
		auto allContactALIIWWList = value["ContactALIIWWList"]["ContactALIIMs"];
		for (auto value : allContactALIIWWList)
			alertLogListObject.contactALIIWWList.push_back(value.asString());
		auto allContactSMSList = value["ContactSMSList"]["ContactSMSList"];
		for (auto value : allContactSMSList)
			alertLogListObject.contactSMSList.push_back(value.asString());
		auto allContactDingList = value["ContactDingList"]["ContactDingList"];
		for (auto value : allContactDingList)
			alertLogListObject.contactDingList.push_back(value.asString());
		alertLogList_.push_back(alertLogListObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

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

std::string DescribeAlertLogListResult::getCode()const
{
	return code_;
}

bool DescribeAlertLogListResult::getSuccess()const
{
	return success_;
}

