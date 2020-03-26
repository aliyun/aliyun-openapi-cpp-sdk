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

#include <alibabacloud/yundun-ds/model/ModifyDefaultLevelRequest.h>

using AlibabaCloud::Yundun_ds::Model::ModifyDefaultLevelRequest;

ModifyDefaultLevelRequest::ModifyDefaultLevelRequest() :
	RpcServiceRequest("yundun-ds", "2019-01-03", "ModifyDefaultLevel")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyDefaultLevelRequest::~ModifyDefaultLevelRequest()
{}

int ModifyDefaultLevelRequest::getFeatureType()const
{
	return featureType_;
}

void ModifyDefaultLevelRequest::setFeatureType(int featureType)
{
	featureType_ = featureType;
	setParameter("FeatureType", std::to_string(featureType));
}

long ModifyDefaultLevelRequest::getDefaultId()const
{
	return defaultId_;
}

void ModifyDefaultLevelRequest::setDefaultId(long defaultId)
{
	defaultId_ = defaultId;
	setParameter("DefaultId", std::to_string(defaultId));
}

std::string ModifyDefaultLevelRequest::getSourceIp()const
{
	return sourceIp_;
}

void ModifyDefaultLevelRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string ModifyDefaultLevelRequest::getLang()const
{
	return lang_;
}

void ModifyDefaultLevelRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string ModifyDefaultLevelRequest::getSensitiveIds()const
{
	return sensitiveIds_;
}

void ModifyDefaultLevelRequest::setSensitiveIds(const std::string& sensitiveIds)
{
	sensitiveIds_ = sensitiveIds;
	setParameter("SensitiveIds", sensitiveIds);
}

