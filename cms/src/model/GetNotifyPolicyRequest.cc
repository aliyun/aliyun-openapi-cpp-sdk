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

#include <alibabacloud/cms/model/GetNotifyPolicyRequest.h>

using AlibabaCloud::Cms::Model::GetNotifyPolicyRequest;

GetNotifyPolicyRequest::GetNotifyPolicyRequest() :
	RpcServiceRequest("cms", "2018-03-08", "GetNotifyPolicy")
{
	setMethod(HttpRequest::Method::Post);
}

GetNotifyPolicyRequest::~GetNotifyPolicyRequest()
{}

std::string GetNotifyPolicyRequest::getPolicyType()const
{
	return policyType_;
}

void GetNotifyPolicyRequest::setPolicyType(const std::string& policyType)
{
	policyType_ = policyType;
	setCoreParameter("PolicyType", policyType);
}

std::string GetNotifyPolicyRequest::getAlertName()const
{
	return alertName_;
}

void GetNotifyPolicyRequest::setAlertName(const std::string& alertName)
{
	alertName_ = alertName;
	setCoreParameter("AlertName", alertName);
}

std::string GetNotifyPolicyRequest::getGroupId()const
{
	return groupId_;
}

void GetNotifyPolicyRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", groupId);
}

std::string GetNotifyPolicyRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetNotifyPolicyRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string GetNotifyPolicyRequest::getId()const
{
	return id_;
}

void GetNotifyPolicyRequest::setId(const std::string& id)
{
	id_ = id;
	setCoreParameter("Id", id);
}

std::string GetNotifyPolicyRequest::getDimensions()const
{
	return dimensions_;
}

void GetNotifyPolicyRequest::setDimensions(const std::string& dimensions)
{
	dimensions_ = dimensions;
	setCoreParameter("Dimensions", dimensions);
}

