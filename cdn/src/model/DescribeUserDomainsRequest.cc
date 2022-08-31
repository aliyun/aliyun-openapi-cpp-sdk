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

#include <alibabacloud/cdn/model/DescribeUserDomainsRequest.h>

using AlibabaCloud::Cdn::Model::DescribeUserDomainsRequest;

DescribeUserDomainsRequest::DescribeUserDomainsRequest()
    : RpcServiceRequest("cdn", "2014-11-11", "DescribeUserDomains") {
  setMethod(HttpRequest::Method::Post);
}

DescribeUserDomainsRequest::~DescribeUserDomainsRequest() {}

std::string DescribeUserDomainsRequest::getSources() const {
  return sources_;
}

void DescribeUserDomainsRequest::setSources(const std::string &sources) {
  sources_ = sources;
  setParameter(std::string("Sources"), sources);
}

int DescribeUserDomainsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeUserDomainsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

bool DescribeUserDomainsRequest::getCheckDomainShow() const {
  return checkDomainShow_;
}

void DescribeUserDomainsRequest::setCheckDomainShow(bool checkDomainShow) {
  checkDomainShow_ = checkDomainShow;
  setParameter(std::string("CheckDomainShow"), checkDomainShow ? "true" : "false");
}

std::string DescribeUserDomainsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeUserDomainsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeUserDomainsRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeUserDomainsRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string DescribeUserDomainsRequest::getCdnType() const {
  return cdnType_;
}

void DescribeUserDomainsRequest::setCdnType(const std::string &cdnType) {
  cdnType_ = cdnType;
  setParameter(std::string("CdnType"), cdnType);
}

int DescribeUserDomainsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeUserDomainsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeUserDomainsRequest::getFuncFilter() const {
  return funcFilter_;
}

void DescribeUserDomainsRequest::setFuncFilter(const std::string &funcFilter) {
  funcFilter_ = funcFilter;
  setParameter(std::string("FuncFilter"), funcFilter);
}

std::string DescribeUserDomainsRequest::getDomainName() const {
  return domainName_;
}

void DescribeUserDomainsRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long DescribeUserDomainsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeUserDomainsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeUserDomainsRequest::getFuncId() const {
  return funcId_;
}

void DescribeUserDomainsRequest::setFuncId(const std::string &funcId) {
  funcId_ = funcId;
  setParameter(std::string("FuncId"), funcId);
}

std::string DescribeUserDomainsRequest::getDomainStatus() const {
  return domainStatus_;
}

void DescribeUserDomainsRequest::setDomainStatus(const std::string &domainStatus) {
  domainStatus_ = domainStatus;
  setParameter(std::string("DomainStatus"), domainStatus);
}

std::string DescribeUserDomainsRequest::getDomainSearchType() const {
  return domainSearchType_;
}

void DescribeUserDomainsRequest::setDomainSearchType(const std::string &domainSearchType) {
  domainSearchType_ = domainSearchType;
  setParameter(std::string("DomainSearchType"), domainSearchType);
}

