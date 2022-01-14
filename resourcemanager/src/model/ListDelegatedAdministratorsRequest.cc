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

#include <alibabacloud/resourcemanager/model/ListDelegatedAdministratorsRequest.h>

using AlibabaCloud::ResourceManager::Model::ListDelegatedAdministratorsRequest;

ListDelegatedAdministratorsRequest::ListDelegatedAdministratorsRequest()
    : RpcServiceRequest("resourcemanager", "2020-03-31", "ListDelegatedAdministrators") {
  setMethod(HttpRequest::Method::Post);
}

ListDelegatedAdministratorsRequest::~ListDelegatedAdministratorsRequest() {}

long ListDelegatedAdministratorsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListDelegatedAdministratorsRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

long ListDelegatedAdministratorsRequest::getPageSize() const {
  return pageSize_;
}

void ListDelegatedAdministratorsRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListDelegatedAdministratorsRequest::getServicePrincipal() const {
  return servicePrincipal_;
}

void ListDelegatedAdministratorsRequest::setServicePrincipal(const std::string &servicePrincipal) {
  servicePrincipal_ = servicePrincipal;
  setParameter(std::string("ServicePrincipal"), servicePrincipal);
}

