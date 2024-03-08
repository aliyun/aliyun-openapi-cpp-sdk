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

#include <alibabacloud/dds/model/ModifyInstanceVpcAuthModeRequest.h>

using AlibabaCloud::Dds::Model::ModifyInstanceVpcAuthModeRequest;

ModifyInstanceVpcAuthModeRequest::ModifyInstanceVpcAuthModeRequest()
    : RpcServiceRequest("dds", "2015-12-01", "ModifyInstanceVpcAuthMode") {
  setMethod(HttpRequest::Method::Post);
}

ModifyInstanceVpcAuthModeRequest::~ModifyInstanceVpcAuthModeRequest() {}

long ModifyInstanceVpcAuthModeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyInstanceVpcAuthModeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyInstanceVpcAuthModeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyInstanceVpcAuthModeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyInstanceVpcAuthModeRequest::getVpcAuthMode() const {
  return vpcAuthMode_;
}

void ModifyInstanceVpcAuthModeRequest::setVpcAuthMode(const std::string &vpcAuthMode) {
  vpcAuthMode_ = vpcAuthMode;
  setParameter(std::string("VpcAuthMode"), vpcAuthMode);
}

std::string ModifyInstanceVpcAuthModeRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ModifyInstanceVpcAuthModeRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string ModifyInstanceVpcAuthModeRequest::getNodeId() const {
  return nodeId_;
}

void ModifyInstanceVpcAuthModeRequest::setNodeId(const std::string &nodeId) {
  nodeId_ = nodeId;
  setParameter(std::string("NodeId"), nodeId);
}

std::string ModifyInstanceVpcAuthModeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyInstanceVpcAuthModeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyInstanceVpcAuthModeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyInstanceVpcAuthModeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyInstanceVpcAuthModeRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyInstanceVpcAuthModeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

