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

#include <alibabacloud/waf-openapi/model/ModifyDomainConfigRequest.h>

using AlibabaCloud::Waf_openapi::Model::ModifyDomainConfigRequest;

ModifyDomainConfigRequest::ModifyDomainConfigRequest() :
	RpcServiceRequest("waf-openapi", "2018-01-17", "ModifyDomainConfig")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyDomainConfigRequest::~ModifyDomainConfigRequest()
{}

std::string ModifyDomainConfigRequest::getSourceIp()const
{
	return sourceIp_;
}

void ModifyDomainConfigRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string ModifyDomainConfigRequest::getHttpPort()const
{
	return httpPort_;
}

void ModifyDomainConfigRequest::setHttpPort(const std::string& httpPort)
{
	httpPort_ = httpPort;
	setParameter("HttpPort", httpPort);
}

std::string ModifyDomainConfigRequest::getLang()const
{
	return lang_;
}

void ModifyDomainConfigRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string ModifyDomainConfigRequest::getProtocols()const
{
	return protocols_;
}

void ModifyDomainConfigRequest::setProtocols(const std::string& protocols)
{
	protocols_ = protocols;
	setParameter("Protocols", protocols);
}

int ModifyDomainConfigRequest::getHttpsRedirect()const
{
	return httpsRedirect_;
}

void ModifyDomainConfigRequest::setHttpsRedirect(int httpsRedirect)
{
	httpsRedirect_ = httpsRedirect;
	setParameter("HttpsRedirect", std::to_string(httpsRedirect));
}

std::string ModifyDomainConfigRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifyDomainConfigRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string ModifyDomainConfigRequest::getSourceIps()const
{
	return sourceIps_;
}

void ModifyDomainConfigRequest::setSourceIps(const std::string& sourceIps)
{
	sourceIps_ = sourceIps;
	setParameter("SourceIps", sourceIps);
}

std::string ModifyDomainConfigRequest::getDomain()const
{
	return domain_;
}

void ModifyDomainConfigRequest::setDomain(const std::string& domain)
{
	domain_ = domain;
	setParameter("Domain", domain);
}

int ModifyDomainConfigRequest::getIsAccessProduct()const
{
	return isAccessProduct_;
}

void ModifyDomainConfigRequest::setIsAccessProduct(int isAccessProduct)
{
	isAccessProduct_ = isAccessProduct;
	setParameter("IsAccessProduct", std::to_string(isAccessProduct));
}

std::string ModifyDomainConfigRequest::getHttpsPort()const
{
	return httpsPort_;
}

void ModifyDomainConfigRequest::setHttpsPort(const std::string& httpsPort)
{
	httpsPort_ = httpsPort;
	setParameter("HttpsPort", httpsPort);
}

std::string ModifyDomainConfigRequest::getRegion()const
{
	return region_;
}

void ModifyDomainConfigRequest::setRegion(const std::string& region)
{
	region_ = region;
	setParameter("Region", region);
}

int ModifyDomainConfigRequest::getLoadBalancing()const
{
	return loadBalancing_;
}

void ModifyDomainConfigRequest::setLoadBalancing(int loadBalancing)
{
	loadBalancing_ = loadBalancing;
	setParameter("LoadBalancing", std::to_string(loadBalancing));
}

int ModifyDomainConfigRequest::getHttpToUserIp()const
{
	return httpToUserIp_;
}

void ModifyDomainConfigRequest::setHttpToUserIp(int httpToUserIp)
{
	httpToUserIp_ = httpToUserIp;
	setParameter("HttpToUserIp", std::to_string(httpToUserIp));
}

