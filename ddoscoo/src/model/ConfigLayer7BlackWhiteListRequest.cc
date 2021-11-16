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

#include <alibabacloud/ddoscoo/model/ConfigLayer7BlackWhiteListRequest.h>

using AlibabaCloud::Ddoscoo::Model::ConfigLayer7BlackWhiteListRequest;

ConfigLayer7BlackWhiteListRequest::ConfigLayer7BlackWhiteListRequest() :
	RpcServiceRequest("ddoscoo", "2017-12-28", "ConfigLayer7BlackWhiteList")
{
	setMethod(HttpRequest::Method::Post);
}

ConfigLayer7BlackWhiteListRequest::~ConfigLayer7BlackWhiteListRequest()
{}

std::vector<std::string> ConfigLayer7BlackWhiteListRequest::getBlackList()const
{
	return blackList_;
}

void ConfigLayer7BlackWhiteListRequest::setBlackList(const std::vector<std::string>& blackList)
{
	blackList_ = blackList;
	for(int dep1 = 0; dep1!= blackList.size(); dep1++) {
		setParameter("BlackList."+ std::to_string(dep1), blackList.at(dep1));
	}
}

std::vector<std::string> ConfigLayer7BlackWhiteListRequest::getWhiteList()const
{
	return whiteList_;
}

void ConfigLayer7BlackWhiteListRequest::setWhiteList(const std::vector<std::string>& whiteList)
{
	whiteList_ = whiteList;
	for(int dep1 = 0; dep1!= whiteList.size(); dep1++) {
		setParameter("WhiteList."+ std::to_string(dep1), whiteList.at(dep1));
	}
}

std::string ConfigLayer7BlackWhiteListRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void ConfigLayer7BlackWhiteListRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string ConfigLayer7BlackWhiteListRequest::getSourceIp()const
{
	return sourceIp_;
}

void ConfigLayer7BlackWhiteListRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string ConfigLayer7BlackWhiteListRequest::getDomain()const
{
	return domain_;
}

void ConfigLayer7BlackWhiteListRequest::setDomain(const std::string& domain)
{
	domain_ = domain;
	setParameter("Domain", domain);
}

