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

#include <alibabacloud/mse/model/ListMigrationTaskRequest.h>

using AlibabaCloud::Mse::Model::ListMigrationTaskRequest;

ListMigrationTaskRequest::ListMigrationTaskRequest()
    : RpcServiceRequest("mse", "2019-05-31", "ListMigrationTask") {
  setMethod(HttpRequest::Method::Get);
}

ListMigrationTaskRequest::~ListMigrationTaskRequest() {}

std::string ListMigrationTaskRequest::getMseSessionId() const {
  return mseSessionId_;
}

void ListMigrationTaskRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

long ListMigrationTaskRequest::getPageNum() const {
  return pageNum_;
}

void ListMigrationTaskRequest::setPageNum(long pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

std::string ListMigrationTaskRequest::getRequestPars() const {
  return requestPars_;
}

void ListMigrationTaskRequest::setRequestPars(const std::string &requestPars) {
  requestPars_ = requestPars;
  setParameter(std::string("RequestPars"), requestPars);
}

long ListMigrationTaskRequest::getPageSize() const {
  return pageSize_;
}

void ListMigrationTaskRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListMigrationTaskRequest::getOriginInstanceName() const {
  return originInstanceName_;
}

void ListMigrationTaskRequest::setOriginInstanceName(const std::string &originInstanceName) {
  originInstanceName_ = originInstanceName;
  setParameter(std::string("OriginInstanceName"), originInstanceName);
}

std::string ListMigrationTaskRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void ListMigrationTaskRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

