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

#include <alibabacloud/ddosdiversion/model/ListInstanceRequest.h>

using AlibabaCloud::DdosDiversion::Model::ListInstanceRequest;

ListInstanceRequest::ListInstanceRequest()
    : RpcServiceRequest("ddosdiversion", "2023-07-01", "ListInstance") {
  setMethod(HttpRequest::Method::Post);
}

ListInstanceRequest::~ListInstanceRequest() {}

long ListInstanceRequest::getNum() const {
  return num_;
}

void ListInstanceRequest::setNum(long num) {
  num_ = num;
  setParameter(std::string("Num"), std::to_string(num));
}

std::string ListInstanceRequest::getSaleId() const {
  return saleId_;
}

void ListInstanceRequest::setSaleId(const std::string &saleId) {
  saleId_ = saleId;
  setParameter(std::string("SaleId"), saleId);
}

std::string ListInstanceRequest::getName() const {
  return name_;
}

void ListInstanceRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

long ListInstanceRequest::getPage() const {
  return page_;
}

void ListInstanceRequest::setPage(long page) {
  page_ = page;
  setParameter(std::string("Page"), std::to_string(page));
}

std::string ListInstanceRequest::getStatus() const {
  return status_;
}

void ListInstanceRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

