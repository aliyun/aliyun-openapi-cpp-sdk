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

#include <alibabacloud/rds/model/DescribeInstanceCrossBackupPolicyRequest.h>

using AlibabaCloud::Rds::Model::DescribeInstanceCrossBackupPolicyRequest;

DescribeInstanceCrossBackupPolicyRequest::DescribeInstanceCrossBackupPolicyRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeInstanceCrossBackupPolicy") {
  setMethod(HttpRequest::Method::Post);
}

DescribeInstanceCrossBackupPolicyRequest::~DescribeInstanceCrossBackupPolicyRequest() {}

long DescribeInstanceCrossBackupPolicyRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeInstanceCrossBackupPolicyRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeInstanceCrossBackupPolicyRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeInstanceCrossBackupPolicyRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long DescribeInstanceCrossBackupPolicyRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeInstanceCrossBackupPolicyRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeInstanceCrossBackupPolicyRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeInstanceCrossBackupPolicyRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeInstanceCrossBackupPolicyRequest::getRegionId() const {
  return regionId_;
}

void DescribeInstanceCrossBackupPolicyRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeInstanceCrossBackupPolicyRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeInstanceCrossBackupPolicyRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

