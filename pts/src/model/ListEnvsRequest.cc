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

#include <alibabacloud/pts/model/ListEnvsRequest.h>

using AlibabaCloud::PTS::Model::ListEnvsRequest;

ListEnvsRequest::ListEnvsRequest()
    : RpcServiceRequest("pts", "2020-10-20", "ListEnvs") {
  setMethod(HttpRequest::Method::Post);
}

ListEnvsRequest::~ListEnvsRequest() {}

std::string ListEnvsRequest::getEnvName() const {
  return envName_;
}

void ListEnvsRequest::setEnvName(const std::string &envName) {
  envName_ = envName;
  setParameter(std::string("EnvName"), envName);
}

int ListEnvsRequest::getPageSize() const {
  return pageSize_;
}

void ListEnvsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListEnvsRequest::getEnvId() const {
  return envId_;
}

void ListEnvsRequest::setEnvId(const std::string &envId) {
  envId_ = envId;
  setParameter(std::string("EnvId"), envId);
}

int ListEnvsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListEnvsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

