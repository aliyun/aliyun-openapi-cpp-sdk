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

#include <alibabacloud/adb/model/DescribeDBClusterStatusRequest.h>

using AlibabaCloud::Adb::Model::DescribeDBClusterStatusRequest;

DescribeDBClusterStatusRequest::DescribeDBClusterStatusRequest()
    : RpcServiceRequest("adb", "2019-03-15", "DescribeDBClusterStatus") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDBClusterStatusRequest::~DescribeDBClusterStatusRequest() {}

long DescribeDBClusterStatusRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeDBClusterStatusRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeDBClusterStatusRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDBClusterStatusRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDBClusterStatusRequest::getRegionId() const {
  return regionId_;
}

void DescribeDBClusterStatusRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeDBClusterStatusRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeDBClusterStatusRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeDBClusterStatusRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeDBClusterStatusRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeDBClusterStatusRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDBClusterStatusRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

