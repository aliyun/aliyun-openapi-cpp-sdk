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

#include <alibabacloud/cas/model/CreateCooperationOrderRequest.h>

using AlibabaCloud::Cas::Model::CreateCooperationOrderRequest;

CreateCooperationOrderRequest::CreateCooperationOrderRequest() :
	RpcServiceRequest("cas", "2018-08-13", "CreateCooperationOrder")
{
	setMethod(HttpRequest::Method::Post);
}

CreateCooperationOrderRequest::~CreateCooperationOrderRequest()
{}

std::string CreateCooperationOrderRequest::getProductCode()const
{
	return productCode_;
}

void CreateCooperationOrderRequest::setProductCode(const std::string& productCode)
{
	productCode_ = productCode;
	setParameter("ProductCode", productCode);
}

std::string CreateCooperationOrderRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CreateCooperationOrderRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string CreateCooperationOrderRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateCooperationOrderRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string CreateCooperationOrderRequest::getFrom()const
{
	return from_;
}

void CreateCooperationOrderRequest::setFrom(const std::string& from)
{
	from_ = from;
	setParameter("From", from);
}

std::string CreateCooperationOrderRequest::getLang()const
{
	return lang_;
}

void CreateCooperationOrderRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string CreateCooperationOrderRequest::getDomain()const
{
	return domain_;
}

void CreateCooperationOrderRequest::setDomain(const std::string& domain)
{
	domain_ = domain;
	setParameter("Domain", domain);
}

