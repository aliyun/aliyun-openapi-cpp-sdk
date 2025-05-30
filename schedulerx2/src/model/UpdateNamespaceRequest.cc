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

#include <alibabacloud/schedulerx2/model/UpdateNamespaceRequest.h>

using AlibabaCloud::Schedulerx2::Model::UpdateNamespaceRequest;

UpdateNamespaceRequest::UpdateNamespaceRequest()
    : RpcServiceRequest("schedulerx2", "2019-04-30", "UpdateNamespace") {
  setMethod(HttpRequest::Method::Post);
}

UpdateNamespaceRequest::~UpdateNamespaceRequest() {}

std::string UpdateNamespaceRequest::getNamespaceName() const {
  return namespaceName_;
}

void UpdateNamespaceRequest::setNamespaceName(const std::string &namespaceName) {
  namespaceName_ = namespaceName;
  setParameter(std::string("NamespaceName"), namespaceName);
}

std::string UpdateNamespaceRequest::getNamespaceSource() const {
  return namespaceSource_;
}

void UpdateNamespaceRequest::setNamespaceSource(const std::string &namespaceSource) {
  namespaceSource_ = namespaceSource;
  setParameter(std::string("NamespaceSource"), namespaceSource);
}

std::string UpdateNamespaceRequest::getDescription() const {
  return description_;
}

void UpdateNamespaceRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string UpdateNamespaceRequest::getRegionId() const {
  return regionId_;
}

void UpdateNamespaceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateNamespaceRequest::get_Namespace() const {
  return _namespace_;
}

void UpdateNamespaceRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

