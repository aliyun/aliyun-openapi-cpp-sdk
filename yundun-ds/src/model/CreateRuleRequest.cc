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

#include <alibabacloud/yundun-ds/model/CreateRuleRequest.h>

using AlibabaCloud::Yundun_ds::Model::CreateRuleRequest;

CreateRuleRequest::CreateRuleRequest() :
	RpcServiceRequest("yundun-ds", "2019-01-03", "CreateRule")
{}

CreateRuleRequest::~CreateRuleRequest()
{}

std::string CreateRuleRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateRuleRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

int CreateRuleRequest::getFeatureType()const
{
	return featureType_;
}

void CreateRuleRequest::setFeatureType(int featureType)
{
	featureType_ = featureType;
	setCoreParameter("FeatureType", std::to_string(featureType));
}

std::string CreateRuleRequest::getName()const
{
	return name_;
}

void CreateRuleRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

long CreateRuleRequest::getRiskLevelId()const
{
	return riskLevelId_;
}

void CreateRuleRequest::setRiskLevelId(long riskLevelId)
{
	riskLevelId_ = riskLevelId;
	setCoreParameter("RiskLevelId", std::to_string(riskLevelId));
}

std::string CreateRuleRequest::getLang()const
{
	return lang_;
}

void CreateRuleRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

long CreateRuleRequest::getCustomType()const
{
	return customType_;
}

void CreateRuleRequest::setCustomType(long customType)
{
	customType_ = customType;
	setCoreParameter("CustomType", std::to_string(customType));
}

int CreateRuleRequest::getCategory()const
{
	return category_;
}

void CreateRuleRequest::setCategory(int category)
{
	category_ = category;
	setCoreParameter("Category", std::to_string(category));
}

std::string CreateRuleRequest::getContent()const
{
	return content_;
}

void CreateRuleRequest::setContent(const std::string& content)
{
	content_ = content;
	setCoreParameter("Content", content);
}

