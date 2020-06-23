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

#include <alibabacloud/domain/model/RequestPayDemandRequest.h>

using AlibabaCloud::Domain::Model::RequestPayDemandRequest;

RequestPayDemandRequest::RequestPayDemandRequest() :
	RpcServiceRequest("domain", "2018-02-08", "RequestPayDemand")
{
	setMethod(HttpRequest::Method::Post);
}

RequestPayDemandRequest::~RequestPayDemandRequest()
{}

float RequestPayDemandRequest::getPrice()const
{
	return price_;
}

void RequestPayDemandRequest::setPrice(float price)
{
	price_ = price;
	setParameter("Price", std::to_string(price));
}

std::string RequestPayDemandRequest::getBizId()const
{
	return bizId_;
}

void RequestPayDemandRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setParameter("BizId", bizId);
}

std::string RequestPayDemandRequest::getDomainName()const
{
	return domainName_;
}

void RequestPayDemandRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

int RequestPayDemandRequest::getProduceType()const
{
	return produceType_;
}

void RequestPayDemandRequest::setProduceType(int produceType)
{
	produceType_ = produceType;
	setParameter("ProduceType", std::to_string(produceType));
}

std::string RequestPayDemandRequest::getMessage()const
{
	return message_;
}

void RequestPayDemandRequest::setMessage(const std::string& message)
{
	message_ = message;
	setParameter("Message", message);
}

