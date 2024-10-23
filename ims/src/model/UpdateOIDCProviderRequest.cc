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

#include <alibabacloud/ims/model/UpdateOIDCProviderRequest.h>

using AlibabaCloud::Ims::Model::UpdateOIDCProviderRequest;

UpdateOIDCProviderRequest::UpdateOIDCProviderRequest()
    : RpcServiceRequest("ims", "2019-08-15", "UpdateOIDCProvider") {
  setMethod(HttpRequest::Method::Post);
}

UpdateOIDCProviderRequest::~UpdateOIDCProviderRequest() {}

long UpdateOIDCProviderRequest::getIssuanceLimitTime() const {
  return issuanceLimitTime_;
}

void UpdateOIDCProviderRequest::setIssuanceLimitTime(long issuanceLimitTime) {
  issuanceLimitTime_ = issuanceLimitTime;
  setParameter(std::string("IssuanceLimitTime"), std::to_string(issuanceLimitTime));
}

std::string UpdateOIDCProviderRequest::getAkProxySuffix() const {
  return akProxySuffix_;
}

void UpdateOIDCProviderRequest::setAkProxySuffix(const std::string &akProxySuffix) {
  akProxySuffix_ = akProxySuffix;
  setParameter(std::string("AkProxySuffix"), akProxySuffix);
}

std::string UpdateOIDCProviderRequest::getOIDCProviderName() const {
  return oIDCProviderName_;
}

void UpdateOIDCProviderRequest::setOIDCProviderName(const std::string &oIDCProviderName) {
  oIDCProviderName_ = oIDCProviderName;
  setParameter(std::string("OIDCProviderName"), oIDCProviderName);
}

std::string UpdateOIDCProviderRequest::getClientIds() const {
  return clientIds_;
}

void UpdateOIDCProviderRequest::setClientIds(const std::string &clientIds) {
  clientIds_ = clientIds;
  setParameter(std::string("ClientIds"), clientIds);
}

std::string UpdateOIDCProviderRequest::getNewDescription() const {
  return newDescription_;
}

void UpdateOIDCProviderRequest::setNewDescription(const std::string &newDescription) {
  newDescription_ = newDescription;
  setParameter(std::string("NewDescription"), newDescription);
}

