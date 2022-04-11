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

#include <alibabacloud/vod/model/DescribeVodUserDomainsRequest.h>

using AlibabaCloud::Vod::Model::DescribeVodUserDomainsRequest;

DescribeVodUserDomainsRequest::DescribeVodUserDomainsRequest()
    : RpcServiceRequest("vod", "2017-03-21", "DescribeVodUserDomains") {
  setMethod(HttpRequest::Method::Post);
}

DescribeVodUserDomainsRequest::~DescribeVodUserDomainsRequest() {}

int DescribeVodUserDomainsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeVodUserDomainsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

bool DescribeVodUserDomainsRequest::getCheckDomainShow() const {
  return checkDomainShow_;
}

void DescribeVodUserDomainsRequest::setCheckDomainShow(bool checkDomainShow) {
  checkDomainShow_ = checkDomainShow;
  setParameter(std::string("CheckDomainShow"), checkDomainShow ? "true" : "false");
}

std::string DescribeVodUserDomainsRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeVodUserDomainsRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string DescribeVodUserDomainsRequest::getCdnType() const {
  return cdnType_;
}

void DescribeVodUserDomainsRequest::setCdnType(const std::string &cdnType) {
  cdnType_ = cdnType;
  setParameter(std::string("CdnType"), cdnType);
}

int DescribeVodUserDomainsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeVodUserDomainsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::vector<DescribeVodUserDomainsRequest::Tag> DescribeVodUserDomainsRequest::getTag() const {
  return tag_;
}

void DescribeVodUserDomainsRequest::setTag(const std::vector<DescribeVodUserDomainsRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string DescribeVodUserDomainsRequest::getFuncFilter() const {
  return funcFilter_;
}

void DescribeVodUserDomainsRequest::setFuncFilter(const std::string &funcFilter) {
  funcFilter_ = funcFilter;
  setParameter(std::string("FuncFilter"), funcFilter);
}

std::string DescribeVodUserDomainsRequest::getDomainName() const {
  return domainName_;
}

void DescribeVodUserDomainsRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long DescribeVodUserDomainsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeVodUserDomainsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeVodUserDomainsRequest::getFuncId() const {
  return funcId_;
}

void DescribeVodUserDomainsRequest::setFuncId(const std::string &funcId) {
  funcId_ = funcId;
  setParameter(std::string("FuncId"), funcId);
}

std::string DescribeVodUserDomainsRequest::getDomainStatus() const {
  return domainStatus_;
}

void DescribeVodUserDomainsRequest::setDomainStatus(const std::string &domainStatus) {
  domainStatus_ = domainStatus;
  setParameter(std::string("DomainStatus"), domainStatus);
}

std::string DescribeVodUserDomainsRequest::getDomainSearchType() const {
  return domainSearchType_;
}

void DescribeVodUserDomainsRequest::setDomainSearchType(const std::string &domainSearchType) {
  domainSearchType_ = domainSearchType;
  setParameter(std::string("DomainSearchType"), domainSearchType);
}

