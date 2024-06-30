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

#include <alibabacloud/quotas/model/CreateQuotaApplicationsForTemplateRequest.h>

using AlibabaCloud::Quotas::Model::CreateQuotaApplicationsForTemplateRequest;

CreateQuotaApplicationsForTemplateRequest::CreateQuotaApplicationsForTemplateRequest()
    : RpcServiceRequest("quotas", "2020-05-10", "CreateQuotaApplicationsForTemplate") {
  setMethod(HttpRequest::Method::Post);
}

CreateQuotaApplicationsForTemplateRequest::~CreateQuotaApplicationsForTemplateRequest() {}

std::string CreateQuotaApplicationsForTemplateRequest::getReason() const {
  return reason_;
}

void CreateQuotaApplicationsForTemplateRequest::setReason(const std::string &reason) {
  reason_ = reason;
  setBodyParameter(std::string("Reason"), reason);
}

std::string CreateQuotaApplicationsForTemplateRequest::getProductCode() const {
  return productCode_;
}

void CreateQuotaApplicationsForTemplateRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setBodyParameter(std::string("ProductCode"), productCode);
}

std::string CreateQuotaApplicationsForTemplateRequest::getQuotaActionCode() const {
  return quotaActionCode_;
}

void CreateQuotaApplicationsForTemplateRequest::setQuotaActionCode(const std::string &quotaActionCode) {
  quotaActionCode_ = quotaActionCode;
  setBodyParameter(std::string("QuotaActionCode"), quotaActionCode);
}

double CreateQuotaApplicationsForTemplateRequest::getDesireValue() const {
  return desireValue_;
}

void CreateQuotaApplicationsForTemplateRequest::setDesireValue(double desireValue) {
  desireValue_ = desireValue;
  setBodyParameter(std::string("DesireValue"), std::to_string(desireValue));
}

std::string CreateQuotaApplicationsForTemplateRequest::getEffectiveTime() const {
  return effectiveTime_;
}

void CreateQuotaApplicationsForTemplateRequest::setEffectiveTime(const std::string &effectiveTime) {
  effectiveTime_ = effectiveTime;
  setBodyParameter(std::string("EffectiveTime"), effectiveTime);
}

std::vector<std::string> CreateQuotaApplicationsForTemplateRequest::getAliyunUids() const {
  return aliyunUids_;
}

void CreateQuotaApplicationsForTemplateRequest::setAliyunUids(const std::vector<std::string> &aliyunUids) {
  aliyunUids_ = aliyunUids;
}

std::string CreateQuotaApplicationsForTemplateRequest::getQuotaCategory() const {
  return quotaCategory_;
}

void CreateQuotaApplicationsForTemplateRequest::setQuotaCategory(const std::string &quotaCategory) {
  quotaCategory_ = quotaCategory;
  setBodyParameter(std::string("QuotaCategory"), quotaCategory);
}

std::string CreateQuotaApplicationsForTemplateRequest::getOriginalContext() const {
  return originalContext_;
}

void CreateQuotaApplicationsForTemplateRequest::setOriginalContext(const std::string &originalContext) {
  originalContext_ = originalContext;
  setBodyParameter(std::string("OriginalContext"), originalContext);
}

std::string CreateQuotaApplicationsForTemplateRequest::getExpireTime() const {
  return expireTime_;
}

void CreateQuotaApplicationsForTemplateRequest::setExpireTime(const std::string &expireTime) {
  expireTime_ = expireTime;
  setBodyParameter(std::string("ExpireTime"), expireTime);
}

std::string CreateQuotaApplicationsForTemplateRequest::getEnvLanguage() const {
  return envLanguage_;
}

void CreateQuotaApplicationsForTemplateRequest::setEnvLanguage(const std::string &envLanguage) {
  envLanguage_ = envLanguage;
  setBodyParameter(std::string("EnvLanguage"), envLanguage);
}

int CreateQuotaApplicationsForTemplateRequest::getNoticeType() const {
  return noticeType_;
}

void CreateQuotaApplicationsForTemplateRequest::setNoticeType(int noticeType) {
  noticeType_ = noticeType;
  setBodyParameter(std::string("NoticeType"), std::to_string(noticeType));
}

std::vector<CreateQuotaApplicationsForTemplateRequest::Dimensions> CreateQuotaApplicationsForTemplateRequest::getDimensions() const {
  return dimensions_;
}

void CreateQuotaApplicationsForTemplateRequest::setDimensions(const std::vector<CreateQuotaApplicationsForTemplateRequest::Dimensions> &dimensions) {
  dimensions_ = dimensions;
  for(int dep1 = 0; dep1 != dimensions.size(); dep1++) {
  auto dimensionsObj = dimensions.at(dep1);
  std::string dimensionsObjStr = std::string("Dimensions") + "." + std::to_string(dep1 + 1);
    setBodyParameter(dimensionsObjStr + ".Key", dimensionsObj.key);
    setBodyParameter(dimensionsObjStr + ".Value", dimensionsObj.value);
  }
}

