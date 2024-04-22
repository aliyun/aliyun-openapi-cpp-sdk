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

#include <alibabacloud/sae/model/DeleteNamespaceRequest.h>

using AlibabaCloud::Sae::Model::DeleteNamespaceRequest;

DeleteNamespaceRequest::DeleteNamespaceRequest()
    : RoaServiceRequest("sae", "2019-05-06") {
  setResourcePath("/pop/v1/paas/namespace"};
  setMethod(HttpRequest::Method::Delete);
}

DeleteNamespaceRequest::~DeleteNamespaceRequest() {}

std::string DeleteNamespaceRequest::getNamespaceId() const {
  return namespaceId_;
}

void DeleteNamespaceRequest::setNamespaceId(const std::string &namespaceId) {
  namespaceId_ = namespaceId;
  setParameter(std::string("NamespaceId"), namespaceId);
}

std::string DeleteNamespaceRequest::getNameSpaceShortId() const {
  return nameSpaceShortId_;
}

void DeleteNamespaceRequest::setNameSpaceShortId(const std::string &nameSpaceShortId) {
  nameSpaceShortId_ = nameSpaceShortId;
  setParameter(std::string("NameSpaceShortId"), nameSpaceShortId);
}

