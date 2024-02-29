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

#include <alibabacloud/sddp/model/ModifyRuleRequest.h>

using AlibabaCloud::Sddp::Model::ModifyRuleRequest;

ModifyRuleRequest::ModifyRuleRequest()
    : RpcServiceRequest("sddp", "2019-01-03", "ModifyRule") {
  setMethod(HttpRequest::Method::Post);
}

ModifyRuleRequest::~ModifyRuleRequest() {}

int ModifyRuleRequest::getWarnLevel() const {
  return warnLevel_;
}

void ModifyRuleRequest::setWarnLevel(int warnLevel) {
  warnLevel_ = warnLevel;
  setParameter(std::string("WarnLevel"), std::to_string(warnLevel));
}

std::string ModifyRuleRequest::getProductCode() const {
  return productCode_;
}

void ModifyRuleRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setParameter(std::string("ProductCode"), productCode);
}

long ModifyRuleRequest::getProductId() const {
  return productId_;
}

void ModifyRuleRequest::setProductId(long productId) {
  productId_ = productId;
  setParameter(std::string("ProductId"), std::to_string(productId));
}

std::string ModifyRuleRequest::getDescription() const {
  return description_;
}

void ModifyRuleRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

long ModifyRuleRequest::getRiskLevelId() const {
  return riskLevelId_;
}

void ModifyRuleRequest::setRiskLevelId(long riskLevelId) {
  riskLevelId_ = riskLevelId;
  setParameter(std::string("RiskLevelId"), std::to_string(riskLevelId));
}

std::string ModifyRuleRequest::getContent() const {
  return content_;
}

void ModifyRuleRequest::setContent(const std::string &content) {
  content_ = content;
  setParameter(std::string("Content"), content);
}

std::string ModifyRuleRequest::getSourceIp() const {
  return sourceIp_;
}

void ModifyRuleRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int ModifyRuleRequest::getMatchType() const {
  return matchType_;
}

void ModifyRuleRequest::setMatchType(int matchType) {
  matchType_ = matchType;
  setParameter(std::string("MatchType"), std::to_string(matchType));
}

long ModifyRuleRequest::getId() const {
  return id_;
}

void ModifyRuleRequest::setId(long id) {
  id_ = id;
  setParameter(std::string("Id"), std::to_string(id));
}

std::string ModifyRuleRequest::getLang() const {
  return lang_;
}

void ModifyRuleRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

int ModifyRuleRequest::getSupportForm() const {
  return supportForm_;
}

void ModifyRuleRequest::setSupportForm(int supportForm) {
  supportForm_ = supportForm;
  setParameter(std::string("SupportForm"), std::to_string(supportForm));
}

int ModifyRuleRequest::getFeatureType() const {
  return featureType_;
}

void ModifyRuleRequest::setFeatureType(int featureType) {
  featureType_ = featureType;
  setParameter(std::string("FeatureType"), std::to_string(featureType));
}

int ModifyRuleRequest::getRuleType() const {
  return ruleType_;
}

void ModifyRuleRequest::setRuleType(int ruleType) {
  ruleType_ = ruleType;
  setParameter(std::string("RuleType"), std::to_string(ruleType));
}

std::string ModifyRuleRequest::getStatExpress() const {
  return statExpress_;
}

void ModifyRuleRequest::setStatExpress(const std::string &statExpress) {
  statExpress_ = statExpress;
  setParameter(std::string("StatExpress"), statExpress);
}

int ModifyRuleRequest::getContentCategory() const {
  return contentCategory_;
}

void ModifyRuleRequest::setContentCategory(int contentCategory) {
  contentCategory_ = contentCategory;
  setParameter(std::string("ContentCategory"), std::to_string(contentCategory));
}

int ModifyRuleRequest::getCustomType() const {
  return customType_;
}

void ModifyRuleRequest::setCustomType(int customType) {
  customType_ = customType;
  setParameter(std::string("CustomType"), std::to_string(customType));
}

std::string ModifyRuleRequest::getTarget() const {
  return target_;
}

void ModifyRuleRequest::setTarget(const std::string &target) {
  target_ = target;
  setParameter(std::string("Target"), target);
}

std::string ModifyRuleRequest::getName() const {
  return name_;
}

void ModifyRuleRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

int ModifyRuleRequest::getCategory() const {
  return category_;
}

void ModifyRuleRequest::setCategory(int category) {
  category_ = category;
  setParameter(std::string("Category"), std::to_string(category));
}

