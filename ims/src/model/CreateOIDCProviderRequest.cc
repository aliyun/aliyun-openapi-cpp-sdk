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

#include <alibabacloud/ims/model/CreateOIDCProviderRequest.h>

using AlibabaCloud::Ims::Model::CreateOIDCProviderRequest;

CreateOIDCProviderRequest::CreateOIDCProviderRequest()
    : RpcServiceRequest("ims", "2019-08-15", "CreateOIDCProvider") {
  setMethod(HttpRequest::Method::Post);
}

CreateOIDCProviderRequest::~CreateOIDCProviderRequest() {}

long CreateOIDCProviderRequest::getIssuanceLimitTime() const {
  return issuanceLimitTime_;
}

void CreateOIDCProviderRequest::setIssuanceLimitTime(long issuanceLimitTime) {
  issuanceLimitTime_ = issuanceLimitTime;
  setParameter(std::string("IssuanceLimitTime"), std::to_string(issuanceLimitTime));
}

std::string CreateOIDCProviderRequest::getAkProxySuffix() const {
  return akProxySuffix_;
}

void CreateOIDCProviderRequest::setAkProxySuffix(const std::string &akProxySuffix) {
  akProxySuffix_ = akProxySuffix;
  setParameter(std::string("AkProxySuffix"), akProxySuffix);
}

std::string CreateOIDCProviderRequest::getIssuerUrl() const {
  return issuerUrl_;
}

void CreateOIDCProviderRequest::setIssuerUrl(const std::string &issuerUrl) {
  issuerUrl_ = issuerUrl;
  setParameter(std::string("IssuerUrl"), issuerUrl);
}

std::string CreateOIDCProviderRequest::getOIDCProviderName() const {
  return oIDCProviderName_;
}

void CreateOIDCProviderRequest::setOIDCProviderName(const std::string &oIDCProviderName) {
  oIDCProviderName_ = oIDCProviderName;
  setParameter(std::string("OIDCProviderName"), oIDCProviderName);
}

std::string CreateOIDCProviderRequest::getDescription() const {
  return description_;
}

void CreateOIDCProviderRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateOIDCProviderRequest::getClientIds() const {
  return clientIds_;
}

void CreateOIDCProviderRequest::setClientIds(const std::string &clientIds) {
  clientIds_ = clientIds;
  setParameter(std::string("ClientIds"), clientIds);
}

std::string CreateOIDCProviderRequest::getFingerprints() const {
  return fingerprints_;
}

void CreateOIDCProviderRequest::setFingerprints(const std::string &fingerprints) {
  fingerprints_ = fingerprints;
  setParameter(std::string("Fingerprints"), fingerprints);
}

