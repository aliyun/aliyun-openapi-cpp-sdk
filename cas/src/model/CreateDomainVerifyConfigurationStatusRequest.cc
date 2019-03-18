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

#include <alibabacloud/cas/model/CreateDomainVerifyConfigurationStatusRequest.h>

using AlibabaCloud::Cas::Model::CreateDomainVerifyConfigurationStatusRequest;

CreateDomainVerifyConfigurationStatusRequest::CreateDomainVerifyConfigurationStatusRequest() :
	RpcServiceRequest("cas", "2018-08-13", "CreateDomainVerifyConfigurationStatus")
{}

CreateDomainVerifyConfigurationStatusRequest::~CreateDomainVerifyConfigurationStatusRequest()
{}

std::string CreateDomainVerifyConfigurationStatusRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateDomainVerifyConfigurationStatusRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

long CreateDomainVerifyConfigurationStatusRequest::getOrderId()const
{
	return orderId_;
}

void CreateDomainVerifyConfigurationStatusRequest::setOrderId(long orderId)
{
	orderId_ = orderId;
	setParameter("OrderId", std::to_string(orderId));
}

std::string CreateDomainVerifyConfigurationStatusRequest::getLang()const
{
	return lang_;
}

void CreateDomainVerifyConfigurationStatusRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string CreateDomainVerifyConfigurationStatusRequest::getType()const
{
	return type_;
}

void CreateDomainVerifyConfigurationStatusRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

