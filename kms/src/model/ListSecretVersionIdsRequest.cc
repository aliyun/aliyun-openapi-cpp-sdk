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

#include <alibabacloud/kms/model/ListSecretVersionIdsRequest.h>

using AlibabaCloud::Kms::Model::ListSecretVersionIdsRequest;

ListSecretVersionIdsRequest::ListSecretVersionIdsRequest()
    : RpcServiceRequest("kms", "2016-01-20", "ListSecretVersionIds") {
  setMethod(HttpRequest::Method::Post);
}

ListSecretVersionIdsRequest::~ListSecretVersionIdsRequest() {}

std::string ListSecretVersionIdsRequest::getIncludeDeprecated() const {
  return includeDeprecated_;
}

void ListSecretVersionIdsRequest::setIncludeDeprecated(const std::string &includeDeprecated) {
  includeDeprecated_ = includeDeprecated;
  setParameter(std::string("IncludeDeprecated"), includeDeprecated);
}

int ListSecretVersionIdsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListSecretVersionIdsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int ListSecretVersionIdsRequest::getPageSize() const {
  return pageSize_;
}

void ListSecretVersionIdsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListSecretVersionIdsRequest::getSecretName() const {
  return secretName_;
}

void ListSecretVersionIdsRequest::setSecretName(const std::string &secretName) {
  secretName_ = secretName;
  setParameter(std::string("SecretName"), secretName);
}

