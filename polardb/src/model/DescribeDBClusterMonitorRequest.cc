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

#include <alibabacloud/polardb/model/DescribeDBClusterMonitorRequest.h>

using AlibabaCloud::Polardb::Model::DescribeDBClusterMonitorRequest;

DescribeDBClusterMonitorRequest::DescribeDBClusterMonitorRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DescribeDBClusterMonitor") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDBClusterMonitorRequest::~DescribeDBClusterMonitorRequest() {}

long DescribeDBClusterMonitorRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeDBClusterMonitorRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeDBClusterMonitorRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDBClusterMonitorRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDBClusterMonitorRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeDBClusterMonitorRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeDBClusterMonitorRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeDBClusterMonitorRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeDBClusterMonitorRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeDBClusterMonitorRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeDBClusterMonitorRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDBClusterMonitorRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

