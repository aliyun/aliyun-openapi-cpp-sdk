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

#include <alibabacloud/cms/model/ListNotifyPolicyRequest.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

ListNotifyPolicyRequest::ListNotifyPolicyRequest() :
	CmsRequest("ListNotifyPolicy")
{}

ListNotifyPolicyRequest::~ListNotifyPolicyRequest()
{}

std::string ListNotifyPolicyRequest::getPolicyType()const
{
	return policyType_;
}

void ListNotifyPolicyRequest::setPolicyType(const std::string& policyType)
{
	policyType_ = policyType;
	setParameter("PolicyType", policyType);
}

std::string ListNotifyPolicyRequest::getAlertName()const
{
	return alertName_;
}

void ListNotifyPolicyRequest::setAlertName(const std::string& alertName)
{
	alertName_ = alertName;
	setParameter("AlertName", alertName);
}

int ListNotifyPolicyRequest::getPageSize()const
{
	return pageSize_;
}

void ListNotifyPolicyRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListNotifyPolicyRequest::getId()const
{
	return id_;
}

void ListNotifyPolicyRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

std::string ListNotifyPolicyRequest::getDimensions()const
{
	return dimensions_;
}

void ListNotifyPolicyRequest::setDimensions(const std::string& dimensions)
{
	dimensions_ = dimensions;
	setParameter("Dimensions", dimensions);
}

std::string ListNotifyPolicyRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListNotifyPolicyRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

