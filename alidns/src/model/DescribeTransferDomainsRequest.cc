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

#include <alibabacloud/alidns/model/DescribeTransferDomainsRequest.h>

using AlibabaCloud::Alidns::Model::DescribeTransferDomainsRequest;

DescribeTransferDomainsRequest::DescribeTransferDomainsRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "DescribeTransferDomains") {
  setMethod(HttpRequest::Method::Post);
}

DescribeTransferDomainsRequest::~DescribeTransferDomainsRequest() {}

long DescribeTransferDomainsRequest::getFromUserId() const {
  return fromUserId_;
}

void DescribeTransferDomainsRequest::setFromUserId(long fromUserId) {
  fromUserId_ = fromUserId;
  setParameter(std::string("FromUserId"), std::to_string(fromUserId));
}

long DescribeTransferDomainsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeTransferDomainsRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

long DescribeTransferDomainsRequest::getTargetUserId() const {
  return targetUserId_;
}

void DescribeTransferDomainsRequest::setTargetUserId(long targetUserId) {
  targetUserId_ = targetUserId;
  setParameter(std::string("TargetUserId"), std::to_string(targetUserId));
}

long DescribeTransferDomainsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeTransferDomainsRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeTransferDomainsRequest::getLang() const {
  return lang_;
}

void DescribeTransferDomainsRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeTransferDomainsRequest::getDomainName() const {
  return domainName_;
}

void DescribeTransferDomainsRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeTransferDomainsRequest::getTransferType() const {
  return transferType_;
}

void DescribeTransferDomainsRequest::setTransferType(const std::string &transferType) {
  transferType_ = transferType;
  setParameter(std::string("TransferType"), transferType);
}

std::string DescribeTransferDomainsRequest::getUserClientIp() const {
  return userClientIp_;
}

void DescribeTransferDomainsRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

