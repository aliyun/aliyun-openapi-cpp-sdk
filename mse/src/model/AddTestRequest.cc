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

#include <alibabacloud/mse/model/AddTestRequest.h>

using AlibabaCloud::Mse::Model::AddTestRequest;

AddTestRequest::AddTestRequest()
    : RpcServiceRequest("mse", "2019-05-31", "AddTest") {
  setMethod(HttpRequest::Method::Post);
}

AddTestRequest::~AddTestRequest() {}

int AddTestRequest::getPageNumber() const {
  return pageNumber_;
}

void AddTestRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string AddTestRequest::getOrderItem() const {
  return orderItem_;
}

void AddTestRequest::setOrderItem(const std::string &orderItem) {
  orderItem_ = orderItem;
  setParameter(std::string("OrderItem"), orderItem);
}

int AddTestRequest::getPageSize() const {
  return pageSize_;
}

void AddTestRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string AddTestRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void AddTestRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

bool AddTestRequest::getDescSort() const {
  return descSort_;
}

void AddTestRequest::setDescSort(bool descSort) {
  descSort_ = descSort;
  setParameter(std::string("DescSort"), descSort ? "true" : "false");
}

