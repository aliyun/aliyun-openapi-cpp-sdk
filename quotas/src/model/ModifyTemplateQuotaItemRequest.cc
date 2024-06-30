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

#include <alibabacloud/quotas/model/ModifyTemplateQuotaItemRequest.h>

using AlibabaCloud::Quotas::Model::ModifyTemplateQuotaItemRequest;

ModifyTemplateQuotaItemRequest::ModifyTemplateQuotaItemRequest()
    : RpcServiceRequest("quotas", "2020-05-10", "ModifyTemplateQuotaItem") {
  setMethod(HttpRequest::Method::Post);
}

ModifyTemplateQuotaItemRequest::~ModifyTemplateQuotaItemRequest() {}

std::string ModifyTemplateQuotaItemRequest::getProductCode() const {
  return productCode_;
}

void ModifyTemplateQuotaItemRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setBodyParameter(std::string("ProductCode"), productCode);
}

std::string ModifyTemplateQuotaItemRequest::getQuotaActionCode() const {
  return quotaActionCode_;
}

void ModifyTemplateQuotaItemRequest::setQuotaActionCode(const std::string &quotaActionCode) {
  quotaActionCode_ = quotaActionCode;
  setBodyParameter(std::string("QuotaActionCode"), quotaActionCode);
}

float ModifyTemplateQuotaItemRequest::getDesireValue() const {
  return desireValue_;
}

void ModifyTemplateQuotaItemRequest::setDesireValue(float desireValue) {
  desireValue_ = desireValue;
  setBodyParameter(std::string("DesireValue"), std::to_string(desireValue));
}

std::string ModifyTemplateQuotaItemRequest::getEffectiveTime() const {
  return effectiveTime_;
}

void ModifyTemplateQuotaItemRequest::setEffectiveTime(const std::string &effectiveTime) {
  effectiveTime_ = effectiveTime;
  setBodyParameter(std::string("EffectiveTime"), effectiveTime);
}

std::string ModifyTemplateQuotaItemRequest::getId() const {
  return id_;
}

void ModifyTemplateQuotaItemRequest::setId(const std::string &id) {
  id_ = id;
  setBodyParameter(std::string("Id"), id);
}

std::string ModifyTemplateQuotaItemRequest::getQuotaCategory() const {
  return quotaCategory_;
}

void ModifyTemplateQuotaItemRequest::setQuotaCategory(const std::string &quotaCategory) {
  quotaCategory_ = quotaCategory;
  setParameter(std::string("QuotaCategory"), quotaCategory);
}

std::string ModifyTemplateQuotaItemRequest::getOriginalContext() const {
  return originalContext_;
}

void ModifyTemplateQuotaItemRequest::setOriginalContext(const std::string &originalContext) {
  originalContext_ = originalContext;
  setBodyParameter(std::string("OriginalContext"), originalContext);
}

std::string ModifyTemplateQuotaItemRequest::getExpireTime() const {
  return expireTime_;
}

void ModifyTemplateQuotaItemRequest::setExpireTime(const std::string &expireTime) {
  expireTime_ = expireTime;
  setBodyParameter(std::string("ExpireTime"), expireTime);
}

std::string ModifyTemplateQuotaItemRequest::getEnvLanguage() const {
  return envLanguage_;
}

void ModifyTemplateQuotaItemRequest::setEnvLanguage(const std::string &envLanguage) {
  envLanguage_ = envLanguage;
  setBodyParameter(std::string("EnvLanguage"), envLanguage);
}

long ModifyTemplateQuotaItemRequest::getNoticeType() const {
  return noticeType_;
}

void ModifyTemplateQuotaItemRequest::setNoticeType(long noticeType) {
  noticeType_ = noticeType;
  setBodyParameter(std::string("NoticeType"), std::to_string(noticeType));
}

std::vector<ModifyTemplateQuotaItemRequest::Dimensions> ModifyTemplateQuotaItemRequest::getDimensions() const {
  return dimensions_;
}

void ModifyTemplateQuotaItemRequest::setDimensions(const std::vector<ModifyTemplateQuotaItemRequest::Dimensions> &dimensions) {
  dimensions_ = dimensions;
  for(int dep1 = 0; dep1 != dimensions.size(); dep1++) {
  auto dimensionsObj = dimensions.at(dep1);
  std::string dimensionsObjStr = std::string("Dimensions") + "." + std::to_string(dep1 + 1);
    setBodyParameter(dimensionsObjStr + ".Key", dimensionsObj.key);
    setBodyParameter(dimensionsObjStr + ".Value", dimensionsObj.value);
  }
}

