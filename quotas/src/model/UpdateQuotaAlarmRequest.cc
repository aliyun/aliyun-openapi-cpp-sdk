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

#include <alibabacloud/quotas/model/UpdateQuotaAlarmRequest.h>

using AlibabaCloud::Quotas::Model::UpdateQuotaAlarmRequest;

UpdateQuotaAlarmRequest::UpdateQuotaAlarmRequest() :
	RpcServiceRequest("quotas", "2020-05-10", "UpdateQuotaAlarm")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateQuotaAlarmRequest::~UpdateQuotaAlarmRequest()
{}

std::string UpdateQuotaAlarmRequest::getWebHook()const
{
	return webHook_;
}

void UpdateQuotaAlarmRequest::setWebHook(const std::string& webHook)
{
	webHook_ = webHook;
	setBodyParameter("WebHook", webHook);
}

float UpdateQuotaAlarmRequest::getThreshold()const
{
	return threshold_;
}

void UpdateQuotaAlarmRequest::setThreshold(float threshold)
{
	threshold_ = threshold;
	setBodyParameter("Threshold", std::to_string(threshold));
}

std::string UpdateQuotaAlarmRequest::getThresholdType()const
{
	return thresholdType_;
}

void UpdateQuotaAlarmRequest::setThresholdType(const std::string& thresholdType)
{
	thresholdType_ = thresholdType;
	setBodyParameter("ThresholdType", thresholdType);
}

float UpdateQuotaAlarmRequest::getThresholdPercent()const
{
	return thresholdPercent_;
}

void UpdateQuotaAlarmRequest::setThresholdPercent(float thresholdPercent)
{
	thresholdPercent_ = thresholdPercent;
	setBodyParameter("ThresholdPercent", std::to_string(thresholdPercent));
}

std::string UpdateQuotaAlarmRequest::getAlarmId()const
{
	return alarmId_;
}

void UpdateQuotaAlarmRequest::setAlarmId(const std::string& alarmId)
{
	alarmId_ = alarmId;
	setBodyParameter("AlarmId", alarmId);
}

std::string UpdateQuotaAlarmRequest::getAlarmName()const
{
	return alarmName_;
}

void UpdateQuotaAlarmRequest::setAlarmName(const std::string& alarmName)
{
	alarmName_ = alarmName;
	setBodyParameter("AlarmName", alarmName);
}

