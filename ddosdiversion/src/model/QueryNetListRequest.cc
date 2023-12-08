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

#include <alibabacloud/ddosdiversion/model/QueryNetListRequest.h>

using AlibabaCloud::DdosDiversion::Model::QueryNetListRequest;

QueryNetListRequest::QueryNetListRequest()
    : RpcServiceRequest("ddosdiversion", "2023-07-01", "QueryNetList") {
  setMethod(HttpRequest::Method::Post);
}

QueryNetListRequest::~QueryNetListRequest() {}

long QueryNetListRequest::getNum() const {
  return num_;
}

void QueryNetListRequest::setNum(long num) {
  num_ = num;
  setParameter(std::string("Num"), std::to_string(num));
}

std::string QueryNetListRequest::getMainNet() const {
  return mainNet_;
}

void QueryNetListRequest::setMainNet(const std::string &mainNet) {
  mainNet_ = mainNet;
  setParameter(std::string("MainNet"), mainNet);
}

std::string QueryNetListRequest::getMode() const {
  return mode_;
}

void QueryNetListRequest::setMode(const std::string &mode) {
  mode_ = mode;
  setParameter(std::string("Mode"), mode);
}

std::string QueryNetListRequest::getNet() const {
  return net_;
}

void QueryNetListRequest::setNet(const std::string &net) {
  net_ = net;
  setParameter(std::string("Net"), net);
}

std::string QueryNetListRequest::getSaleId() const {
  return saleId_;
}

void QueryNetListRequest::setSaleId(const std::string &saleId) {
  saleId_ = saleId;
  setParameter(std::string("SaleId"), saleId);
}

long QueryNetListRequest::getPage() const {
  return page_;
}

void QueryNetListRequest::setPage(long page) {
  page_ = page;
  setParameter(std::string("Page"), std::to_string(page));
}

