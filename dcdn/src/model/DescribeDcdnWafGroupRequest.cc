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

#include <alibabacloud/dcdn/model/DescribeDcdnWafGroupRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnWafGroupRequest;

DescribeDcdnWafGroupRequest::DescribeDcdnWafGroupRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnWafGroup") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDcdnWafGroupRequest::~DescribeDcdnWafGroupRequest() {}

std::string DescribeDcdnWafGroupRequest::getQueryArgs() const {
  return queryArgs_;
}

void DescribeDcdnWafGroupRequest::setQueryArgs(const std::string &queryArgs) {
  queryArgs_ = queryArgs;
  setParameter(std::string("QueryArgs"), queryArgs);
}

std::string DescribeDcdnWafGroupRequest::getScope() const {
  return scope_;
}

void DescribeDcdnWafGroupRequest::setScope(const std::string &scope) {
  scope_ = scope;
  setParameter(std::string("Scope"), scope);
}

int DescribeDcdnWafGroupRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDcdnWafGroupRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeDcdnWafGroupRequest::getLanguage() const {
  return language_;
}

void DescribeDcdnWafGroupRequest::setLanguage(const std::string &language) {
  language_ = language;
  setParameter(std::string("Language"), language);
}

long DescribeDcdnWafGroupRequest::getId() const {
  return id_;
}

void DescribeDcdnWafGroupRequest::setId(long id) {
  id_ = id;
  setParameter(std::string("Id"), std::to_string(id));
}

int DescribeDcdnWafGroupRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDcdnWafGroupRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

