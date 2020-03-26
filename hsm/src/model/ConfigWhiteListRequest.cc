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

#include <alibabacloud/hsm/model/ConfigWhiteListRequest.h>

using AlibabaCloud::Hsm::Model::ConfigWhiteListRequest;

ConfigWhiteListRequest::ConfigWhiteListRequest() :
	RpcServiceRequest("hsm", "2018-01-11", "ConfigWhiteList")
{
	setMethod(HttpRequest::Method::Post);
}

ConfigWhiteListRequest::~ConfigWhiteListRequest()
{}

std::string ConfigWhiteListRequest::getWhiteList()const
{
	return whiteList_;
}

void ConfigWhiteListRequest::setWhiteList(const std::string& whiteList)
{
	whiteList_ = whiteList;
	setParameter("WhiteList", whiteList);
}

std::string ConfigWhiteListRequest::getInstanceId()const
{
	return instanceId_;
}

void ConfigWhiteListRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string ConfigWhiteListRequest::getSourceIp()const
{
	return sourceIp_;
}

void ConfigWhiteListRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string ConfigWhiteListRequest::getRegionId()const
{
	return regionId_;
}

void ConfigWhiteListRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ConfigWhiteListRequest::getLang()const
{
	return lang_;
}

void ConfigWhiteListRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

