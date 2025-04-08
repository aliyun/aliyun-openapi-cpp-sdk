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

#include <alibabacloud/dds/model/DescribeActiveOperationMaintenanceConfigRequest.h>

using AlibabaCloud::Dds::Model::DescribeActiveOperationMaintenanceConfigRequest;

DescribeActiveOperationMaintenanceConfigRequest::DescribeActiveOperationMaintenanceConfigRequest()
    : RpcServiceRequest("dds", "2015-12-01", "DescribeActiveOperationMaintenanceConfig") {
  setMethod(HttpRequest::Method::Post);
}

DescribeActiveOperationMaintenanceConfigRequest::~DescribeActiveOperationMaintenanceConfigRequest() {}

long DescribeActiveOperationMaintenanceConfigRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeActiveOperationMaintenanceConfigRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeActiveOperationMaintenanceConfigRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeActiveOperationMaintenanceConfigRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeActiveOperationMaintenanceConfigRequest::getRegionId() const {
  return regionId_;
}

void DescribeActiveOperationMaintenanceConfigRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeActiveOperationMaintenanceConfigRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeActiveOperationMaintenanceConfigRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeActiveOperationMaintenanceConfigRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeActiveOperationMaintenanceConfigRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeActiveOperationMaintenanceConfigRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeActiveOperationMaintenanceConfigRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

