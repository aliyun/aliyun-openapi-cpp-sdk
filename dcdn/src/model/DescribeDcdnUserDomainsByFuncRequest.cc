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

#include <alibabacloud/dcdn/model/DescribeDcdnUserDomainsByFuncRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnUserDomainsByFuncRequest;

DescribeDcdnUserDomainsByFuncRequest::DescribeDcdnUserDomainsByFuncRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnUserDomainsByFunc") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDcdnUserDomainsByFuncRequest::~DescribeDcdnUserDomainsByFuncRequest() {}

std::string DescribeDcdnUserDomainsByFuncRequest::getFuncFilter() const {
  return funcFilter_;
}

void DescribeDcdnUserDomainsByFuncRequest::setFuncFilter(const std::string &funcFilter) {
  funcFilter_ = funcFilter;
  setParameter(std::string("FuncFilter"), funcFilter);
}

std::string DescribeDcdnUserDomainsByFuncRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeDcdnUserDomainsByFuncRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeDcdnUserDomainsByFuncRequest::getDomainName() const {
  return domainName_;
}

void DescribeDcdnUserDomainsByFuncRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

int DescribeDcdnUserDomainsByFuncRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDcdnUserDomainsByFuncRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeDcdnUserDomainsByFuncRequest::getMatchType() const {
  return matchType_;
}

void DescribeDcdnUserDomainsByFuncRequest::setMatchType(const std::string &matchType) {
  matchType_ = matchType;
  setParameter(std::string("MatchType"), matchType);
}

int DescribeDcdnUserDomainsByFuncRequest::getFuncId() const {
  return funcId_;
}

void DescribeDcdnUserDomainsByFuncRequest::setFuncId(int funcId) {
  funcId_ = funcId;
  setParameter(std::string("FuncId"), std::to_string(funcId));
}

int DescribeDcdnUserDomainsByFuncRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDcdnUserDomainsByFuncRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

