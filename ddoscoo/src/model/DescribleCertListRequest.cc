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

#include <alibabacloud/ddoscoo/model/DescribleCertListRequest.h>

using AlibabaCloud::Ddoscoo::Model::DescribleCertListRequest;

DescribleCertListRequest::DescribleCertListRequest() :
	RpcServiceRequest("ddoscoo", "2017-12-28", "DescribleCertList")
{
	setMethod(HttpRequest::Method::Post);
}

DescribleCertListRequest::~DescribleCertListRequest()
{}

std::string DescribleCertListRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribleCertListRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribleCertListRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribleCertListRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DescribleCertListRequest::getDomain()const
{
	return domain_;
}

void DescribleCertListRequest::setDomain(const std::string& domain)
{
	domain_ = domain;
	setParameter("Domain", domain);
}

