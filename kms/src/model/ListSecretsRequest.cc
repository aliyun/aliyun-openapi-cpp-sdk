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

#include <alibabacloud/kms/model/ListSecretsRequest.h>

using AlibabaCloud::Kms::Model::ListSecretsRequest;

ListSecretsRequest::ListSecretsRequest()
    : RpcServiceRequest("kms", "2016-01-20", "ListSecrets") {
  setMethod(HttpRequest::Method::Post);
}

ListSecretsRequest::~ListSecretsRequest() {}

std::string ListSecretsRequest::getFilters() const {
  return filters_;
}

void ListSecretsRequest::setFilters(const std::string &filters) {
  filters_ = filters;
  setParameter(std::string("Filters"), filters);
}

int ListSecretsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListSecretsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int ListSecretsRequest::getPageSize() const {
  return pageSize_;
}

void ListSecretsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListSecretsRequest::getFetchTags() const {
  return fetchTags_;
}

void ListSecretsRequest::setFetchTags(const std::string &fetchTags) {
  fetchTags_ = fetchTags;
  setParameter(std::string("FetchTags"), fetchTags);
}

