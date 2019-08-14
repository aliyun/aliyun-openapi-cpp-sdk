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

#include <alibabacloud/cms/model/DescribeAlarmHistoryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

DescribeAlarmHistoryResult::DescribeAlarmHistoryResult() :
	ServiceResult()
{}

DescribeAlarmHistoryResult::DescribeAlarmHistoryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAlarmHistoryResult::~DescribeAlarmHistoryResult()
{}

void DescribeAlarmHistoryResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allAlarmHistoryList = value["AlarmHistoryList"]["AlarmHistory"];
	for (auto value : allAlarmHistoryList)
	{
		AlarmHistory alarmHistoryListObject;
		if(!value["Id"].isNull())
			alarmHistoryListObject.id = value["Id"].asString();
		if(!value["AlertName"].isNull())
			alarmHistoryListObject.alertName = value["AlertName"].asString();
		if(!value["GroupId"].isNull())
			alarmHistoryListObject.groupId = value["GroupId"].asString();
		if(!value["Namespace"].isNull())
			alarmHistoryListObject._namespace = value["Namespace"].asString();
		if(!value["MetricName"].isNull())
			alarmHistoryListObject.metricName = value["MetricName"].asString();
		if(!value["Dimensions"].isNull())
			alarmHistoryListObject.dimensions = value["Dimensions"].asString();
		if(!value["Expression"].isNull())
			alarmHistoryListObject.expression = value["Expression"].asString();
		if(!value["EvaluationCount"].isNull())
			alarmHistoryListObject.evaluationCount = std::stoi(value["EvaluationCount"].asString());
		if(!value["Value"].isNull())
			alarmHistoryListObject.value = value["Value"].asString();
		if(!value["AlertTime"].isNull())
			alarmHistoryListObject.alertTime = std::stol(value["AlertTime"].asString());
		if(!value["LastTime"].isNull())
			alarmHistoryListObject.lastTime = std::stol(value["LastTime"].asString());
		if(!value["Level"].isNull())
			alarmHistoryListObject.level = value["Level"].asString();
		if(!value["PreLevel"].isNull())
			alarmHistoryListObject.preLevel = value["PreLevel"].asString();
		if(!value["RuleName"].isNull())
			alarmHistoryListObject.ruleName = value["RuleName"].asString();
		if(!value["State"].isNull())
			alarmHistoryListObject.state = value["State"].asString();
		if(!value["Status"].isNull())
			alarmHistoryListObject.status = std::stoi(value["Status"].asString());
		if(!value["UserId"].isNull())
			alarmHistoryListObject.userId = value["UserId"].asString();
		if(!value["Webhooks"].isNull())
			alarmHistoryListObject.webhooks = value["Webhooks"].asString();
		if(!value["InstanceName"].isNull())
			alarmHistoryListObject.instanceName = value["InstanceName"].asString();
		auto allContactGroups = value["ContactGroups"]["ContactGroup"];
		for (auto value : allContactGroups)
			alarmHistoryListObject.contactGroups.push_back(value.asString());
		auto allContacts = value["Contacts"]["Contact"];
		for (auto value : allContacts)
			alarmHistoryListObject.contacts.push_back(value.asString());
		auto allContactALIIMs = value["ContactALIIMs"]["ContactALIIM"];
		for (auto value : allContactALIIMs)
			alarmHistoryListObject.contactALIIMs.push_back(value.asString());
		auto allContactSmses = value["ContactSmses"]["ContactSms"];
		for (auto value : allContactSmses)
			alarmHistoryListObject.contactSmses.push_back(value.asString());
		auto allContactMails = value["ContactMails"]["ContactMail"];
		for (auto value : allContactMails)
			alarmHistoryListObject.contactMails.push_back(value.asString());
		alarmHistoryList_.push_back(alarmHistoryListObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Total"].isNull())
		total_ = value["Total"].asString();

}

std::vector<DescribeAlarmHistoryResult::AlarmHistory> DescribeAlarmHistoryResult::getAlarmHistoryList()const
{
	return alarmHistoryList_;
}

std::string DescribeAlarmHistoryResult::getMessage()const
{
	return message_;
}

std::string DescribeAlarmHistoryResult::getTotal()const
{
	return total_;
}

std::string DescribeAlarmHistoryResult::getCode()const
{
	return code_;
}

bool DescribeAlarmHistoryResult::getSuccess()const
{
	return success_;
}

