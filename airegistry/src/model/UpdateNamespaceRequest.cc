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

#include <alibabacloud/airegistry/model/UpdateNamespaceRequest.h>

using AlibabaCloud::AIRegistry::Model::UpdateNamespaceRequest;

UpdateNamespaceRequest::UpdateNamespaceRequest()
    : RpcServiceRequest("airegistry", "2026-03-17", "UpdateNamespace") {
  setMethod(HttpRequest::Method::Post);
}

UpdateNamespaceRequest::~UpdateNamespaceRequest() {}

std::string UpdateNamespaceRequest::getNamespaceId() const {
  return namespaceId_;
}

void UpdateNamespaceRequest::setNamespaceId(const std::string &namespaceId) {
  namespaceId_ = namespaceId;
  setParameter(std::string("NamespaceId"), namespaceId);
}

std::string UpdateNamespaceRequest::getTags() const {
  return tags_;
}

void UpdateNamespaceRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

std::string UpdateNamespaceRequest::getName() const {
  return name_;
}

void UpdateNamespaceRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string UpdateNamespaceRequest::getDescription() const {
  return description_;
}

void UpdateNamespaceRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string UpdateNamespaceRequest::getScanPolicy() const {
  return scanPolicy_;
}

void UpdateNamespaceRequest::setScanPolicy(const std::string &scanPolicy) {
  scanPolicy_ = scanPolicy;
  setParameter(std::string("ScanPolicy"), scanPolicy);
}

