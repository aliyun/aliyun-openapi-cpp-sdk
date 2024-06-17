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

#include <alibabacloud/polardbx/model/DescribeScaleOutMigrateTaskListRequest.h>

using AlibabaCloud::Polardbx::Model::DescribeScaleOutMigrateTaskListRequest;

DescribeScaleOutMigrateTaskListRequest::DescribeScaleOutMigrateTaskListRequest()
    : RpcServiceRequest("polardbx", "2020-02-02", "DescribeScaleOutMigrateTaskList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeScaleOutMigrateTaskListRequest::~DescribeScaleOutMigrateTaskListRequest() {}

std::string DescribeScaleOutMigrateTaskListRequest::getDBInstanceName() const {
  return dBInstanceName_;
}

void DescribeScaleOutMigrateTaskListRequest::setDBInstanceName(const std::string &dBInstanceName) {
  dBInstanceName_ = dBInstanceName;
  setParameter(std::string("DBInstanceName"), dBInstanceName);
}

long DescribeScaleOutMigrateTaskListRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeScaleOutMigrateTaskListRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeScaleOutMigrateTaskListRequest::getRegionId() const {
  return regionId_;
}

void DescribeScaleOutMigrateTaskListRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeScaleOutMigrateTaskListRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeScaleOutMigrateTaskListRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeScaleOutMigrateTaskListRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeScaleOutMigrateTaskListRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeScaleOutMigrateTaskListRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeScaleOutMigrateTaskListRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

