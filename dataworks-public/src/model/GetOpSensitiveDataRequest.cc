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

#include <alibabacloud/dataworks-public/model/GetOpSensitiveDataRequest.h>

using AlibabaCloud::Dataworks_public::Model::GetOpSensitiveDataRequest;

GetOpSensitiveDataRequest::GetOpSensitiveDataRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "GetOpSensitiveData") {
  setMethod(HttpRequest::Method::Get);
}

GetOpSensitiveDataRequest::~GetOpSensitiveDataRequest() {}

std::string GetOpSensitiveDataRequest::getDate() const {
  return date_;
}

void GetOpSensitiveDataRequest::setDate(const std::string &date) {
  date_ = date;
  setParameter(std::string("Date"), date);
}

std::string GetOpSensitiveDataRequest::getOpType() const {
  return opType_;
}

void GetOpSensitiveDataRequest::setOpType(const std::string &opType) {
  opType_ = opType;
  setParameter(std::string("OpType"), opType);
}

int GetOpSensitiveDataRequest::getPageNo() const {
  return pageNo_;
}

void GetOpSensitiveDataRequest::setPageNo(int pageNo) {
  pageNo_ = pageNo;
  setParameter(std::string("PageNo"), std::to_string(pageNo));
}

std::string GetOpSensitiveDataRequest::getName() const {
  return name_;
}

void GetOpSensitiveDataRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

int GetOpSensitiveDataRequest::getPageSize() const {
  return pageSize_;
}

void GetOpSensitiveDataRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

