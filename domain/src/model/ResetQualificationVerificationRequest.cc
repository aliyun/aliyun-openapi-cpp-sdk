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

#include <alibabacloud/domain/model/ResetQualificationVerificationRequest.h>

using AlibabaCloud::Domain::Model::ResetQualificationVerificationRequest;

ResetQualificationVerificationRequest::ResetQualificationVerificationRequest() :
	RpcServiceRequest("domain", "2018-01-29", "ResetQualificationVerification")
{}

ResetQualificationVerificationRequest::~ResetQualificationVerificationRequest()
{}

std::string ResetQualificationVerificationRequest::getInstanceId()const
{
	return instanceId_;
}

void ResetQualificationVerificationRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string ResetQualificationVerificationRequest::getUserClientIp()const
{
	return userClientIp_;
}

void ResetQualificationVerificationRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", userClientIp);
}

std::string ResetQualificationVerificationRequest::getLang()const
{
	return lang_;
}

void ResetQualificationVerificationRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

std::string ResetQualificationVerificationRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ResetQualificationVerificationRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

