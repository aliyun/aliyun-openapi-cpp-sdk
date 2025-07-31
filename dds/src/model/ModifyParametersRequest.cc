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

#include <alibabacloud/dds/model/ModifyParametersRequest.h>

using AlibabaCloud::Dds::Model::ModifyParametersRequest;

ModifyParametersRequest::ModifyParametersRequest()
    : RpcServiceRequest("dds", "2015-12-01", "ModifyParameters") {
  setMethod(HttpRequest::Method::Post);
}

ModifyParametersRequest::~ModifyParametersRequest() {}

long ModifyParametersRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyParametersRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyParametersRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyParametersRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyParametersRequest::getSwitchMode() const {
  return switchMode_;
}

void ModifyParametersRequest::setSwitchMode(const std::string &switchMode) {
  switchMode_ = switchMode;
  setParameter(std::string("SwitchMode"), switchMode);
}

std::string ModifyParametersRequest::getRegionId() const {
  return regionId_;
}

void ModifyParametersRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyParametersRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ModifyParametersRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string ModifyParametersRequest::getNodeId() const {
  return nodeId_;
}

void ModifyParametersRequest::setNodeId(const std::string &nodeId) {
  nodeId_ = nodeId;
  setParameter(std::string("NodeId"), nodeId);
}

std::string ModifyParametersRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyParametersRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyParametersRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyParametersRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyParametersRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyParametersRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyParametersRequest::getParameters() const {
  return parameters_;
}

void ModifyParametersRequest::setParameters(const std::string &parameters) {
  parameters_ = parameters;
  setParameter(std::string("Parameters"), parameters);
}

std::string ModifyParametersRequest::getCharacterType() const {
  return characterType_;
}

void ModifyParametersRequest::setCharacterType(const std::string &characterType) {
  characterType_ = characterType;
  setParameter(std::string("CharacterType"), characterType);
}

