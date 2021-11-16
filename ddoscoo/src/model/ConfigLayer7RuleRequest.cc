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

#include <alibabacloud/ddoscoo/model/ConfigLayer7RuleRequest.h>

using AlibabaCloud::Ddoscoo::Model::ConfigLayer7RuleRequest;

ConfigLayer7RuleRequest::ConfigLayer7RuleRequest() :
	RpcServiceRequest("ddoscoo", "2017-12-28", "ConfigLayer7Rule")
{
	setMethod(HttpRequest::Method::Post);
}

ConfigLayer7RuleRequest::~ConfigLayer7RuleRequest()
{}

std::string ConfigLayer7RuleRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void ConfigLayer7RuleRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string ConfigLayer7RuleRequest::getSourceIp()const
{
	return sourceIp_;
}

void ConfigLayer7RuleRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string ConfigLayer7RuleRequest::getProxyTypeList()const
{
	return proxyTypeList_;
}

void ConfigLayer7RuleRequest::setProxyTypeList(const std::string& proxyTypeList)
{
	proxyTypeList_ = proxyTypeList;
	setParameter("ProxyTypeList", proxyTypeList);
}

int ConfigLayer7RuleRequest::getRsType()const
{
	return rsType_;
}

void ConfigLayer7RuleRequest::setRsType(int rsType)
{
	rsType_ = rsType;
	setParameter("RsType", std::to_string(rsType));
}

std::vector<std::string> ConfigLayer7RuleRequest::getRealServers()const
{
	return realServers_;
}

void ConfigLayer7RuleRequest::setRealServers(const std::vector<std::string>& realServers)
{
	realServers_ = realServers;
	for(int dep1 = 0; dep1!= realServers.size(); dep1++) {
		setParameter("RealServers."+ std::to_string(dep1), realServers.at(dep1));
	}
}

std::vector<std::string> ConfigLayer7RuleRequest::getProxyTypes()const
{
	return proxyTypes_;
}

void ConfigLayer7RuleRequest::setProxyTypes(const std::vector<std::string>& proxyTypes)
{
	proxyTypes_ = proxyTypes;
	for(int dep1 = 0; dep1!= proxyTypes.size(); dep1++) {
		setParameter("ProxyTypes."+ std::to_string(dep1), proxyTypes.at(dep1));
	}
}

std::vector<std::string> ConfigLayer7RuleRequest::getInstanceIds()const
{
	return instanceIds_;
}

void ConfigLayer7RuleRequest::setInstanceIds(const std::vector<std::string>& instanceIds)
{
	instanceIds_ = instanceIds;
	for(int dep1 = 0; dep1!= instanceIds.size(); dep1++) {
		setParameter("InstanceIds."+ std::to_string(dep1), instanceIds.at(dep1));
	}
}

std::string ConfigLayer7RuleRequest::getDomain()const
{
	return domain_;
}

void ConfigLayer7RuleRequest::setDomain(const std::string& domain)
{
	domain_ = domain;
	setParameter("Domain", domain);
}

