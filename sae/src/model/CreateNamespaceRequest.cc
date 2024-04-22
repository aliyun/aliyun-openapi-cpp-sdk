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

#include <alibabacloud/sae/model/CreateNamespaceRequest.h>

using AlibabaCloud::Sae::Model::CreateNamespaceRequest;

CreateNamespaceRequest::CreateNamespaceRequest()
    : RoaServiceRequest("sae", "2019-05-06") {
  setResourcePath("/pop/v1/paas/namespace"};
  setMethod(HttpRequest::Method::Post);
}

CreateNamespaceRequest::~CreateNamespaceRequest() {}

std::string CreateNamespaceRequest::getNamespaceName() const {
  return namespaceName_;
}

void CreateNamespaceRequest::setNamespaceName(const std::string &namespaceName) {
  namespaceName_ = namespaceName;
  setParameter(std::string("NamespaceName"), namespaceName);
}

std::string CreateNamespaceRequest::getNamespaceDescription() const {
  return namespaceDescription_;
}

void CreateNamespaceRequest::setNamespaceDescription(const std::string &namespaceDescription) {
  namespaceDescription_ = namespaceDescription;
  setParameter(std::string("NamespaceDescription"), namespaceDescription);
}

bool CreateNamespaceRequest::getEnableMicroRegistration() const {
  return enableMicroRegistration_;
}

void CreateNamespaceRequest::setEnableMicroRegistration(bool enableMicroRegistration) {
  enableMicroRegistration_ = enableMicroRegistration;
  setParameter(std::string("EnableMicroRegistration"), enableMicroRegistration ? "true" : "false");
}

std::string CreateNamespaceRequest::getNamespaceId() const {
  return namespaceId_;
}

void CreateNamespaceRequest::setNamespaceId(const std::string &namespaceId) {
  namespaceId_ = namespaceId;
  setParameter(std::string("NamespaceId"), namespaceId);
}

std::string CreateNamespaceRequest::getNameSpaceShortId() const {
  return nameSpaceShortId_;
}

void CreateNamespaceRequest::setNameSpaceShortId(const std::string &nameSpaceShortId) {
  nameSpaceShortId_ = nameSpaceShortId;
  setParameter(std::string("NameSpaceShortId"), nameSpaceShortId);
}

