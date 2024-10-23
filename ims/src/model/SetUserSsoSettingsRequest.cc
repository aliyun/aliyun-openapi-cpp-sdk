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

#include <alibabacloud/ims/model/SetUserSsoSettingsRequest.h>

using AlibabaCloud::Ims::Model::SetUserSsoSettingsRequest;

SetUserSsoSettingsRequest::SetUserSsoSettingsRequest()
    : RpcServiceRequest("ims", "2019-08-15", "SetUserSsoSettings") {
  setMethod(HttpRequest::Method::Post);
}

SetUserSsoSettingsRequest::~SetUserSsoSettingsRequest() {}

std::string SetUserSsoSettingsRequest::getAkProxySuffix() const {
  return akProxySuffix_;
}

void SetUserSsoSettingsRequest::setAkProxySuffix(const std::string &akProxySuffix) {
  akProxySuffix_ = akProxySuffix;
  setParameter(std::string("AkProxySuffix"), akProxySuffix);
}

std::string SetUserSsoSettingsRequest::getAuxiliaryDomain() const {
  return auxiliaryDomain_;
}

void SetUserSsoSettingsRequest::setAuxiliaryDomain(const std::string &auxiliaryDomain) {
  auxiliaryDomain_ = auxiliaryDomain;
  setParameter(std::string("AuxiliaryDomain"), auxiliaryDomain);
}

std::string SetUserSsoSettingsRequest::getMetadataDocument() const {
  return metadataDocument_;
}

void SetUserSsoSettingsRequest::setMetadataDocument(const std::string &metadataDocument) {
  metadataDocument_ = metadataDocument;
  setParameter(std::string("MetadataDocument"), metadataDocument);
}

bool SetUserSsoSettingsRequest::getReserved() const {
  return reserved_;
}

void SetUserSsoSettingsRequest::setReserved(bool reserved) {
  reserved_ = reserved;
  setParameter(std::string("Reserved"), reserved ? "true" : "false");
}

bool SetUserSsoSettingsRequest::getSsoEnabled() const {
  return ssoEnabled_;
}

void SetUserSsoSettingsRequest::setSsoEnabled(bool ssoEnabled) {
  ssoEnabled_ = ssoEnabled;
  setParameter(std::string("SsoEnabled"), ssoEnabled ? "true" : "false");
}

