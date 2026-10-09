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

#include <alibabacloud/airegistry/model/CreateNamespaceRequest.h>

using AlibabaCloud::AIRegistry::Model::CreateNamespaceRequest;

CreateNamespaceRequest::CreateNamespaceRequest()
    : RpcServiceRequest("airegistry", "2026-03-17", "CreateNamespace") {
  setMethod(HttpRequest::Method::Post);
}

CreateNamespaceRequest::~CreateNamespaceRequest() {}

std::string CreateNamespaceRequest::getTags() const {
  return tags_;
}

void CreateNamespaceRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

std::string CreateNamespaceRequest::getName() const {
  return name_;
}

void CreateNamespaceRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string CreateNamespaceRequest::getDescription() const {
  return description_;
}

void CreateNamespaceRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateNamespaceRequest::getScanPolicy() const {
  return scanPolicy_;
}

void CreateNamespaceRequest::setScanPolicy(const std::string &scanPolicy) {
  scanPolicy_ = scanPolicy;
  setParameter(std::string("ScanPolicy"), scanPolicy);
}

