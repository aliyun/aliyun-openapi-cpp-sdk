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

#include <alibabacloud/edas/model/GetAccountMockRuleRequest.h>

using AlibabaCloud::Edas::Model::GetAccountMockRuleRequest;

GetAccountMockRuleRequest::GetAccountMockRuleRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/sp/api/mock/getAccountMockRule");
	setMethod(HttpRequest::Method::Post);
}

GetAccountMockRuleRequest::~GetAccountMockRuleRequest()
{}

std::string GetAccountMockRuleRequest::getProviderAppName()const
{
	return providerAppName_;
}

void GetAccountMockRuleRequest::setProviderAppName(const std::string& providerAppName)
{
	providerAppName_ = providerAppName;
	setParameter("ProviderAppName", providerAppName);
}

std::string GetAccountMockRuleRequest::getPageNumber()const
{
	return pageNumber_;
}

void GetAccountMockRuleRequest::setPageNumber(const std::string& pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", pageNumber);
}

std::string GetAccountMockRuleRequest::getPageSize()const
{
	return pageSize_;
}

void GetAccountMockRuleRequest::setPageSize(const std::string& pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", pageSize);
}

std::string GetAccountMockRuleRequest::getName()const
{
	return name_;
}

void GetAccountMockRuleRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string GetAccountMockRuleRequest::get_Namespace()const
{
	return _namespace_;
}

void GetAccountMockRuleRequest::set_Namespace(const std::string& _namespace)
{
	_namespace_ = _namespace;
	setParameter("_Namespace", _namespace);
}

std::string GetAccountMockRuleRequest::getRegion()const
{
	return region_;
}

void GetAccountMockRuleRequest::setRegion(const std::string& region)
{
	region_ = region;
	setParameter("Region", region);
}

std::string GetAccountMockRuleRequest::getConsumerAppName()const
{
	return consumerAppName_;
}

void GetAccountMockRuleRequest::setConsumerAppName(const std::string& consumerAppName)
{
	consumerAppName_ = consumerAppName;
	setParameter("ConsumerAppName", consumerAppName);
}

