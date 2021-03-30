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

#include <alibabacloud/green/model/UpdateBizTypeSettingRequest.h>

using AlibabaCloud::Green::Model::UpdateBizTypeSettingRequest;

UpdateBizTypeSettingRequest::UpdateBizTypeSettingRequest() :
	RpcServiceRequest("green", "2017-08-23", "UpdateBizTypeSetting")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateBizTypeSettingRequest::~UpdateBizTypeSettingRequest()
{}

std::string UpdateBizTypeSettingRequest::getAntispam()const
{
	return antispam_;
}

void UpdateBizTypeSettingRequest::setAntispam(const std::string& antispam)
{
	antispam_ = antispam;
	setParameter("Antispam", antispam);
}

std::string UpdateBizTypeSettingRequest::getPorn()const
{
	return porn_;
}

void UpdateBizTypeSettingRequest::setPorn(const std::string& porn)
{
	porn_ = porn;
	setParameter("Porn", porn);
}

std::string UpdateBizTypeSettingRequest::getSourceIp()const
{
	return sourceIp_;
}

void UpdateBizTypeSettingRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string UpdateBizTypeSettingRequest::getTerrorism()const
{
	return terrorism_;
}

void UpdateBizTypeSettingRequest::setTerrorism(const std::string& terrorism)
{
	terrorism_ = terrorism;
	setParameter("Terrorism", terrorism);
}

std::string UpdateBizTypeSettingRequest::getBizTypeName()const
{
	return bizTypeName_;
}

void UpdateBizTypeSettingRequest::setBizTypeName(const std::string& bizTypeName)
{
	bizTypeName_ = bizTypeName;
	setParameter("BizTypeName", bizTypeName);
}

std::string UpdateBizTypeSettingRequest::getLive()const
{
	return live_;
}

void UpdateBizTypeSettingRequest::setLive(const std::string& live)
{
	live_ = live;
	setParameter("Live", live);
}

std::string UpdateBizTypeSettingRequest::getAd()const
{
	return ad_;
}

void UpdateBizTypeSettingRequest::setAd(const std::string& ad)
{
	ad_ = ad;
	setParameter("Ad", ad);
}

std::string UpdateBizTypeSettingRequest::getResourceType()const
{
	return resourceType_;
}

void UpdateBizTypeSettingRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setParameter("ResourceType", resourceType);
}

