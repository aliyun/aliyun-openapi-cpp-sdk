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

#include <alibabacloud/yundun-ds/model/ModifyRuleRequest.h>

using AlibabaCloud::Yundun_ds::Model::ModifyRuleRequest;

ModifyRuleRequest::ModifyRuleRequest() :
	RpcServiceRequest("yundun-ds", "2019-01-03", "ModifyRule")
{}

ModifyRuleRequest::~ModifyRuleRequest()
{}

std::string ModifyRuleRequest::getSourceIp()const
{
	return sourceIp_;
}

void ModifyRuleRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", std::to_string(sourceIp));
}

int ModifyRuleRequest::getFeatureType()const
{
	return featureType_;
}

void ModifyRuleRequest::setFeatureType(int featureType)
{
	featureType_ = featureType;
	setCoreParameter("FeatureType", featureType);
}

std::string ModifyRuleRequest::getName()const
{
	return name_;
}

void ModifyRuleRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", std::to_string(name));
}

long ModifyRuleRequest::getId()const
{
	return id_;
}

void ModifyRuleRequest::setId(long id)
{
	id_ = id;
	setCoreParameter("Id", id);
}

long ModifyRuleRequest::getRiskLevelId()const
{
	return riskLevelId_;
}

void ModifyRuleRequest::setRiskLevelId(long riskLevelId)
{
	riskLevelId_ = riskLevelId;
	setCoreParameter("RiskLevelId", riskLevelId);
}

std::string ModifyRuleRequest::getLang()const
{
	return lang_;
}

void ModifyRuleRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", std::to_string(lang));
}

int ModifyRuleRequest::getCustomType()const
{
	return customType_;
}

void ModifyRuleRequest::setCustomType(int customType)
{
	customType_ = customType;
	setCoreParameter("CustomType", customType);
}

int ModifyRuleRequest::getCategory()const
{
	return category_;
}

void ModifyRuleRequest::setCategory(int category)
{
	category_ = category;
	setCoreParameter("Category", category);
}

std::string ModifyRuleRequest::getContent()const
{
	return content_;
}

void ModifyRuleRequest::setContent(const std::string& content)
{
	content_ = content;
	setCoreParameter("Content", std::to_string(content));
}

