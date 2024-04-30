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

#include <alibabacloud/dcdn/model/DescribeDcdnSSLCertificateListRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnSSLCertificateListRequest;

DescribeDcdnSSLCertificateListRequest::DescribeDcdnSSLCertificateListRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnSSLCertificateList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDcdnSSLCertificateListRequest::~DescribeDcdnSSLCertificateListRequest() {}

long DescribeDcdnSSLCertificateListRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDcdnSSLCertificateListRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeDcdnSSLCertificateListRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeDcdnSSLCertificateListRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

long DescribeDcdnSSLCertificateListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDcdnSSLCertificateListRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeDcdnSSLCertificateListRequest::getMatchType() const {
  return matchType_;
}

void DescribeDcdnSSLCertificateListRequest::setMatchType(const std::string &matchType) {
  matchType_ = matchType;
  setParameter(std::string("MatchType"), matchType);
}

std::string DescribeDcdnSSLCertificateListRequest::getAlgorithm() const {
  return algorithm_;
}

void DescribeDcdnSSLCertificateListRequest::setAlgorithm(const std::string &algorithm) {
  algorithm_ = algorithm;
  setParameter(std::string("Algorithm"), algorithm);
}

std::string DescribeDcdnSSLCertificateListRequest::getDomainName() const {
  return domainName_;
}

void DescribeDcdnSSLCertificateListRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long DescribeDcdnSSLCertificateListRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDcdnSSLCertificateListRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeDcdnSSLCertificateListRequest::getSearchKeyword() const {
  return searchKeyword_;
}

void DescribeDcdnSSLCertificateListRequest::setSearchKeyword(const std::string &searchKeyword) {
  searchKeyword_ = searchKeyword;
  setParameter(std::string("SearchKeyword"), searchKeyword);
}

