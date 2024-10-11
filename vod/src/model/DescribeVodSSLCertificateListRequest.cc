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

#include <alibabacloud/vod/model/DescribeVodSSLCertificateListRequest.h>

using AlibabaCloud::Vod::Model::DescribeVodSSLCertificateListRequest;

DescribeVodSSLCertificateListRequest::DescribeVodSSLCertificateListRequest()
    : RpcServiceRequest("vod", "2017-03-21", "DescribeVodSSLCertificateList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeVodSSLCertificateListRequest::~DescribeVodSSLCertificateListRequest() {}

long DescribeVodSSLCertificateListRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeVodSSLCertificateListRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeVodSSLCertificateListRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeVodSSLCertificateListRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

long DescribeVodSSLCertificateListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeVodSSLCertificateListRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeVodSSLCertificateListRequest::getMatchType() const {
  return matchType_;
}

void DescribeVodSSLCertificateListRequest::setMatchType(const std::string &matchType) {
  matchType_ = matchType;
  setParameter(std::string("MatchType"), matchType);
}

std::string DescribeVodSSLCertificateListRequest::getAlgorithm() const {
  return algorithm_;
}

void DescribeVodSSLCertificateListRequest::setAlgorithm(const std::string &algorithm) {
  algorithm_ = algorithm;
  setParameter(std::string("Algorithm"), algorithm);
}

std::string DescribeVodSSLCertificateListRequest::getDomainName() const {
  return domainName_;
}

void DescribeVodSSLCertificateListRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long DescribeVodSSLCertificateListRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeVodSSLCertificateListRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeVodSSLCertificateListRequest::getSearchKeyword() const {
  return searchKeyword_;
}

void DescribeVodSSLCertificateListRequest::setSearchKeyword(const std::string &searchKeyword) {
  searchKeyword_ = searchKeyword;
  setParameter(std::string("SearchKeyword"), searchKeyword);
}

