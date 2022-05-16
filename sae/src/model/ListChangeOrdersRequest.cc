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

#include <alibabacloud/sae/model/ListChangeOrdersRequest.h>

using AlibabaCloud::Sae::Model::ListChangeOrdersRequest;

ListChangeOrdersRequest::ListChangeOrdersRequest()
    : RoaServiceRequest("sae", "2019-05-06") {
  setResourcePath("/pop/v1/sam/changeorder/ListChangeOrders"};
  setMethod(HttpRequest::Method::Get);
}

ListChangeOrdersRequest::~ListChangeOrdersRequest() {}

std::string ListChangeOrdersRequest::getCoType() const {
  return coType_;
}

void ListChangeOrdersRequest::setCoType(const std::string &coType) {
  coType_ = coType;
  setParameter(std::string("CoType"), coType);
}

std::string ListChangeOrdersRequest::getAppId() const {
  return appId_;
}

void ListChangeOrdersRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

int ListChangeOrdersRequest::getPageSize() const {
  return pageSize_;
}

void ListChangeOrdersRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int ListChangeOrdersRequest::getCurrentPage() const {
  return currentPage_;
}

void ListChangeOrdersRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string ListChangeOrdersRequest::getCoStatus() const {
  return coStatus_;
}

void ListChangeOrdersRequest::setCoStatus(const std::string &coStatus) {
  coStatus_ = coStatus;
  setParameter(std::string("CoStatus"), coStatus);
}

std::string ListChangeOrdersRequest::getKey() const {
  return key_;
}

void ListChangeOrdersRequest::setKey(const std::string &key) {
  key_ = key;
  setParameter(std::string("Key"), key);
}

