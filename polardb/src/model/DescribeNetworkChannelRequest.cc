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

#include <alibabacloud/polardb/model/DescribeNetworkChannelRequest.h>

using AlibabaCloud::Polardb::Model::DescribeNetworkChannelRequest;

DescribeNetworkChannelRequest::DescribeNetworkChannelRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DescribeNetworkChannel") {
  setMethod(HttpRequest::Method::Post);
}

DescribeNetworkChannelRequest::~DescribeNetworkChannelRequest() {}

long DescribeNetworkChannelRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeNetworkChannelRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeNetworkChannelRequest::getClientToken() const {
  return clientToken_;
}

void DescribeNetworkChannelRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DescribeNetworkChannelRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeNetworkChannelRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeNetworkChannelRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeNetworkChannelRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeNetworkChannelRequest::getRegionId() const {
  return regionId_;
}

void DescribeNetworkChannelRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeNetworkChannelRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeNetworkChannelRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeNetworkChannelRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeNetworkChannelRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeNetworkChannelRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeNetworkChannelRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeNetworkChannelRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeNetworkChannelRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeNetworkChannelRequest::getChannelName() const {
  return channelName_;
}

void DescribeNetworkChannelRequest::setChannelName(const std::string &channelName) {
  channelName_ = channelName;
  setParameter(std::string("ChannelName"), channelName);
}

std::string DescribeNetworkChannelRequest::getVpcId() const {
  return vpcId_;
}

void DescribeNetworkChannelRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

