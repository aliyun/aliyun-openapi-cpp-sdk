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

#include <alibabacloud/ens/model/DescribeForwardTableEntriesRequest.h>

using AlibabaCloud::Ens::Model::DescribeForwardTableEntriesRequest;

DescribeForwardTableEntriesRequest::DescribeForwardTableEntriesRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DescribeForwardTableEntries") {
  setMethod(HttpRequest::Method::Post);
}

DescribeForwardTableEntriesRequest::~DescribeForwardTableEntriesRequest() {}

std::string DescribeForwardTableEntriesRequest::getInternalIp() const {
  return internalIp_;
}

void DescribeForwardTableEntriesRequest::setInternalIp(const std::string &internalIp) {
  internalIp_ = internalIp;
  setParameter(std::string("InternalIp"), internalIp);
}

std::string DescribeForwardTableEntriesRequest::getExternalIp() const {
  return externalIp_;
}

void DescribeForwardTableEntriesRequest::setExternalIp(const std::string &externalIp) {
  externalIp_ = externalIp;
  setParameter(std::string("ExternalIp"), externalIp);
}

std::string DescribeForwardTableEntriesRequest::getIpProtocol() const {
  return ipProtocol_;
}

void DescribeForwardTableEntriesRequest::setIpProtocol(const std::string &ipProtocol) {
  ipProtocol_ = ipProtocol;
  setParameter(std::string("IpProtocol"), ipProtocol);
}

int DescribeForwardTableEntriesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeForwardTableEntriesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

bool DescribeForwardTableEntriesRequest::getShowDetail() const {
  return showDetail_;
}

void DescribeForwardTableEntriesRequest::setShowDetail(bool showDetail) {
  showDetail_ = showDetail;
  setParameter(std::string("ShowDetail"), showDetail ? "true" : "false");
}

std::string DescribeForwardTableEntriesRequest::getForwardEntryId() const {
  return forwardEntryId_;
}

void DescribeForwardTableEntriesRequest::setForwardEntryId(const std::string &forwardEntryId) {
  forwardEntryId_ = forwardEntryId;
  setParameter(std::string("ForwardEntryId"), forwardEntryId);
}

int DescribeForwardTableEntriesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeForwardTableEntriesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeForwardTableEntriesRequest::getNatGatewayId() const {
  return natGatewayId_;
}

void DescribeForwardTableEntriesRequest::setNatGatewayId(const std::string &natGatewayId) {
  natGatewayId_ = natGatewayId;
  setParameter(std::string("NatGatewayId"), natGatewayId);
}

std::string DescribeForwardTableEntriesRequest::getForwardEntryName() const {
  return forwardEntryName_;
}

void DescribeForwardTableEntriesRequest::setForwardEntryName(const std::string &forwardEntryName) {
  forwardEntryName_ = forwardEntryName;
  setParameter(std::string("ForwardEntryName"), forwardEntryName);
}

