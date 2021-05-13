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

#include <alibabacloud/ddoscoo/model/CreateDomainResourceRequest.h>

using AlibabaCloud::Ddoscoo::Model::CreateDomainResourceRequest;

CreateDomainResourceRequest::CreateDomainResourceRequest() :
	RpcServiceRequest("ddoscoo", "2020-01-01", "CreateDomainResource")
{
	setMethod(HttpRequest::Method::Post);
}

CreateDomainResourceRequest::~CreateDomainResourceRequest()
{}

std::string CreateDomainResourceRequest::getHttpsExt()const
{
	return httpsExt_;
}

void CreateDomainResourceRequest::setHttpsExt(const std::string& httpsExt)
{
	httpsExt_ = httpsExt;
	setParameter("HttpsExt", httpsExt);
}

std::string CreateDomainResourceRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateDomainResourceRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

int CreateDomainResourceRequest::getRsType()const
{
	return rsType_;
}

void CreateDomainResourceRequest::setRsType(int rsType)
{
	rsType_ = rsType;
	setParameter("RsType", std::to_string(rsType));
}

std::vector<std::string> CreateDomainResourceRequest::getRealServers()const
{
	return realServers_;
}

void CreateDomainResourceRequest::setRealServers(const std::vector<std::string>& realServers)
{
	realServers_ = realServers;
	for(int dep1 = 0; dep1!= realServers.size(); dep1++) {
		setParameter("RealServers."+ std::to_string(dep1), realServers.at(dep1));
	}
}

std::vector<std::string> CreateDomainResourceRequest::getInstanceIds()const
{
	return instanceIds_;
}

void CreateDomainResourceRequest::setInstanceIds(const std::vector<std::string>& instanceIds)
{
	instanceIds_ = instanceIds;
	for(int dep1 = 0; dep1!= instanceIds.size(); dep1++) {
		setParameter("InstanceIds."+ std::to_string(dep1), instanceIds.at(dep1));
	}
}

std::vector<CreateDomainResourceRequest::ProxyTypes> CreateDomainResourceRequest::getProxyTypes()const
{
	return proxyTypes_;
}

void CreateDomainResourceRequest::setProxyTypes(const std::vector<ProxyTypes>& proxyTypes)
{
	proxyTypes_ = proxyTypes;
	for(int dep1 = 0; dep1!= proxyTypes.size(); dep1++) {
		auto proxyTypesObj = proxyTypes.at(dep1);
		std::string proxyTypesObjStr = "ProxyTypes." + std::to_string(dep1 + 1);
		for(int dep2 = 0; dep2!= proxyTypesObj.proxyPorts.size(); dep2++) {
			setParameter(proxyTypesObjStr + ".ProxyPorts."+ std::to_string(dep2), std::to_string(proxyTypesObj.proxyPorts.at(dep2)));
		}
		setParameter(proxyTypesObjStr + ".ProxyType", proxyTypesObj.proxyType);
	}
}

std::string CreateDomainResourceRequest::getDomain()const
{
	return domain_;
}

void CreateDomainResourceRequest::setDomain(const std::string& domain)
{
	domain_ = domain;
	setParameter("Domain", domain);
}

