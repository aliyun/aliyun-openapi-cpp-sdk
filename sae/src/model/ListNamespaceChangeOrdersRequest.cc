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

#include <alibabacloud/sae/model/ListNamespaceChangeOrdersRequest.h>

using AlibabaCloud::Sae::Model::ListNamespaceChangeOrdersRequest;

ListNamespaceChangeOrdersRequest::ListNamespaceChangeOrdersRequest()
    : RoaServiceRequest("sae", "2019-05-06") {
  setResourcePath("/pop/v1/sam/changeorder/listNamespaceChangeOrders"};
  setMethod(HttpRequest::Method::Get);
}

ListNamespaceChangeOrdersRequest::~ListNamespaceChangeOrdersRequest() {}

std::string ListNamespaceChangeOrdersRequest::getCoType() const {
  return coType_;
}

void ListNamespaceChangeOrdersRequest::setCoType(const std::string &coType) {
  coType_ = coType;
  setParameter(std::string("CoType"), coType);
}

std::string ListNamespaceChangeOrdersRequest::getNamespaceId() const {
  return namespaceId_;
}

void ListNamespaceChangeOrdersRequest::setNamespaceId(const std::string &namespaceId) {
  namespaceId_ = namespaceId;
  setParameter(std::string("NamespaceId"), namespaceId);
}

int ListNamespaceChangeOrdersRequest::getPageSize() const {
  return pageSize_;
}

void ListNamespaceChangeOrdersRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int ListNamespaceChangeOrdersRequest::getCurrentPage() const {
  return currentPage_;
}

void ListNamespaceChangeOrdersRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string ListNamespaceChangeOrdersRequest::getCoStatus() const {
  return coStatus_;
}

void ListNamespaceChangeOrdersRequest::setCoStatus(const std::string &coStatus) {
  coStatus_ = coStatus;
  setParameter(std::string("CoStatus"), coStatus);
}

std::string ListNamespaceChangeOrdersRequest::getKey() const {
  return key_;
}

void ListNamespaceChangeOrdersRequest::setKey(const std::string &key) {
  key_ = key;
  setParameter(std::string("Key"), key);
}

