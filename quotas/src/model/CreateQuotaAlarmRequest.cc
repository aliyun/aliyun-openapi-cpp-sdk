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

#include <alibabacloud/quotas/model/CreateQuotaAlarmRequest.h>

using AlibabaCloud::Quotas::Model::CreateQuotaAlarmRequest;

CreateQuotaAlarmRequest::CreateQuotaAlarmRequest() :
	RpcServiceRequest("quotas", "2020-05-10", "CreateQuotaAlarm")
{
	setMethod(HttpRequest::Method::Post);
}

CreateQuotaAlarmRequest::~CreateQuotaAlarmRequest()
{}

std::string CreateQuotaAlarmRequest::getProductCode()const
{
	return productCode_;
}

void CreateQuotaAlarmRequest::setProductCode(const std::string& productCode)
{
	productCode_ = productCode;
	setBodyParameter("ProductCode", productCode);
}

std::string CreateQuotaAlarmRequest::getWebHook()const
{
	return webHook_;
}

void CreateQuotaAlarmRequest::setWebHook(const std::string& webHook)
{
	webHook_ = webHook;
	setBodyParameter("WebHook", webHook);
}

float CreateQuotaAlarmRequest::getThreshold()const
{
	return threshold_;
}

void CreateQuotaAlarmRequest::setThreshold(float threshold)
{
	threshold_ = threshold;
	setBodyParameter("Threshold", std::to_string(threshold));
}

std::string CreateQuotaAlarmRequest::getQuotaActionCode()const
{
	return quotaActionCode_;
}

void CreateQuotaAlarmRequest::setQuotaActionCode(const std::string& quotaActionCode)
{
	quotaActionCode_ = quotaActionCode;
	setBodyParameter("QuotaActionCode", quotaActionCode);
}

std::string CreateQuotaAlarmRequest::getThresholdType()const
{
	return thresholdType_;
}

void CreateQuotaAlarmRequest::setThresholdType(const std::string& thresholdType)
{
	thresholdType_ = thresholdType;
	setBodyParameter("ThresholdType", thresholdType);
}

std::vector<CreateQuotaAlarmRequest::QuotaDimensions> CreateQuotaAlarmRequest::getQuotaDimensions()const
{
	return quotaDimensions_;
}

void CreateQuotaAlarmRequest::setQuotaDimensions(const std::vector<QuotaDimensions>& quotaDimensions)
{
	quotaDimensions_ = quotaDimensions;
	for(int dep1 = 0; dep1!= quotaDimensions.size(); dep1++) {
		auto quotaDimensionsObj = quotaDimensions.at(dep1);
		std::string quotaDimensionsObjStr = "QuotaDimensions." + std::to_string(dep1 + 1);
		setParameter(quotaDimensionsObjStr + ".Key", quotaDimensionsObj.key);
		setParameter(quotaDimensionsObjStr + ".Value", quotaDimensionsObj.value);
	}
}

float CreateQuotaAlarmRequest::getThresholdPercent()const
{
	return thresholdPercent_;
}

void CreateQuotaAlarmRequest::setThresholdPercent(float thresholdPercent)
{
	thresholdPercent_ = thresholdPercent;
	setBodyParameter("ThresholdPercent", std::to_string(thresholdPercent));
}

std::string CreateQuotaAlarmRequest::getAlarmName()const
{
	return alarmName_;
}

void CreateQuotaAlarmRequest::setAlarmName(const std::string& alarmName)
{
	alarmName_ = alarmName;
	setBodyParameter("AlarmName", alarmName);
}

