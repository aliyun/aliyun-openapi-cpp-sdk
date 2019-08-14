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

#include <alibabacloud/sddp/model/CreateConfigRequest.h>

using AlibabaCloud::Sddp::Model::CreateConfigRequest;

CreateConfigRequest::CreateConfigRequest() :
	RpcServiceRequest("sddp", "2019-01-03", "CreateConfig")
{}

CreateConfigRequest::~CreateConfigRequest()
{}

std::string CreateConfigRequest::getCode()const
{
	return code_;
}

void CreateConfigRequest::setCode(const std::string& code)
{
	code_ = code;
	setCoreParameter("Code", code);
}

std::string CreateConfigRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateConfigRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

int CreateConfigRequest::getFeatureType()const
{
	return featureType_;
}

void CreateConfigRequest::setFeatureType(int featureType)
{
	featureType_ = featureType;
	setCoreParameter("FeatureType", std::to_string(featureType));
}

std::string CreateConfigRequest::getDescription()const
{
	return description_;
}

void CreateConfigRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string CreateConfigRequest::getConfigList()const
{
	return configList_;
}

void CreateConfigRequest::setConfigList(const std::string& configList)
{
	configList_ = configList;
	setCoreParameter("ConfigList", configList);
}

std::string CreateConfigRequest::getLang()const
{
	return lang_;
}

void CreateConfigRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

std::string CreateConfigRequest::getValue()const
{
	return value_;
}

void CreateConfigRequest::setValue(const std::string& value)
{
	value_ = value;
	setCoreParameter("Value", value);
}

