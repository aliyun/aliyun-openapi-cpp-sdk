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

#include <alibabacloud/vpc/model/DescribeSslVpnClientCertsRequest.h>

using AlibabaCloud::Vpc::Model::DescribeSslVpnClientCertsRequest;

DescribeSslVpnClientCertsRequest::DescribeSslVpnClientCertsRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DescribeSslVpnClientCerts") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSslVpnClientCertsRequest::~DescribeSslVpnClientCertsRequest() {}

long DescribeSslVpnClientCertsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeSslVpnClientCertsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int DescribeSslVpnClientCertsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeSslVpnClientCertsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeSslVpnClientCertsRequest::getSslVpnServerId() const {
  return sslVpnServerId_;
}

void DescribeSslVpnClientCertsRequest::setSslVpnServerId(const std::string &sslVpnServerId) {
  sslVpnServerId_ = sslVpnServerId;
  setParameter(std::string("SslVpnServerId"), sslVpnServerId);
}

std::string DescribeSslVpnClientCertsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeSslVpnClientCertsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeSslVpnClientCertsRequest::getRegionId() const {
  return regionId_;
}

void DescribeSslVpnClientCertsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeSslVpnClientCertsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeSslVpnClientCertsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeSslVpnClientCertsRequest::getSslVpnClientCertId() const {
  return sslVpnClientCertId_;
}

void DescribeSslVpnClientCertsRequest::setSslVpnClientCertId(const std::string &sslVpnClientCertId) {
  sslVpnClientCertId_ = sslVpnClientCertId;
  setParameter(std::string("SslVpnClientCertId"), sslVpnClientCertId);
}

std::string DescribeSslVpnClientCertsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeSslVpnClientCertsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeSslVpnClientCertsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeSslVpnClientCertsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeSslVpnClientCertsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeSslVpnClientCertsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeSslVpnClientCertsRequest::getName() const {
  return name_;
}

void DescribeSslVpnClientCertsRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

