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

#include <alibabacloud/alidns/model/PreviewGtmRecoveryPlanRequest.h>

using AlibabaCloud::Alidns::Model::PreviewGtmRecoveryPlanRequest;

PreviewGtmRecoveryPlanRequest::PreviewGtmRecoveryPlanRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "PreviewGtmRecoveryPlan") {
  setMethod(HttpRequest::Method::Post);
}

PreviewGtmRecoveryPlanRequest::~PreviewGtmRecoveryPlanRequest() {}

int PreviewGtmRecoveryPlanRequest::getPageNumber() const {
  return pageNumber_;
}

void PreviewGtmRecoveryPlanRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string PreviewGtmRecoveryPlanRequest::getUserClientIp() const {
  return userClientIp_;
}

void PreviewGtmRecoveryPlanRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

int PreviewGtmRecoveryPlanRequest::getPageSize() const {
  return pageSize_;
}

void PreviewGtmRecoveryPlanRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

long PreviewGtmRecoveryPlanRequest::getRecoveryPlanId() const {
  return recoveryPlanId_;
}

void PreviewGtmRecoveryPlanRequest::setRecoveryPlanId(long recoveryPlanId) {
  recoveryPlanId_ = recoveryPlanId;
  setParameter(std::string("RecoveryPlanId"), std::to_string(recoveryPlanId));
}

std::string PreviewGtmRecoveryPlanRequest::getLang() const {
  return lang_;
}

void PreviewGtmRecoveryPlanRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

