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

#include <alibabacloud/quotas/model/CreateQuotaApplicationRequest.h>

using AlibabaCloud::Quotas::Model::CreateQuotaApplicationRequest;

CreateQuotaApplicationRequest::CreateQuotaApplicationRequest()
    : RpcServiceRequest("quotas", "2020-05-10", "CreateQuotaApplication") {
  setMethod(HttpRequest::Method::Post);
}

CreateQuotaApplicationRequest::~CreateQuotaApplicationRequest() {}

std::string CreateQuotaApplicationRequest::getReason() const {
  return reason_;
}

void CreateQuotaApplicationRequest::setReason(const std::string &reason) {
  reason_ = reason;
  setBodyParameter(std::string("Reason"), reason);
}

std::string CreateQuotaApplicationRequest::getProductCode() const {
  return productCode_;
}

void CreateQuotaApplicationRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setBodyParameter(std::string("ProductCode"), productCode);
}

std::string CreateQuotaApplicationRequest::getQuotaActionCode() const {
  return quotaActionCode_;
}

void CreateQuotaApplicationRequest::setQuotaActionCode(const std::string &quotaActionCode) {
  quotaActionCode_ = quotaActionCode;
  setBodyParameter(std::string("QuotaActionCode"), quotaActionCode);
}

float CreateQuotaApplicationRequest::getDesireValue() const {
  return desireValue_;
}

void CreateQuotaApplicationRequest::setDesireValue(float desireValue) {
  desireValue_ = desireValue;
  setBodyParameter(std::string("DesireValue"), std::to_string(desireValue));
}

std::string CreateQuotaApplicationRequest::getEffectiveTime() const {
  return effectiveTime_;
}

void CreateQuotaApplicationRequest::setEffectiveTime(const std::string &effectiveTime) {
  effectiveTime_ = effectiveTime;
  setBodyParameter(std::string("EffectiveTime"), effectiveTime);
}

std::string CreateQuotaApplicationRequest::getQuotaCategory() const {
  return quotaCategory_;
}

void CreateQuotaApplicationRequest::setQuotaCategory(const std::string &quotaCategory) {
  quotaCategory_ = quotaCategory;
  setBodyParameter(std::string("QuotaCategory"), quotaCategory);
}

std::string CreateQuotaApplicationRequest::getOriginalContext() const {
  return originalContext_;
}

void CreateQuotaApplicationRequest::setOriginalContext(const std::string &originalContext) {
  originalContext_ = originalContext;
  setBodyParameter(std::string("OriginalContext"), originalContext);
}

std::string CreateQuotaApplicationRequest::getExpireTime() const {
  return expireTime_;
}

void CreateQuotaApplicationRequest::setExpireTime(const std::string &expireTime) {
  expireTime_ = expireTime;
  setBodyParameter(std::string("ExpireTime"), expireTime);
}

std::string CreateQuotaApplicationRequest::getEnvLanguage() const {
  return envLanguage_;
}

void CreateQuotaApplicationRequest::setEnvLanguage(const std::string &envLanguage) {
  envLanguage_ = envLanguage;
  setBodyParameter(std::string("EnvLanguage"), envLanguage);
}

int CreateQuotaApplicationRequest::getNoticeType() const {
  return noticeType_;
}

void CreateQuotaApplicationRequest::setNoticeType(int noticeType) {
  noticeType_ = noticeType;
  setBodyParameter(std::string("NoticeType"), std::to_string(noticeType));
}

std::string CreateQuotaApplicationRequest::getAuditMode() const {
  return auditMode_;
}

void CreateQuotaApplicationRequest::setAuditMode(const std::string &auditMode) {
  auditMode_ = auditMode;
  setBodyParameter(std::string("AuditMode"), auditMode);
}

std::vector<CreateQuotaApplicationRequest::Dimensions> CreateQuotaApplicationRequest::getDimensions() const {
  return dimensions_;
}

void CreateQuotaApplicationRequest::setDimensions(const std::vector<CreateQuotaApplicationRequest::Dimensions> &dimensions) {
  dimensions_ = dimensions;
  for(int dep1 = 0; dep1 != dimensions.size(); dep1++) {
  auto dimensionsObj = dimensions.at(dep1);
  std::string dimensionsObjStr = std::string("Dimensions") + "." + std::to_string(dep1 + 1);
    setBodyParameter(dimensionsObjStr + ".Key", dimensionsObj.key);
    setBodyParameter(dimensionsObjStr + ".Value", dimensionsObj.value);
  }
}

