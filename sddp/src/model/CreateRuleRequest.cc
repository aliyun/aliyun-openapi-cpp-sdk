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

CreateRuleRequest::CreateRuleRequest()
    : RpcServiceRequest("sddp", "2019-01-03", "CreateRule") {
  setMethod(HttpRequest::Method::Post);
}

CreateRuleRequest::~CreateRuleRequest() {}

int CreateRuleRequest::getWarnLevel() const {
  return warnLevel_;
}

void CreateRuleRequest::setWarnLevel(int warnLevel) {
  warnLevel_ = warnLevel;
  setParameter(std::string("WarnLevel"), std::to_string(warnLevel));
}

std::string CreateRuleRequest::getProductCode() const {
  return productCode_;
}

void CreateRuleRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setParameter(std::string("ProductCode"), productCode);
}

long CreateRuleRequest::getProductId() const {
  return productId_;
}

void CreateRuleRequest::setProductId(long productId) {
  productId_ = productId;
  setParameter(std::string("ProductId"), std::to_string(productId));
}

std::string CreateRuleRequest::getDescription() const {
  return description_;
}

void CreateRuleRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

long CreateRuleRequest::getRiskLevelId() const {
  return riskLevelId_;
}

void CreateRuleRequest::setRiskLevelId(long riskLevelId) {
  riskLevelId_ = riskLevelId;
  setParameter(std::string("RiskLevelId"), std::to_string(riskLevelId));
}

std::string CreateRuleRequest::getContent() const {
  return content_;
}

void CreateRuleRequest::setContent(const std::string &content) {
  content_ = content;
  setParameter(std::string("Content"), content);
}

std::string CreateRuleRequest::getSourceIp() const {
  return sourceIp_;
}

void CreateRuleRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int CreateRuleRequest::getMatchType() const {
  return matchType_;
}

void CreateRuleRequest::setMatchType(int matchType) {
  matchType_ = matchType;
  setParameter(std::string("MatchType"), std::to_string(matchType));
}

std::string CreateRuleRequest::getLang() const {
  return lang_;
}

void CreateRuleRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

int CreateRuleRequest::getSupportForm() const {
  return supportForm_;
}

void CreateRuleRequest::setSupportForm(int supportForm) {
  supportForm_ = supportForm;
  setParameter(std::string("SupportForm"), std::to_string(supportForm));
}

int CreateRuleRequest::getFeatureType() const {
  return featureType_;
}

void CreateRuleRequest::setFeatureType(int featureType) {
  featureType_ = featureType;
  setParameter(std::string("FeatureType"), std::to_string(featureType));
}

int CreateRuleRequest::getRuleType() const {
  return ruleType_;
}

void CreateRuleRequest::setRuleType(int ruleType) {
  ruleType_ = ruleType;
  setParameter(std::string("RuleType"), std::to_string(ruleType));
}

std::string CreateRuleRequest::getStatExpress() const {
  return statExpress_;
}

void CreateRuleRequest::setStatExpress(const std::string &statExpress) {
  statExpress_ = statExpress;
  setParameter(std::string("StatExpress"), statExpress);
}

int CreateRuleRequest::getContentCategory() const {
  return contentCategory_;
}

void CreateRuleRequest::setContentCategory(int contentCategory) {
  contentCategory_ = contentCategory;
  setParameter(std::string("ContentCategory"), std::to_string(contentCategory));
}

long CreateRuleRequest::getCustomType() const {
  return customType_;
}

void CreateRuleRequest::setCustomType(long customType) {
  customType_ = customType;
  setParameter(std::string("CustomType"), std::to_string(customType));
}

std::string CreateRuleRequest::getTarget() const {
  return target_;
}

void CreateRuleRequest::setTarget(const std::string &target) {
  target_ = target;
  setParameter(std::string("Target"), target);
}

std::string CreateRuleRequest::getName() const {
  return name_;
}

void CreateRuleRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

int CreateRuleRequest::getCategory() const {
  return category_;
}

void CreateRuleRequest::setCategory(int category) {
  category_ = category;
  setParameter(std::string("Category"), std::to_string(category));
}

int CreateRuleRequest::getStatus() const {
  return status_;
}

void CreateRuleRequest::setStatus(int status) {
  status_ = status;
  setParameter(std::string("Status"), std::to_string(status));
}

