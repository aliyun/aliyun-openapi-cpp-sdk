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

#include <alibabacloud/quotas/model/ListQuotaAlarmsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Quotas;
using namespace AlibabaCloud::Quotas::Model;

ListQuotaAlarmsResult::ListQuotaAlarmsResult() :
	ServiceResult()
{}

ListQuotaAlarmsResult::ListQuotaAlarmsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListQuotaAlarmsResult::~ListQuotaAlarmsResult()
{}

void ListQuotaAlarmsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allQuotaAlarmsNode = value["QuotaAlarms"]["QuotaAlarm"];
	for (auto valueQuotaAlarmsQuotaAlarm : allQuotaAlarmsNode)
	{
		QuotaAlarm quotaAlarmsObject;
		if(!valueQuotaAlarmsQuotaAlarm["ThresholdPercent"].isNull())
			quotaAlarmsObject.thresholdPercent = std::stof(valueQuotaAlarmsQuotaAlarm["ThresholdPercent"].asString());
		if(!valueQuotaAlarmsQuotaAlarm["ThresholdType"].isNull())
			quotaAlarmsObject.thresholdType = valueQuotaAlarmsQuotaAlarm["ThresholdType"].asString();
		if(!valueQuotaAlarmsQuotaAlarm["QuotaDimensions"].isNull())
			quotaAlarmsObject.quotaDimensions = valueQuotaAlarmsQuotaAlarm["QuotaDimensions"].asString();
		if(!valueQuotaAlarmsQuotaAlarm["CreateTime"].isNull())
			quotaAlarmsObject.createTime = valueQuotaAlarmsQuotaAlarm["CreateTime"].asString();
		if(!valueQuotaAlarmsQuotaAlarm["QuotaActionCode"].isNull())
			quotaAlarmsObject.quotaActionCode = valueQuotaAlarmsQuotaAlarm["QuotaActionCode"].asString();
		if(!valueQuotaAlarmsQuotaAlarm["AlarmName"].isNull())
			quotaAlarmsObject.alarmName = valueQuotaAlarmsQuotaAlarm["AlarmName"].asString();
		if(!valueQuotaAlarmsQuotaAlarm["NotifyTarget"].isNull())
			quotaAlarmsObject.notifyTarget = valueQuotaAlarmsQuotaAlarm["NotifyTarget"].asString();
		if(!valueQuotaAlarmsQuotaAlarm["QuotaUsage"].isNull())
			quotaAlarmsObject.quotaUsage = std::stof(valueQuotaAlarmsQuotaAlarm["QuotaUsage"].asString());
		if(!valueQuotaAlarmsQuotaAlarm["QuotaValue"].isNull())
			quotaAlarmsObject.quotaValue = std::stof(valueQuotaAlarmsQuotaAlarm["QuotaValue"].asString());
		if(!valueQuotaAlarmsQuotaAlarm["AlarmId"].isNull())
			quotaAlarmsObject.alarmId = valueQuotaAlarmsQuotaAlarm["AlarmId"].asString();
		if(!valueQuotaAlarmsQuotaAlarm["Threshold"].isNull())
			quotaAlarmsObject.threshold = std::stof(valueQuotaAlarmsQuotaAlarm["Threshold"].asString());
		if(!valueQuotaAlarmsQuotaAlarm["ProductCode"].isNull())
			quotaAlarmsObject.productCode = valueQuotaAlarmsQuotaAlarm["ProductCode"].asString();
		if(!valueQuotaAlarmsQuotaAlarm["WebHook"].isNull())
			quotaAlarmsObject.webHook = valueQuotaAlarmsQuotaAlarm["WebHook"].asString();
		if(!valueQuotaAlarmsQuotaAlarm["ExceedThreshold"].isNull())
			quotaAlarmsObject.exceedThreshold = valueQuotaAlarmsQuotaAlarm["ExceedThreshold"].asString() == "true";
		auto allNotifyChannels = value["NotifyChannels"]["NotifyChannels"];
		for (auto value : allNotifyChannels)
			quotaAlarmsObject.notifyChannels.push_back(value.asString());
		quotaAlarms_.push_back(quotaAlarmsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

std::vector<ListQuotaAlarmsResult::QuotaAlarm> ListQuotaAlarmsResult::getQuotaAlarms()const
{
	return quotaAlarms_;
}

int ListQuotaAlarmsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListQuotaAlarmsResult::getNextToken()const
{
	return nextToken_;
}

int ListQuotaAlarmsResult::getMaxResults()const
{
	return maxResults_;
}

