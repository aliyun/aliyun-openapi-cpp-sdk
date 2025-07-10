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

#include <alibabacloud/vpc/model/DescribeSslVpnClientsRequest.h>

using AlibabaCloud::Vpc::Model::DescribeSslVpnClientsRequest;

DescribeSslVpnClientsRequest::DescribeSslVpnClientsRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DescribeSslVpnClients") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSslVpnClientsRequest::~DescribeSslVpnClientsRequest() {}

long DescribeSslVpnClientsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeSslVpnClientsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int DescribeSslVpnClientsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeSslVpnClientsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeSslVpnClientsRequest::getRegionId() const {
  return regionId_;
}

void DescribeSslVpnClientsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeSslVpnClientsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeSslVpnClientsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeSslVpnClientsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeSslVpnClientsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeSslVpnClientsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeSslVpnClientsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DescribeSslVpnClientsRequest::getVpnGatewayId() const {
  return vpnGatewayId_;
}

void DescribeSslVpnClientsRequest::setVpnGatewayId(const std::string &vpnGatewayId) {
  vpnGatewayId_ = vpnGatewayId;
  setParameter(std::string("VpnGatewayId"), vpnGatewayId);
}

long DescribeSslVpnClientsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeSslVpnClientsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

