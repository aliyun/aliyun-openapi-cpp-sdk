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

#include <alibabacloud/sae/model/CreateConfigMapRequest.h>

using AlibabaCloud::Sae::Model::CreateConfigMapRequest;

CreateConfigMapRequest::CreateConfigMapRequest()
    : RoaServiceRequest("sae", "2019-05-06") {
  setResourcePath("/pop/v1/sam/configmap/configMap"};
  setMethod(HttpRequest::Method::Post);
}

CreateConfigMapRequest::~CreateConfigMapRequest() {}

std::string CreateConfigMapRequest::getData() const {
  return data_;
}

void CreateConfigMapRequest::setData(const std::string &data) {
  data_ = data;
  setBodyParameter(std::string("Data"), data);
}

std::string CreateConfigMapRequest::getNamespaceId() const {
  return namespaceId_;
}

void CreateConfigMapRequest::setNamespaceId(const std::string &namespaceId) {
  namespaceId_ = namespaceId;
  setParameter(std::string("NamespaceId"), namespaceId);
}

std::string CreateConfigMapRequest::getName() const {
  return name_;
}

void CreateConfigMapRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string CreateConfigMapRequest::getDescription() const {
  return description_;
}

void CreateConfigMapRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

