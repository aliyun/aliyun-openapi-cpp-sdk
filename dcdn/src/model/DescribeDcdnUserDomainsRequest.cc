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

#include <alibabacloud/dcdn/model/DescribeDcdnUserDomainsRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnUserDomainsRequest;

DescribeDcdnUserDomainsRequest::DescribeDcdnUserDomainsRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnUserDomains") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDcdnUserDomainsRequest::~DescribeDcdnUserDomainsRequest() {}

int DescribeDcdnUserDomainsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDcdnUserDomainsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

bool DescribeDcdnUserDomainsRequest::getCheckDomainShow() const {
  return checkDomainShow_;
}

void DescribeDcdnUserDomainsRequest::setCheckDomainShow(bool checkDomainShow) {
  checkDomainShow_ = checkDomainShow;
  setParameter(std::string("CheckDomainShow"), checkDomainShow ? "true" : "false");
}

std::string DescribeDcdnUserDomainsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeDcdnUserDomainsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeDcdnUserDomainsRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeDcdnUserDomainsRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string DescribeDcdnUserDomainsRequest::getChangeEndTime() const {
  return changeEndTime_;
}

void DescribeDcdnUserDomainsRequest::setChangeEndTime(const std::string &changeEndTime) {
  changeEndTime_ = changeEndTime;
  setParameter(std::string("ChangeEndTime"), changeEndTime);
}

int DescribeDcdnUserDomainsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDcdnUserDomainsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::vector<DescribeDcdnUserDomainsRequest::Tag> DescribeDcdnUserDomainsRequest::getTag() const {
  return tag_;
}

void DescribeDcdnUserDomainsRequest::setTag(const std::vector<DescribeDcdnUserDomainsRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string DescribeDcdnUserDomainsRequest::getWebSiteType() const {
  return webSiteType_;
}

void DescribeDcdnUserDomainsRequest::setWebSiteType(const std::string &webSiteType) {
  webSiteType_ = webSiteType;
  setParameter(std::string("WebSiteType"), webSiteType);
}

std::string DescribeDcdnUserDomainsRequest::getFuncFilter() const {
  return funcFilter_;
}

void DescribeDcdnUserDomainsRequest::setFuncFilter(const std::string &funcFilter) {
  funcFilter_ = funcFilter;
  setParameter(std::string("FuncFilter"), funcFilter);
}

std::string DescribeDcdnUserDomainsRequest::getCoverage() const {
  return coverage_;
}

void DescribeDcdnUserDomainsRequest::setCoverage(const std::string &coverage) {
  coverage_ = coverage;
  setParameter(std::string("Coverage"), coverage);
}

std::string DescribeDcdnUserDomainsRequest::getDomainName() const {
  return domainName_;
}

void DescribeDcdnUserDomainsRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long DescribeDcdnUserDomainsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDcdnUserDomainsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeDcdnUserDomainsRequest::getFuncId() const {
  return funcId_;
}

void DescribeDcdnUserDomainsRequest::setFuncId(const std::string &funcId) {
  funcId_ = funcId;
  setParameter(std::string("FuncId"), funcId);
}

std::string DescribeDcdnUserDomainsRequest::getDomainStatus() const {
  return domainStatus_;
}

void DescribeDcdnUserDomainsRequest::setDomainStatus(const std::string &domainStatus) {
  domainStatus_ = domainStatus;
  setParameter(std::string("DomainStatus"), domainStatus);
}

std::string DescribeDcdnUserDomainsRequest::getDomainSearchType() const {
  return domainSearchType_;
}

void DescribeDcdnUserDomainsRequest::setDomainSearchType(const std::string &domainSearchType) {
  domainSearchType_ = domainSearchType;
  setParameter(std::string("DomainSearchType"), domainSearchType);
}

std::string DescribeDcdnUserDomainsRequest::getChangeStartTime() const {
  return changeStartTime_;
}

void DescribeDcdnUserDomainsRequest::setChangeStartTime(const std::string &changeStartTime) {
  changeStartTime_ = changeStartTime;
  setParameter(std::string("ChangeStartTime"), changeStartTime);
}

