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

#include <alibabacloud/quotas/model/GetQuotaAlarmResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Quotas;
using namespace AlibabaCloud::Quotas::Model;

GetQuotaAlarmResult::GetQuotaAlarmResult() :
	ServiceResult()
{}

GetQuotaAlarmResult::GetQuotaAlarmResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetQuotaAlarmResult::~GetQuotaAlarmResult()
{}

void GetQuotaAlarmResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto quotaAlarmNode = value["QuotaAlarm"];
	if(!quotaAlarmNode["ThresholdPercent"].isNull())
		quotaAlarm_.thresholdPercent = std::stof(quotaAlarmNode["ThresholdPercent"].asString());
	if(!quotaAlarmNode["ThresholdType"].isNull())
		quotaAlarm_.thresholdType = quotaAlarmNode["ThresholdType"].asString();
	if(!quotaAlarmNode["QuotaDimension"].isNull())
		quotaAlarm_.quotaDimension = quotaAlarmNode["QuotaDimension"].asString();
	if(!quotaAlarmNode["CreateTime"].isNull())
		quotaAlarm_.createTime = quotaAlarmNode["CreateTime"].asString();
	if(!quotaAlarmNode["QuotaActionCode"].isNull())
		quotaAlarm_.quotaActionCode = quotaAlarmNode["QuotaActionCode"].asString();
	if(!quotaAlarmNode["AlarmName"].isNull())
		quotaAlarm_.alarmName = quotaAlarmNode["AlarmName"].asString();
	if(!quotaAlarmNode["NotifyTarget"].isNull())
		quotaAlarm_.notifyTarget = quotaAlarmNode["NotifyTarget"].asString();
	if(!quotaAlarmNode["QuotaUsage"].isNull())
		quotaAlarm_.quotaUsage = std::stof(quotaAlarmNode["QuotaUsage"].asString());
	if(!quotaAlarmNode["QuotaValue"].isNull())
		quotaAlarm_.quotaValue = std::stof(quotaAlarmNode["QuotaValue"].asString());
	if(!quotaAlarmNode["AlarmId"].isNull())
		quotaAlarm_.alarmId = quotaAlarmNode["AlarmId"].asString();
	if(!quotaAlarmNode["Threshold"].isNull())
		quotaAlarm_.threshold = std::stof(quotaAlarmNode["Threshold"].asString());
	if(!quotaAlarmNode["ProductCode"].isNull())
		quotaAlarm_.productCode = quotaAlarmNode["ProductCode"].asString();
	if(!quotaAlarmNode["Webhook"].isNull())
		quotaAlarm_.webhook = quotaAlarmNode["Webhook"].asString();
		auto allNotifyChannels = quotaAlarmNode["NotifyChannels"]["NotifyChannels"];
		for (auto value : allNotifyChannels)
			quotaAlarm_.notifyChannels.push_back(value.asString());

}

GetQuotaAlarmResult::QuotaAlarm GetQuotaAlarmResult::getQuotaAlarm()const
{
	return quotaAlarm_;
}

