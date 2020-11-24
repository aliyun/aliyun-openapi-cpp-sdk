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

#include <alibabacloud/ddoscoo/model/ConfigWebIpSetRequest.h>

using AlibabaCloud::Ddoscoo::Model::ConfigWebIpSetRequest;

ConfigWebIpSetRequest::ConfigWebIpSetRequest() :
	RpcServiceRequest("ddoscoo", "2020-01-01", "ConfigWebIpSet")
{
	setMethod(HttpRequest::Method::Post);
}

ConfigWebIpSetRequest::~ConfigWebIpSetRequest()
{}

std::vector<std::string> ConfigWebIpSetRequest::getBlackList()const
{
	return blackList_;
}

void ConfigWebIpSetRequest::setBlackList(const std::vector<std::string>& blackList)
{
	blackList_ = blackList;
	for(int dep1 = 0; dep1!= blackList.size(); dep1++) {
		setParameter("BlackList."+ std::to_string(dep1), blackList.at(dep1));
	}
}

std::vector<std::string> ConfigWebIpSetRequest::getWhiteList()const
{
	return whiteList_;
}

void ConfigWebIpSetRequest::setWhiteList(const std::vector<std::string>& whiteList)
{
	whiteList_ = whiteList;
	for(int dep1 = 0; dep1!= whiteList.size(); dep1++) {
		setParameter("WhiteList."+ std::to_string(dep1), whiteList.at(dep1));
	}
}

std::string ConfigWebIpSetRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void ConfigWebIpSetRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string ConfigWebIpSetRequest::getSourceIp()const
{
	return sourceIp_;
}

void ConfigWebIpSetRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string ConfigWebIpSetRequest::getDomain()const
{
	return domain_;
}

void ConfigWebIpSetRequest::setDomain(const std::string& domain)
{
	domain_ = domain;
	setParameter("Domain", domain);
}

