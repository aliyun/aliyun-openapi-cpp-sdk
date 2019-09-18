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

#include <alibabacloud/alidns/model/DeleteGtmRecoveryPlanRequest.h>

using AlibabaCloud::Alidns::Model::DeleteGtmRecoveryPlanRequest;

DeleteGtmRecoveryPlanRequest::DeleteGtmRecoveryPlanRequest() :
	RpcServiceRequest("alidns", "2015-01-09", "DeleteGtmRecoveryPlan")
{}

DeleteGtmRecoveryPlanRequest::~DeleteGtmRecoveryPlanRequest()
{}

std::string DeleteGtmRecoveryPlanRequest::getUserClientIp()const
{
	return userClientIp_;
}

void DeleteGtmRecoveryPlanRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", userClientIp);
}

long DeleteGtmRecoveryPlanRequest::getRecoveryPlanId()const
{
	return recoveryPlanId_;
}

void DeleteGtmRecoveryPlanRequest::setRecoveryPlanId(long recoveryPlanId)
{
	recoveryPlanId_ = recoveryPlanId;
	setCoreParameter("RecoveryPlanId", std::to_string(recoveryPlanId));
}

std::string DeleteGtmRecoveryPlanRequest::getLang()const
{
	return lang_;
}

void DeleteGtmRecoveryPlanRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

