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

#include <alibabacloud/polardb/model/CreateNetworkChannelRequest.h>

using AlibabaCloud::Polardb::Model::CreateNetworkChannelRequest;

CreateNetworkChannelRequest::CreateNetworkChannelRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "CreateNetworkChannel") {
  setMethod(HttpRequest::Method::Post);
}

CreateNetworkChannelRequest::~CreateNetworkChannelRequest() {}

long CreateNetworkChannelRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateNetworkChannelRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateNetworkChannelRequest::getNotes() const {
  return notes_;
}

void CreateNetworkChannelRequest::setNotes(const std::string &notes) {
  notes_ = notes;
  setParameter(std::string("Notes"), notes);
}

std::string CreateNetworkChannelRequest::getClientToken() const {
  return clientToken_;
}

void CreateNetworkChannelRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateNetworkChannelRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateNetworkChannelRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateNetworkChannelRequest::getTargetIp() const {
  return targetIp_;
}

void CreateNetworkChannelRequest::setTargetIp(const std::string &targetIp) {
  targetIp_ = targetIp;
  setParameter(std::string("TargetIp"), targetIp);
}

std::string CreateNetworkChannelRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateNetworkChannelRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateNetworkChannelRequest::getRegionId() const {
  return regionId_;
}

void CreateNetworkChannelRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateNetworkChannelRequest::getTargetPort() const {
  return targetPort_;
}

void CreateNetworkChannelRequest::setTargetPort(const std::string &targetPort) {
  targetPort_ = targetPort;
  setParameter(std::string("TargetPort"), targetPort);
}

std::string CreateNetworkChannelRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateNetworkChannelRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateNetworkChannelRequest::getDBClusterId() const {
  return dBClusterId_;
}

void CreateNetworkChannelRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string CreateNetworkChannelRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateNetworkChannelRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateNetworkChannelRequest::getOwnerId() const {
  return ownerId_;
}

void CreateNetworkChannelRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateNetworkChannelRequest::getChannelName() const {
  return channelName_;
}

void CreateNetworkChannelRequest::setChannelName(const std::string &channelName) {
  channelName_ = channelName;
  setParameter(std::string("ChannelName"), channelName);
}

std::string CreateNetworkChannelRequest::getTargetDBClusterId() const {
  return targetDBClusterId_;
}

void CreateNetworkChannelRequest::setTargetDBClusterId(const std::string &targetDBClusterId) {
  targetDBClusterId_ = targetDBClusterId;
  setParameter(std::string("TargetDBClusterId"), targetDBClusterId);
}

std::string CreateNetworkChannelRequest::getVpcId() const {
  return vpcId_;
}

void CreateNetworkChannelRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

