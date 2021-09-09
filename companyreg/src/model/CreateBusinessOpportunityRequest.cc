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

#include <alibabacloud/companyreg/model/CreateBusinessOpportunityRequest.h>

using AlibabaCloud::Companyreg::Model::CreateBusinessOpportunityRequest;

CreateBusinessOpportunityRequest::CreateBusinessOpportunityRequest() :
	RpcServiceRequest("companyreg", "2020-03-06", "CreateBusinessOpportunity")
{
	setMethod(HttpRequest::Method::Post);
}

CreateBusinessOpportunityRequest::~CreateBusinessOpportunityRequest()
{}

std::string CreateBusinessOpportunityRequest::getMobile()const
{
	return mobile_;
}

void CreateBusinessOpportunityRequest::setMobile(const std::string& mobile)
{
	mobile_ = mobile;
	setParameter("Mobile", mobile);
}

int CreateBusinessOpportunityRequest::getSource()const
{
	return source_;
}

void CreateBusinessOpportunityRequest::setSource(int source)
{
	source_ = source;
	setParameter("Source", std::to_string(source));
}

std::string CreateBusinessOpportunityRequest::getVCode()const
{
	return vCode_;
}

void CreateBusinessOpportunityRequest::setVCode(const std::string& vCode)
{
	vCode_ = vCode;
	setParameter("VCode", vCode);
}

std::string CreateBusinessOpportunityRequest::getContactName()const
{
	return contactName_;
}

void CreateBusinessOpportunityRequest::setContactName(const std::string& contactName)
{
	contactName_ = contactName;
	setParameter("ContactName", contactName);
}

std::string CreateBusinessOpportunityRequest::getBizType()const
{
	return bizType_;
}

void CreateBusinessOpportunityRequest::setBizType(const std::string& bizType)
{
	bizType_ = bizType;
	setParameter("BizType", bizType);
}

