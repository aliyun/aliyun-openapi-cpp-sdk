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

#include <alibabacloud/ims/model/RemoveFingerprintFromOIDCProviderRequest.h>

using AlibabaCloud::Ims::Model::RemoveFingerprintFromOIDCProviderRequest;

RemoveFingerprintFromOIDCProviderRequest::RemoveFingerprintFromOIDCProviderRequest()
    : RpcServiceRequest("ims", "2019-08-15", "RemoveFingerprintFromOIDCProvider") {
  setMethod(HttpRequest::Method::Post);
}

RemoveFingerprintFromOIDCProviderRequest::~RemoveFingerprintFromOIDCProviderRequest() {}

std::string RemoveFingerprintFromOIDCProviderRequest::getAkProxySuffix() const {
  return akProxySuffix_;
}

void RemoveFingerprintFromOIDCProviderRequest::setAkProxySuffix(const std::string &akProxySuffix) {
  akProxySuffix_ = akProxySuffix;
  setParameter(std::string("AkProxySuffix"), akProxySuffix);
}

std::string RemoveFingerprintFromOIDCProviderRequest::getOIDCProviderName() const {
  return oIDCProviderName_;
}

void RemoveFingerprintFromOIDCProviderRequest::setOIDCProviderName(const std::string &oIDCProviderName) {
  oIDCProviderName_ = oIDCProviderName;
  setParameter(std::string("OIDCProviderName"), oIDCProviderName);
}

std::string RemoveFingerprintFromOIDCProviderRequest::getFingerprint() const {
  return fingerprint_;
}

void RemoveFingerprintFromOIDCProviderRequest::setFingerprint(const std::string &fingerprint) {
  fingerprint_ = fingerprint;
  setParameter(std::string("Fingerprint"), fingerprint);
}

