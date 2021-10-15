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

#include <alibabacloud/domain/model/CreateFixedPriceDemandOrderRequest.h>

using AlibabaCloud::Domain::Model::CreateFixedPriceDemandOrderRequest;

CreateFixedPriceDemandOrderRequest::CreateFixedPriceDemandOrderRequest() :
	RpcServiceRequest("domain", "2018-02-08", "CreateFixedPriceDemandOrder")
{
	setMethod(HttpRequest::Method::Post);
}

CreateFixedPriceDemandOrderRequest::~CreateFixedPriceDemandOrderRequest()
{}

std::string CreateFixedPriceDemandOrderRequest::getCode()const
{
	return code_;
}

void CreateFixedPriceDemandOrderRequest::setCode(const std::string& code)
{
	code_ = code;
	setParameter("Code", code);
}

std::string CreateFixedPriceDemandOrderRequest::getContactId()const
{
	return contactId_;
}

void CreateFixedPriceDemandOrderRequest::setContactId(const std::string& contactId)
{
	contactId_ = contactId;
	setParameter("ContactId", contactId);
}

std::string CreateFixedPriceDemandOrderRequest::getDomain()const
{
	return domain_;
}

void CreateFixedPriceDemandOrderRequest::setDomain(const std::string& domain)
{
	domain_ = domain;
	setParameter("Domain", domain);
}

std::string CreateFixedPriceDemandOrderRequest::getSource()const
{
	return source_;
}

void CreateFixedPriceDemandOrderRequest::setSource(const std::string& source)
{
	source_ = source;
	setParameter("Source", source);
}

