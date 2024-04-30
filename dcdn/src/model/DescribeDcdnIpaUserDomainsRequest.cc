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

#include <alibabacloud/dcdn/model/DescribeDcdnIpaUserDomainsRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnIpaUserDomainsRequest;

DescribeDcdnIpaUserDomainsRequest::DescribeDcdnIpaUserDomainsRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnIpaUserDomains") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDcdnIpaUserDomainsRequest::~DescribeDcdnIpaUserDomainsRequest() {}

int DescribeDcdnIpaUserDomainsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDcdnIpaUserDomainsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

bool DescribeDcdnIpaUserDomainsRequest::getCheckDomainShow() const {
  return checkDomainShow_;
}

void DescribeDcdnIpaUserDomainsRequest::setCheckDomainShow(bool checkDomainShow) {
  checkDomainShow_ = checkDomainShow;
  setParameter(std::string("CheckDomainShow"), checkDomainShow ? "true" : "false");
}

std::string DescribeDcdnIpaUserDomainsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeDcdnIpaUserDomainsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

int DescribeDcdnIpaUserDomainsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDcdnIpaUserDomainsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::vector<DescribeDcdnIpaUserDomainsRequest::Tag> DescribeDcdnIpaUserDomainsRequest::getTag() const {
  return tag_;
}

void DescribeDcdnIpaUserDomainsRequest::setTag(const std::vector<DescribeDcdnIpaUserDomainsRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string DescribeDcdnIpaUserDomainsRequest::getFuncFilter() const {
  return funcFilter_;
}

void DescribeDcdnIpaUserDomainsRequest::setFuncFilter(const std::string &funcFilter) {
  funcFilter_ = funcFilter;
  setParameter(std::string("FuncFilter"), funcFilter);
}

std::string DescribeDcdnIpaUserDomainsRequest::getDomainName() const {
  return domainName_;
}

void DescribeDcdnIpaUserDomainsRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long DescribeDcdnIpaUserDomainsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDcdnIpaUserDomainsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeDcdnIpaUserDomainsRequest::getFuncId() const {
  return funcId_;
}

void DescribeDcdnIpaUserDomainsRequest::setFuncId(const std::string &funcId) {
  funcId_ = funcId;
  setParameter(std::string("FuncId"), funcId);
}

std::string DescribeDcdnIpaUserDomainsRequest::getDomainStatus() const {
  return domainStatus_;
}

void DescribeDcdnIpaUserDomainsRequest::setDomainStatus(const std::string &domainStatus) {
  domainStatus_ = domainStatus;
  setParameter(std::string("DomainStatus"), domainStatus);
}

std::string DescribeDcdnIpaUserDomainsRequest::getDomainSearchType() const {
  return domainSearchType_;
}

void DescribeDcdnIpaUserDomainsRequest::setDomainSearchType(const std::string &domainSearchType) {
  domainSearchType_ = domainSearchType;
  setParameter(std::string("DomainSearchType"), domainSearchType);
}

