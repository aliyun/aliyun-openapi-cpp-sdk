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

#include <alibabacloud/polardb/model/DescribeDBClusterServerlessConfRequest.h>

using AlibabaCloud::Polardb::Model::DescribeDBClusterServerlessConfRequest;

DescribeDBClusterServerlessConfRequest::DescribeDBClusterServerlessConfRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DescribeDBClusterServerlessConf") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDBClusterServerlessConfRequest::~DescribeDBClusterServerlessConfRequest() {}

long DescribeDBClusterServerlessConfRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeDBClusterServerlessConfRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeDBClusterServerlessConfRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDBClusterServerlessConfRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDBClusterServerlessConfRequest::getRequestType() const {
  return requestType_;
}

void DescribeDBClusterServerlessConfRequest::setRequestType(const std::string &requestType) {
  requestType_ = requestType;
  setParameter(std::string("RequestType"), requestType);
}

std::string DescribeDBClusterServerlessConfRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeDBClusterServerlessConfRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeDBClusterServerlessConfRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeDBClusterServerlessConfRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeDBClusterServerlessConfRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeDBClusterServerlessConfRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeDBClusterServerlessConfRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDBClusterServerlessConfRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

