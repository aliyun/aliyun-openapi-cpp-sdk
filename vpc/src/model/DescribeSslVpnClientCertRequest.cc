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

#include <alibabacloud/vpc/model/DescribeSslVpnClientCertRequest.h>

using AlibabaCloud::Vpc::Model::DescribeSslVpnClientCertRequest;

DescribeSslVpnClientCertRequest::DescribeSslVpnClientCertRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DescribeSslVpnClientCert") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSslVpnClientCertRequest::~DescribeSslVpnClientCertRequest() {}

long DescribeSslVpnClientCertRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeSslVpnClientCertRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeSslVpnClientCertRequest::getRegionId() const {
  return regionId_;
}

void DescribeSslVpnClientCertRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeSslVpnClientCertRequest::getSslVpnClientCertId() const {
  return sslVpnClientCertId_;
}

void DescribeSslVpnClientCertRequest::setSslVpnClientCertId(const std::string &sslVpnClientCertId) {
  sslVpnClientCertId_ = sslVpnClientCertId;
  setParameter(std::string("SslVpnClientCertId"), sslVpnClientCertId);
}

std::string DescribeSslVpnClientCertRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeSslVpnClientCertRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeSslVpnClientCertRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeSslVpnClientCertRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeSslVpnClientCertRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeSslVpnClientCertRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

