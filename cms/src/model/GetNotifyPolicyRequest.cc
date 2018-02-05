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
	RpcServiceRequest("cms", "2017-03-01", "GetNotifyPolicy")
{}

GetNotifyPolicyRequest::~GetNotifyPolicyRequest()
{}

std::string GetNotifyPolicyRequest::getPolicyType()const
{
	return policyType_;
}

void GetNotifyPolicyRequest::setPolicyType(const std::string& policyType)
{
	policyType_ = policyType;
	setParameter("PolicyType", policyType);
}

std::string GetNotifyPolicyRequest::getAlertName()const
{
	return alertName_;
}

void GetNotifyPolicyRequest::setAlertName(const std::string& alertName)
{
	alertName_ = alertName;
	setParameter("AlertName", alertName);
}

std::string GetNotifyPolicyRequest::getId()const
{
	return id_;
}

void GetNotifyPolicyRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

std::string GetNotifyPolicyRequest::getDimensions()const
{
	return dimensions_;
}

void GetNotifyPolicyRequest::setDimensions(const std::string& dimensions)
{
	dimensions_ = dimensions;
	setParameter("Dimensions", dimensions);
}

std::string GetNotifyPolicyRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetNotifyPolicyRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

