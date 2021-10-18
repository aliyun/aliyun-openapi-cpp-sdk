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

#include <alibabacloud/waf-openapi/model/DeleteDomainConfigRequest.h>

using AlibabaCloud::Waf_openapi::Model::DeleteDomainConfigRequest;

DeleteDomainConfigRequest::DeleteDomainConfigRequest() :
	RpcServiceRequest("waf-openapi", "2018-01-17", "DeleteDomainConfig")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteDomainConfigRequest::~DeleteDomainConfigRequest()
{}

std::string DeleteDomainConfigRequest::getInstanceId()const
{
	return instanceId_;
}

void DeleteDomainConfigRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string DeleteDomainConfigRequest::getSourceIp()const
{
	return sourceIp_;
}

void DeleteDomainConfigRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DeleteDomainConfigRequest::getDomain()const
{
	return domain_;
}

void DeleteDomainConfigRequest::setDomain(const std::string& domain)
{
	domain_ = domain;
	setParameter("Domain", domain);
}

std::string DeleteDomainConfigRequest::getLang()const
{
	return lang_;
}

void DeleteDomainConfigRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string DeleteDomainConfigRequest::getRegion()const
{
	return region_;
}

void DeleteDomainConfigRequest::setRegion(const std::string& region)
{
	region_ = region;
	setParameter("Region", region);
}

