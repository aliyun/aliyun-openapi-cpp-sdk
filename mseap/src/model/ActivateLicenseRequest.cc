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

#include <alibabacloud/mseap/model/ActivateLicenseRequest.h>

using AlibabaCloud::Mseap::Model::ActivateLicenseRequest;

ActivateLicenseRequest::ActivateLicenseRequest()
    : RpcServiceRequest("mseap", "2021-01-18", "ActivateLicense") {
  setMethod(HttpRequest::Method::Post);
}

ActivateLicenseRequest::~ActivateLicenseRequest() {}

std::string ActivateLicenseRequest::getLicenseNo() const {
  return licenseNo_;
}

void ActivateLicenseRequest::setLicenseNo(const std::string &licenseNo) {
  licenseNo_ = licenseNo;
  setParameter(std::string("LicenseNo"), licenseNo);
}

std::string ActivateLicenseRequest::getBizType() const {
  return bizType_;
}

void ActivateLicenseRequest::setBizType(const std::string &bizType) {
  bizType_ = bizType;
  setParameter(std::string("BizType"), bizType);
}

std::string ActivateLicenseRequest::getLicensePublisher() const {
  return licensePublisher_;
}

void ActivateLicenseRequest::setLicensePublisher(const std::string &licensePublisher) {
  licensePublisher_ = licensePublisher;
  setParameter(std::string("LicensePublisher"), licensePublisher);
}

std::string ActivateLicenseRequest::getBizId() const {
  return bizId_;
}

void ActivateLicenseRequest::setBizId(const std::string &bizId) {
  bizId_ = bizId;
  setParameter(std::string("BizId"), bizId);
}

std::string ActivateLicenseRequest::getLicenseCode() const {
  return licenseCode_;
}

void ActivateLicenseRequest::setLicenseCode(const std::string &licenseCode) {
  licenseCode_ = licenseCode;
  setParameter(std::string("LicenseCode"), licenseCode);
}

