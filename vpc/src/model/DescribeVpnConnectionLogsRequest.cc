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

#include <alibabacloud/vpc/model/DescribeVpnConnectionLogsRequest.h>

using AlibabaCloud::Vpc::Model::DescribeVpnConnectionLogsRequest;

DescribeVpnConnectionLogsRequest::DescribeVpnConnectionLogsRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DescribeVpnConnectionLogs") {
  setMethod(HttpRequest::Method::Post);
}

DescribeVpnConnectionLogsRequest::~DescribeVpnConnectionLogsRequest() {}

long DescribeVpnConnectionLogsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeVpnConnectionLogsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int DescribeVpnConnectionLogsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeVpnConnectionLogsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int DescribeVpnConnectionLogsRequest::getMinutePeriod() const {
  return minutePeriod_;
}

void DescribeVpnConnectionLogsRequest::setMinutePeriod(int minutePeriod) {
  minutePeriod_ = minutePeriod;
  setParameter(std::string("MinutePeriod"), std::to_string(minutePeriod));
}

std::string DescribeVpnConnectionLogsRequest::getRegionId() const {
  return regionId_;
}

void DescribeVpnConnectionLogsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeVpnConnectionLogsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeVpnConnectionLogsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int DescribeVpnConnectionLogsRequest::getFrom() const {
  return from_;
}

void DescribeVpnConnectionLogsRequest::setFrom(int from) {
  from_ = from;
  setParameter(std::string("From"), std::to_string(from));
}

std::string DescribeVpnConnectionLogsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeVpnConnectionLogsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeVpnConnectionLogsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeVpnConnectionLogsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeVpnConnectionLogsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeVpnConnectionLogsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeVpnConnectionLogsRequest::getVpnConnectionId() const {
  return vpnConnectionId_;
}

void DescribeVpnConnectionLogsRequest::setVpnConnectionId(const std::string &vpnConnectionId) {
  vpnConnectionId_ = vpnConnectionId;
  setParameter(std::string("VpnConnectionId"), vpnConnectionId);
}

std::string DescribeVpnConnectionLogsRequest::getTunnelId() const {
  return tunnelId_;
}

void DescribeVpnConnectionLogsRequest::setTunnelId(const std::string &tunnelId) {
  tunnelId_ = tunnelId;
  setParameter(std::string("TunnelId"), tunnelId);
}

int DescribeVpnConnectionLogsRequest::getTo() const {
  return to_;
}

void DescribeVpnConnectionLogsRequest::setTo(int to) {
  to_ = to;
  setParameter(std::string("To"), std::to_string(to));
}

