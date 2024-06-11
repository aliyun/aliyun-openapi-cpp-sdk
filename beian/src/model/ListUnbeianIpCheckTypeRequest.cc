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

#include <alibabacloud/beian/model/ListUnbeianIpCheckTypeRequest.h>

using AlibabaCloud::Beian::Model::ListUnbeianIpCheckTypeRequest;

ListUnbeianIpCheckTypeRequest::ListUnbeianIpCheckTypeRequest()
    : RpcServiceRequest("beian", "2016-08-10", "ListUnbeianIpCheckType") {
  setMethod(HttpRequest::Method::Post);
}

ListUnbeianIpCheckTypeRequest::~ListUnbeianIpCheckTypeRequest() {}

std::string ListUnbeianIpCheckTypeRequest::getIp() const {
  return ip_;
}

void ListUnbeianIpCheckTypeRequest::setIp(const std::string &ip) {
  ip_ = ip;
  setParameter(std::string("Ip"), ip);
}

std::string ListUnbeianIpCheckTypeRequest::getRemark() const {
  return remark_;
}

void ListUnbeianIpCheckTypeRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setParameter(std::string("Remark"), remark);
}

int ListUnbeianIpCheckTypeRequest::getCheckType() const {
  return checkType_;
}

void ListUnbeianIpCheckTypeRequest::setCheckType(int checkType) {
  checkType_ = checkType;
  setParameter(std::string("CheckType"), std::to_string(checkType));
}

std::string ListUnbeianIpCheckTypeRequest::getCaller() const {
  return caller_;
}

void ListUnbeianIpCheckTypeRequest::setCaller(const std::string &caller) {
  caller_ = caller;
  setParameter(std::string("Caller"), caller);
}

int ListUnbeianIpCheckTypeRequest::getLimit() const {
  return limit_;
}

void ListUnbeianIpCheckTypeRequest::setLimit(int limit) {
  limit_ = limit;
  setParameter(std::string("Limit"), std::to_string(limit));
}

int ListUnbeianIpCheckTypeRequest::getPage() const {
  return page_;
}

void ListUnbeianIpCheckTypeRequest::setPage(int page) {
  page_ = page;
  setParameter(std::string("Page"), std::to_string(page));
}

