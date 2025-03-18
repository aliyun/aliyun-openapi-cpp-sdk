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

#include <alibabacloud/ens/model/DescribeSnatTableEntriesRequest.h>

using AlibabaCloud::Ens::Model::DescribeSnatTableEntriesRequest;

DescribeSnatTableEntriesRequest::DescribeSnatTableEntriesRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DescribeSnatTableEntries") {
  setMethod(HttpRequest::Method::Get);
}

DescribeSnatTableEntriesRequest::~DescribeSnatTableEntriesRequest() {}

std::string DescribeSnatTableEntriesRequest::getSnatIp() const {
  return snatIp_;
}

void DescribeSnatTableEntriesRequest::setSnatIp(const std::string &snatIp) {
  snatIp_ = snatIp;
  setParameter(std::string("SnatIp"), snatIp);
}

std::string DescribeSnatTableEntriesRequest::getSnatEntryId() const {
  return snatEntryId_;
}

void DescribeSnatTableEntriesRequest::setSnatEntryId(const std::string &snatEntryId) {
  snatEntryId_ = snatEntryId;
  setParameter(std::string("SnatEntryId"), snatEntryId);
}

std::vector<DescribeSnatTableEntriesRequest::std::string> DescribeSnatTableEntriesRequest::getSnatIps() const {
  return snatIps_;
}

void DescribeSnatTableEntriesRequest::setSnatIps(const std::vector<DescribeSnatTableEntriesRequest::std::string> &snatIps) {
  snatIps_ = snatIps;
  for(int dep1 = 0; dep1 != snatIps.size(); dep1++) {
    setParameter(std::string("SnatIps") + "." + std::to_string(dep1 + 1), snatIps[dep1]);
  }
}

std::string DescribeSnatTableEntriesRequest::getSourceCIDR() const {
  return sourceCIDR_;
}

void DescribeSnatTableEntriesRequest::setSourceCIDR(const std::string &sourceCIDR) {
  sourceCIDR_ = sourceCIDR;
  setParameter(std::string("SourceCIDR"), sourceCIDR);
}

int DescribeSnatTableEntriesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeSnatTableEntriesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

bool DescribeSnatTableEntriesRequest::getShowDetail() const {
  return showDetail_;
}

void DescribeSnatTableEntriesRequest::setShowDetail(bool showDetail) {
  showDetail_ = showDetail;
  setParameter(std::string("ShowDetail"), showDetail ? "true" : "false");
}

int DescribeSnatTableEntriesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeSnatTableEntriesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeSnatTableEntriesRequest::getNatGatewayId() const {
  return natGatewayId_;
}

void DescribeSnatTableEntriesRequest::setNatGatewayId(const std::string &natGatewayId) {
  natGatewayId_ = natGatewayId;
  setParameter(std::string("NatGatewayId"), natGatewayId);
}

std::string DescribeSnatTableEntriesRequest::getSnatEntryName() const {
  return snatEntryName_;
}

void DescribeSnatTableEntriesRequest::setSnatEntryName(const std::string &snatEntryName) {
  snatEntryName_ = snatEntryName;
  setParameter(std::string("SnatEntryName"), snatEntryName);
}

