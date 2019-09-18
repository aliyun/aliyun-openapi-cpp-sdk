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
	RpcServiceRequest("cms", "2018-03-08", "CreateNotifyPolicy")
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
	setCoreParameter("PolicyType", policyType);
}

std::string CreateNotifyPolicyRequest::getAlertName()const
{
	return alertName_;
}

void CreateNotifyPolicyRequest::setAlertName(const std::string& alertName)
{
	alertName_ = alertName;
	setCoreParameter("AlertName", alertName);
}

std::string CreateNotifyPolicyRequest::getGroupId()const
{
	return groupId_;
}

void CreateNotifyPolicyRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", groupId);
}

long CreateNotifyPolicyRequest::getEndTime()const
{
	return endTime_;
}

void CreateNotifyPolicyRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

long CreateNotifyPolicyRequest::getStartTime()const
{
	return startTime_;
}

void CreateNotifyPolicyRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

std::string CreateNotifyPolicyRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateNotifyPolicyRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string CreateNotifyPolicyRequest::getDimensions()const
{
	return dimensions_;
}

void CreateNotifyPolicyRequest::setDimensions(const std::string& dimensions)
{
	dimensions_ = dimensions;
	setCoreParameter("Dimensions", dimensions);
}

