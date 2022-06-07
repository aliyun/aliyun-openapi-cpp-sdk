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

#include <alibabacloud/adb/model/DescribeOperatorPermissionRequest.h>

using AlibabaCloud::Adb::Model::DescribeOperatorPermissionRequest;

DescribeOperatorPermissionRequest::DescribeOperatorPermissionRequest()
    : RpcServiceRequest("adb", "2019-03-15", "DescribeOperatorPermission") {
  setMethod(HttpRequest::Method::Post);
}

DescribeOperatorPermissionRequest::~DescribeOperatorPermissionRequest() {}

long DescribeOperatorPermissionRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeOperatorPermissionRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeOperatorPermissionRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeOperatorPermissionRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeOperatorPermissionRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeOperatorPermissionRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeOperatorPermissionRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeOperatorPermissionRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeOperatorPermissionRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeOperatorPermissionRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeOperatorPermissionRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeOperatorPermissionRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

