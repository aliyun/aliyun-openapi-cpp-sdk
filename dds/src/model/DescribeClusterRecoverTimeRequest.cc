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

#include <alibabacloud/dds/model/DescribeClusterRecoverTimeRequest.h>

using AlibabaCloud::Dds::Model::DescribeClusterRecoverTimeRequest;

DescribeClusterRecoverTimeRequest::DescribeClusterRecoverTimeRequest()
    : RpcServiceRequest("dds", "2015-12-01", "DescribeClusterRecoverTime") {
  setMethod(HttpRequest::Method::Post);
}

DescribeClusterRecoverTimeRequest::~DescribeClusterRecoverTimeRequest() {}

long DescribeClusterRecoverTimeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeClusterRecoverTimeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeClusterRecoverTimeRequest::getSrcRegion() const {
  return srcRegion_;
}

void DescribeClusterRecoverTimeRequest::setSrcRegion(const std::string &srcRegion) {
  srcRegion_ = srcRegion;
  setParameter(std::string("SrcRegion"), srcRegion);
}

std::string DescribeClusterRecoverTimeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeClusterRecoverTimeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeClusterRecoverTimeRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeClusterRecoverTimeRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeClusterRecoverTimeRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeClusterRecoverTimeRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DescribeClusterRecoverTimeRequest::getDestRegion() const {
  return destRegion_;
}

void DescribeClusterRecoverTimeRequest::setDestRegion(const std::string &destRegion) {
  destRegion_ = destRegion;
  setParameter(std::string("DestRegion"), destRegion);
}

std::string DescribeClusterRecoverTimeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeClusterRecoverTimeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeClusterRecoverTimeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeClusterRecoverTimeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeClusterRecoverTimeRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeClusterRecoverTimeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

