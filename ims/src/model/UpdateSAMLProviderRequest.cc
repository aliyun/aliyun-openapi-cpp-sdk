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

#include <alibabacloud/ims/model/UpdateSAMLProviderRequest.h>

using AlibabaCloud::Ims::Model::UpdateSAMLProviderRequest;

UpdateSAMLProviderRequest::UpdateSAMLProviderRequest()
    : RpcServiceRequest("ims", "2019-08-15", "UpdateSAMLProvider") {
  setMethod(HttpRequest::Method::Post);
}

UpdateSAMLProviderRequest::~UpdateSAMLProviderRequest() {}

std::string UpdateSAMLProviderRequest::getAkProxySuffix() const {
  return akProxySuffix_;
}

void UpdateSAMLProviderRequest::setAkProxySuffix(const std::string &akProxySuffix) {
  akProxySuffix_ = akProxySuffix;
  setParameter(std::string("AkProxySuffix"), akProxySuffix);
}

std::string UpdateSAMLProviderRequest::getNewEncodedSAMLMetadataDocument() const {
  return newEncodedSAMLMetadataDocument_;
}

void UpdateSAMLProviderRequest::setNewEncodedSAMLMetadataDocument(const std::string &newEncodedSAMLMetadataDocument) {
  newEncodedSAMLMetadataDocument_ = newEncodedSAMLMetadataDocument;
  setParameter(std::string("NewEncodedSAMLMetadataDocument"), newEncodedSAMLMetadataDocument);
}

std::string UpdateSAMLProviderRequest::getSAMLProviderName() const {
  return sAMLProviderName_;
}

void UpdateSAMLProviderRequest::setSAMLProviderName(const std::string &sAMLProviderName) {
  sAMLProviderName_ = sAMLProviderName;
  setParameter(std::string("SAMLProviderName"), sAMLProviderName);
}

std::string UpdateSAMLProviderRequest::getNewDescription() const {
  return newDescription_;
}

void UpdateSAMLProviderRequest::setNewDescription(const std::string &newDescription) {
  newDescription_ = newDescription;
  setParameter(std::string("NewDescription"), newDescription);
}

std::string UpdateSAMLProviderRequest::getNewSAMLMetadataDocument() const {
  return newSAMLMetadataDocument_;
}

void UpdateSAMLProviderRequest::setNewSAMLMetadataDocument(const std::string &newSAMLMetadataDocument) {
  newSAMLMetadataDocument_ = newSAMLMetadataDocument;
  setParameter(std::string("NewSAMLMetadataDocument"), newSAMLMetadataDocument);
}

