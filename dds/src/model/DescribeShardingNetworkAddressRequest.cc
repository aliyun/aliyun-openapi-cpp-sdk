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

#include <alibabacloud/dds/model/DescribeShardingNetworkAddressRequest.h>

using AlibabaCloud::Dds::Model::DescribeShardingNetworkAddressRequest;

DescribeShardingNetworkAddressRequest::DescribeShardingNetworkAddressRequest()
    : RpcServiceRequest("dds", "2015-12-01", "DescribeShardingNetworkAddress") {
  setMethod(HttpRequest::Method::Post);
}

DescribeShardingNetworkAddressRequest::~DescribeShardingNetworkAddressRequest() {}

long DescribeShardingNetworkAddressRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeShardingNetworkAddressRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeShardingNetworkAddressRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeShardingNetworkAddressRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeShardingNetworkAddressRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeShardingNetworkAddressRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DescribeShardingNetworkAddressRequest::getNodeId() const {
  return nodeId_;
}

void DescribeShardingNetworkAddressRequest::setNodeId(const std::string &nodeId) {
  nodeId_ = nodeId;
  setParameter(std::string("NodeId"), nodeId);
}

std::string DescribeShardingNetworkAddressRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeShardingNetworkAddressRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeShardingNetworkAddressRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeShardingNetworkAddressRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeShardingNetworkAddressRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeShardingNetworkAddressRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

