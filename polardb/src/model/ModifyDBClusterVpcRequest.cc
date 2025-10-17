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

#include <alibabacloud/polardb/model/ModifyDBClusterVpcRequest.h>

using AlibabaCloud::Polardb::Model::ModifyDBClusterVpcRequest;

ModifyDBClusterVpcRequest::ModifyDBClusterVpcRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "ModifyDBClusterVpc") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBClusterVpcRequest::~ModifyDBClusterVpcRequest() {}

long ModifyDBClusterVpcRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyDBClusterVpcRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyDBClusterVpcRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDBClusterVpcRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyDBClusterVpcRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyDBClusterVpcRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyDBClusterVpcRequest::getDBClusterId() const {
  return dBClusterId_;
}

void ModifyDBClusterVpcRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string ModifyDBClusterVpcRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyDBClusterVpcRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyDBClusterVpcRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyDBClusterVpcRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyDBClusterVpcRequest::getVSwitchId() const {
  return vSwitchId_;
}

void ModifyDBClusterVpcRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string ModifyDBClusterVpcRequest::getExistedEndpointSwitchType() const {
  return existedEndpointSwitchType_;
}

void ModifyDBClusterVpcRequest::setExistedEndpointSwitchType(const std::string &existedEndpointSwitchType) {
  existedEndpointSwitchType_ = existedEndpointSwitchType;
  setParameter(std::string("ExistedEndpointSwitchType"), existedEndpointSwitchType);
}

std::string ModifyDBClusterVpcRequest::getVPCId() const {
  return vPCId_;
}

void ModifyDBClusterVpcRequest::setVPCId(const std::string &vPCId) {
  vPCId_ = vPCId;
  setParameter(std::string("VPCId"), vPCId);
}

