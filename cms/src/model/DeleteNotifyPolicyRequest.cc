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

#include <alibabacloud/cms/model/DeleteNotifyPolicyRequest.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

DeleteNotifyPolicyRequest::DeleteNotifyPolicyRequest() :
	CmsRequest("DeleteNotifyPolicy")
{}

DeleteNotifyPolicyRequest::~DeleteNotifyPolicyRequest()
{}

std::string DeleteNotifyPolicyRequest::getPolicyType()const
{
	return policyType_;
}

void DeleteNotifyPolicyRequest::setPolicyType(const std::string& policyType)
{
	policyType_ = policyType;
	setParameter("PolicyType", policyType);
}

std::string DeleteNotifyPolicyRequest::getAlertName()const
{
	return alertName_;
}

void DeleteNotifyPolicyRequest::setAlertName(const std::string& alertName)
{
	alertName_ = alertName;
	setParameter("AlertName", alertName);
}

std::string DeleteNotifyPolicyRequest::getId()const
{
	return id_;
}

void DeleteNotifyPolicyRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

std::string DeleteNotifyPolicyRequest::getDimensions()const
{
	return dimensions_;
}

void DeleteNotifyPolicyRequest::setDimensions(const std::string& dimensions)
{
	dimensions_ = dimensions;
	setParameter("Dimensions", dimensions);
}

std::string DeleteNotifyPolicyRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteNotifyPolicyRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

