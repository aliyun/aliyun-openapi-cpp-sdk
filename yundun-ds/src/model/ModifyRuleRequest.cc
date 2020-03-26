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
{
	setMethod(HttpRequest::Method::Post);
}

ModifyRuleRequest::~ModifyRuleRequest()
{}

long ModifyRuleRequest::getRiskLevelId()const
{
	return riskLevelId_;
}

void ModifyRuleRequest::setRiskLevelId(long riskLevelId)
{
	riskLevelId_ = riskLevelId;
	setParameter("RiskLevelId", std::to_string(riskLevelId));
}

std::string ModifyRuleRequest::getContent()const
{
	return content_;
}

void ModifyRuleRequest::setContent(const std::string& content)
{
	content_ = content;
	setParameter("Content", content);
}

std::string ModifyRuleRequest::getSourceIp()const
{
	return sourceIp_;
}

void ModifyRuleRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

long ModifyRuleRequest::getId()const
{
	return id_;
}

void ModifyRuleRequest::setId(long id)
{
	id_ = id;
	setParameter("Id", std::to_string(id));
}

std::string ModifyRuleRequest::getLang()const
{
	return lang_;
}

void ModifyRuleRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

int ModifyRuleRequest::getFeatureType()const
{
	return featureType_;
}

void ModifyRuleRequest::setFeatureType(int featureType)
{
	featureType_ = featureType;
	setParameter("FeatureType", std::to_string(featureType));
}

int ModifyRuleRequest::getCustomType()const
{
	return customType_;
}

void ModifyRuleRequest::setCustomType(int customType)
{
	customType_ = customType;
	setParameter("CustomType", std::to_string(customType));
}

std::string ModifyRuleRequest::getName()const
{
	return name_;
}

void ModifyRuleRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

int ModifyRuleRequest::getCategory()const
{
	return category_;
}

void ModifyRuleRequest::setCategory(int category)
{
	category_ = category;
	setParameter("Category", std::to_string(category));
}

