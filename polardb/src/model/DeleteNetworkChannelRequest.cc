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

#include <alibabacloud/polardb/model/DeleteNetworkChannelRequest.h>

using AlibabaCloud::Polardb::Model::DeleteNetworkChannelRequest;

DeleteNetworkChannelRequest::DeleteNetworkChannelRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DeleteNetworkChannel") {
  setMethod(HttpRequest::Method::Post);
}

DeleteNetworkChannelRequest::~DeleteNetworkChannelRequest() {}

long DeleteNetworkChannelRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteNetworkChannelRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteNetworkChannelRequest::getClientToken() const {
  return clientToken_;
}

void DeleteNetworkChannelRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteNetworkChannelRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DeleteNetworkChannelRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DeleteNetworkChannelRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DeleteNetworkChannelRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DeleteNetworkChannelRequest::getRegionId() const {
  return regionId_;
}

void DeleteNetworkChannelRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteNetworkChannelRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteNetworkChannelRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteNetworkChannelRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DeleteNetworkChannelRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DeleteNetworkChannelRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteNetworkChannelRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteNetworkChannelRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteNetworkChannelRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteNetworkChannelRequest::getChannelName() const {
  return channelName_;
}

void DeleteNetworkChannelRequest::setChannelName(const std::string &channelName) {
  channelName_ = channelName;
  setParameter(std::string("ChannelName"), channelName);
}

std::string DeleteNetworkChannelRequest::getVpcId() const {
  return vpcId_;
}

void DeleteNetworkChannelRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

