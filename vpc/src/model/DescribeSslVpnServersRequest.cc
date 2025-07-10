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

#include <alibabacloud/vpc/model/DescribeSslVpnServersRequest.h>

using AlibabaCloud::Vpc::Model::DescribeSslVpnServersRequest;

DescribeSslVpnServersRequest::DescribeSslVpnServersRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DescribeSslVpnServers") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSslVpnServersRequest::~DescribeSslVpnServersRequest() {}

long DescribeSslVpnServersRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeSslVpnServersRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int DescribeSslVpnServersRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeSslVpnServersRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeSslVpnServersRequest::getSslVpnServerId() const {
  return sslVpnServerId_;
}

void DescribeSslVpnServersRequest::setSslVpnServerId(const std::string &sslVpnServerId) {
  sslVpnServerId_ = sslVpnServerId;
  setParameter(std::string("SslVpnServerId"), sslVpnServerId);
}

std::string DescribeSslVpnServersRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeSslVpnServersRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeSslVpnServersRequest::getRegionId() const {
  return regionId_;
}

void DescribeSslVpnServersRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeSslVpnServersRequest::getPageSize() const {
  return pageSize_;
}

void DescribeSslVpnServersRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeSslVpnServersRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeSslVpnServersRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeSslVpnServersRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeSslVpnServersRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DescribeSslVpnServersRequest::getVpnGatewayId() const {
  return vpnGatewayId_;
}

void DescribeSslVpnServersRequest::setVpnGatewayId(const std::string &vpnGatewayId) {
  vpnGatewayId_ = vpnGatewayId;
  setParameter(std::string("VpnGatewayId"), vpnGatewayId);
}

long DescribeSslVpnServersRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeSslVpnServersRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeSslVpnServersRequest::getName() const {
  return name_;
}

void DescribeSslVpnServersRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

