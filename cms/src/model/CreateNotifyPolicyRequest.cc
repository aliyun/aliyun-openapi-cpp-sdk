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

#include <alibabacloud/cms/model/CreateNotifyPolicyRequest.h>

using AlibabaCloud::Cms::Model::CreateNotifyPolicyRequest;

CreateNotifyPolicyRequest::CreateNotifyPolicyRequest() :
	RpcServiceRequest("cms", "2017-03-01", "CreateNotifyPolicy")
{}

CreateNotifyPolicyRequest::~CreateNotifyPolicyRequest()
{}

std::string CreateNotifyPolicyRequest::getPolicyType()const
{
	return policyType_;
}

void CreateNotifyPolicyRequest::setPolicyType(const std::string& policyType)
{
	policyType_ = policyType;
	setParameter("PolicyType", policyType);
}

std::string CreateNotifyPolicyRequest::getAlertName()const
{
	return alertName_;
}

void CreateNotifyPolicyRequest::setAlertName(const std::string& alertName)
{
	alertName_ = alertName;
	setParameter("AlertName", alertName);
}

long CreateNotifyPolicyRequest::getEndTime()const
{
	return endTime_;
}

void CreateNotifyPolicyRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", std::to_string(endTime));
}

long CreateNotifyPolicyRequest::getStartTime()const
{
	return startTime_;
}

void CreateNotifyPolicyRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", std::to_string(startTime));
}

std::string CreateNotifyPolicyRequest::getDimensions()const
{
	return dimensions_;
}

void CreateNotifyPolicyRequest::setDimensions(const std::string& dimensions)
{
	dimensions_ = dimensions;
	setParameter("Dimensions", dimensions);
}

std::string CreateNotifyPolicyRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateNotifyPolicyRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

