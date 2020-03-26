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

#include <alibabacloud/sddp/model/CreateRuleRequest.h>

using AlibabaCloud::Sddp::Model::CreateRuleRequest;

CreateRuleRequest::CreateRuleRequest() :
	RpcServiceRequest("sddp", "2019-01-03", "CreateRule")
{
	setMethod(HttpRequest::Method::Post);
}

CreateRuleRequest::~CreateRuleRequest()
{}

int CreateRuleRequest::getWarnLevel()const
{
	return warnLevel_;
}

void CreateRuleRequest::setWarnLevel(int warnLevel)
{
	warnLevel_ = warnLevel;
	setParameter("WarnLevel", std::to_string(warnLevel));
}

std::string CreateRuleRequest::getProductCode()const
{
	return productCode_;
}

void CreateRuleRequest::setProductCode(const std::string& productCode)
{
	productCode_ = productCode;
	setParameter("ProductCode", productCode);
}

long CreateRuleRequest::getProductId()const
{
	return productId_;
}

void CreateRuleRequest::setProductId(long productId)
{
	productId_ = productId;
	setParameter("ProductId", std::to_string(productId));
}

long CreateRuleRequest::getRiskLevelId()const
{
	return riskLevelId_;
}

void CreateRuleRequest::setRiskLevelId(long riskLevelId)
{
	riskLevelId_ = riskLevelId;
	setParameter("RiskLevelId", std::to_string(riskLevelId));
}

std::string CreateRuleRequest::getContent()const
{
	return content_;
}

void CreateRuleRequest::setContent(const std::string& content)
{
	content_ = content;
	setParameter("Content", content);
}

std::string CreateRuleRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateRuleRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string CreateRuleRequest::getLang()const
{
	return lang_;
}

void CreateRuleRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

int CreateRuleRequest::getFeatureType()const
{
	return featureType_;
}

void CreateRuleRequest::setFeatureType(int featureType)
{
	featureType_ = featureType;
	setParameter("FeatureType", std::to_string(featureType));
}

int CreateRuleRequest::getRuleType()const
{
	return ruleType_;
}

void CreateRuleRequest::setRuleType(int ruleType)
{
	ruleType_ = ruleType;
	setParameter("RuleType", std::to_string(ruleType));
}

std::string CreateRuleRequest::getStatExpress()const
{
	return statExpress_;
}

void CreateRuleRequest::setStatExpress(const std::string& statExpress)
{
	statExpress_ = statExpress;
	setParameter("StatExpress", statExpress);
}

long CreateRuleRequest::getCustomType()const
{
	return customType_;
}

void CreateRuleRequest::setCustomType(long customType)
{
	customType_ = customType;
	setParameter("CustomType", std::to_string(customType));
}

std::string CreateRuleRequest::getName()const
{
	return name_;
}

void CreateRuleRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

int CreateRuleRequest::getCategory()const
{
	return category_;
}

void CreateRuleRequest::setCategory(int category)
{
	category_ = category;
	setParameter("Category", std::to_string(category));
}

