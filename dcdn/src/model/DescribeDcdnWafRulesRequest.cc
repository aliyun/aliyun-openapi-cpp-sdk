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

#include <alibabacloud/dcdn/model/DescribeDcdnWafRulesRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnWafRulesRequest;

DescribeDcdnWafRulesRequest::DescribeDcdnWafRulesRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnWafRules") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDcdnWafRulesRequest::~DescribeDcdnWafRulesRequest() {}

std::string DescribeDcdnWafRulesRequest::getQueryArgs() const {
  return queryArgs_;
}

void DescribeDcdnWafRulesRequest::setQueryArgs(const std::string &queryArgs) {
  queryArgs_ = queryArgs;
  setParameter(std::string("QueryArgs"), queryArgs);
}

int DescribeDcdnWafRulesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDcdnWafRulesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int DescribeDcdnWafRulesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDcdnWafRulesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

