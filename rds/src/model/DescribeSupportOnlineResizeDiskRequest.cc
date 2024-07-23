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

#include <alibabacloud/rds/model/DescribeSupportOnlineResizeDiskRequest.h>

using AlibabaCloud::Rds::Model::DescribeSupportOnlineResizeDiskRequest;

DescribeSupportOnlineResizeDiskRequest::DescribeSupportOnlineResizeDiskRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeSupportOnlineResizeDisk") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSupportOnlineResizeDiskRequest::~DescribeSupportOnlineResizeDiskRequest() {}

long DescribeSupportOnlineResizeDiskRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeSupportOnlineResizeDiskRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeSupportOnlineResizeDiskRequest::getClientToken() const {
  return clientToken_;
}

void DescribeSupportOnlineResizeDiskRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DescribeSupportOnlineResizeDiskRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeSupportOnlineResizeDiskRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeSupportOnlineResizeDiskRequest::getRegionId() const {
  return regionId_;
}

void DescribeSupportOnlineResizeDiskRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeSupportOnlineResizeDiskRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeSupportOnlineResizeDiskRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DescribeSupportOnlineResizeDiskRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeSupportOnlineResizeDiskRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeSupportOnlineResizeDiskRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeSupportOnlineResizeDiskRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeSupportOnlineResizeDiskRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeSupportOnlineResizeDiskRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

