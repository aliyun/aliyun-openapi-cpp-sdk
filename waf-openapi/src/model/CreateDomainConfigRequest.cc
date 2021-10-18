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

#include <alibabacloud/waf-openapi/model/CreateDomainConfigRequest.h>

using AlibabaCloud::Waf_openapi::Model::CreateDomainConfigRequest;

CreateDomainConfigRequest::CreateDomainConfigRequest() :
	RpcServiceRequest("waf-openapi", "2018-01-17", "CreateDomainConfig")
{
	setMethod(HttpRequest::Method::Post);
}

CreateDomainConfigRequest::~CreateDomainConfigRequest()
{}

std::string CreateDomainConfigRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CreateDomainConfigRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string CreateDomainConfigRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateDomainConfigRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string CreateDomainConfigRequest::getHttpPort()const
{
	return httpPort_;
}

void CreateDomainConfigRequest::setHttpPort(const std::string& httpPort)
{
	httpPort_ = httpPort;
	setParameter("HttpPort", httpPort);
}

std::string CreateDomainConfigRequest::getLang()const
{
	return lang_;
}

void CreateDomainConfigRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string CreateDomainConfigRequest::getProtocols()const
{
	return protocols_;
}

void CreateDomainConfigRequest::setProtocols(const std::string& protocols)
{
	protocols_ = protocols;
	setParameter("Protocols", protocols);
}

int CreateDomainConfigRequest::getRsType()const
{
	return rsType_;
}

void CreateDomainConfigRequest::setRsType(int rsType)
{
	rsType_ = rsType;
	setParameter("RsType", std::to_string(rsType));
}

int CreateDomainConfigRequest::getHttpsRedirect()const
{
	return httpsRedirect_;
}

void CreateDomainConfigRequest::setHttpsRedirect(int httpsRedirect)
{
	httpsRedirect_ = httpsRedirect;
	setParameter("HttpsRedirect", std::to_string(httpsRedirect));
}

std::string CreateDomainConfigRequest::getInstanceId()const
{
	return instanceId_;
}

void CreateDomainConfigRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string CreateDomainConfigRequest::getSourceIps()const
{
	return sourceIps_;
}

void CreateDomainConfigRequest::setSourceIps(const std::string& sourceIps)
{
	sourceIps_ = sourceIps;
	setParameter("SourceIps", sourceIps);
}

std::string CreateDomainConfigRequest::getDomain()const
{
	return domain_;
}

void CreateDomainConfigRequest::setDomain(const std::string& domain)
{
	domain_ = domain;
	setParameter("Domain", domain);
}

int CreateDomainConfigRequest::getIsAccessProduct()const
{
	return isAccessProduct_;
}

void CreateDomainConfigRequest::setIsAccessProduct(int isAccessProduct)
{
	isAccessProduct_ = isAccessProduct;
	setParameter("IsAccessProduct", std::to_string(isAccessProduct));
}

std::string CreateDomainConfigRequest::getHttpsPort()const
{
	return httpsPort_;
}

void CreateDomainConfigRequest::setHttpsPort(const std::string& httpsPort)
{
	httpsPort_ = httpsPort;
	setParameter("HttpsPort", httpsPort);
}

std::string CreateDomainConfigRequest::getRegion()const
{
	return region_;
}

void CreateDomainConfigRequest::setRegion(const std::string& region)
{
	region_ = region;
	setParameter("Region", region);
}

int CreateDomainConfigRequest::getLoadBalancing()const
{
	return loadBalancing_;
}

void CreateDomainConfigRequest::setLoadBalancing(int loadBalancing)
{
	loadBalancing_ = loadBalancing;
	setParameter("LoadBalancing", std::to_string(loadBalancing));
}

int CreateDomainConfigRequest::getHttpToUserIp()const
{
	return httpToUserIp_;
}

void CreateDomainConfigRequest::setHttpToUserIp(int httpToUserIp)
{
	httpToUserIp_ = httpToUserIp;
	setParameter("HttpToUserIp", std::to_string(httpToUserIp));
}

