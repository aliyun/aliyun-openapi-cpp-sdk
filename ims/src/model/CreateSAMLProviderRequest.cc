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

#include <alibabacloud/ims/model/CreateSAMLProviderRequest.h>

using AlibabaCloud::Ims::Model::CreateSAMLProviderRequest;

CreateSAMLProviderRequest::CreateSAMLProviderRequest()
    : RpcServiceRequest("ims", "2019-08-15", "CreateSAMLProvider") {
  setMethod(HttpRequest::Method::Post);
}

CreateSAMLProviderRequest::~CreateSAMLProviderRequest() {}

std::string CreateSAMLProviderRequest::getAkProxySuffix() const {
  return akProxySuffix_;
}

void CreateSAMLProviderRequest::setAkProxySuffix(const std::string &akProxySuffix) {
  akProxySuffix_ = akProxySuffix;
  setParameter(std::string("AkProxySuffix"), akProxySuffix);
}

std::string CreateSAMLProviderRequest::getDescription() const {
  return description_;
}

void CreateSAMLProviderRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateSAMLProviderRequest::getSAMLMetadataDocument() const {
  return sAMLMetadataDocument_;
}

void CreateSAMLProviderRequest::setSAMLMetadataDocument(const std::string &sAMLMetadataDocument) {
  sAMLMetadataDocument_ = sAMLMetadataDocument;
  setParameter(std::string("SAMLMetadataDocument"), sAMLMetadataDocument);
}

std::string CreateSAMLProviderRequest::getEncodedSAMLMetadataDocument() const {
  return encodedSAMLMetadataDocument_;
}

void CreateSAMLProviderRequest::setEncodedSAMLMetadataDocument(const std::string &encodedSAMLMetadataDocument) {
  encodedSAMLMetadataDocument_ = encodedSAMLMetadataDocument;
  setParameter(std::string("EncodedSAMLMetadataDocument"), encodedSAMLMetadataDocument);
}

std::string CreateSAMLProviderRequest::getSAMLProviderName() const {
  return sAMLProviderName_;
}

void CreateSAMLProviderRequest::setSAMLProviderName(const std::string &sAMLProviderName) {
  sAMLProviderName_ = sAMLProviderName;
  setParameter(std::string("SAMLProviderName"), sAMLProviderName);
}

