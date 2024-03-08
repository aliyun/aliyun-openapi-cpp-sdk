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

#include <alibabacloud/dds/model/CreateNodeRequest.h>

using AlibabaCloud::Dds::Model::CreateNodeRequest;

CreateNodeRequest::CreateNodeRequest()
    : RpcServiceRequest("dds", "2015-12-01", "CreateNode") {
  setMethod(HttpRequest::Method::Post);
}

CreateNodeRequest::~CreateNodeRequest() {}

long CreateNodeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateNodeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateNodeRequest::getNodeType() const {
  return nodeType_;
}

void CreateNodeRequest::setNodeType(const std::string &nodeType) {
  nodeType_ = nodeType;
  setParameter(std::string("NodeType"), nodeType);
}

std::string CreateNodeRequest::getClientToken() const {
  return clientToken_;
}

void CreateNodeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

int CreateNodeRequest::getReadonlyReplicas() const {
  return readonlyReplicas_;
}

void CreateNodeRequest::setReadonlyReplicas(int readonlyReplicas) {
  readonlyReplicas_ = readonlyReplicas;
  setParameter(std::string("ReadonlyReplicas"), std::to_string(readonlyReplicas));
}

std::string CreateNodeRequest::getCouponNo() const {
  return couponNo_;
}

void CreateNodeRequest::setCouponNo(const std::string &couponNo) {
  couponNo_ = couponNo;
  setParameter(std::string("CouponNo"), couponNo);
}

std::string CreateNodeRequest::getNodeClass() const {
  return nodeClass_;
}

void CreateNodeRequest::setNodeClass(const std::string &nodeClass) {
  nodeClass_ = nodeClass;
  setParameter(std::string("NodeClass"), nodeClass);
}

std::string CreateNodeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateNodeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

bool CreateNodeRequest::getShardDirect() const {
  return shardDirect_;
}

void CreateNodeRequest::setShardDirect(bool shardDirect) {
  shardDirect_ = shardDirect;
  setParameter(std::string("ShardDirect"), shardDirect ? "true" : "false");
}

std::string CreateNodeRequest::getAccountName() const {
  return accountName_;
}

void CreateNodeRequest::setAccountName(const std::string &accountName) {
  accountName_ = accountName;
  setParameter(std::string("AccountName"), accountName);
}

std::string CreateNodeRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void CreateNodeRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string CreateNodeRequest::getBusinessInfo() const {
  return businessInfo_;
}

void CreateNodeRequest::setBusinessInfo(const std::string &businessInfo) {
  businessInfo_ = businessInfo;
  setParameter(std::string("BusinessInfo"), businessInfo);
}

bool CreateNodeRequest::getAutoPay() const {
  return autoPay_;
}

void CreateNodeRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

std::string CreateNodeRequest::getFromApp() const {
  return fromApp_;
}

void CreateNodeRequest::setFromApp(const std::string &fromApp) {
  fromApp_ = fromApp;
  setParameter(std::string("FromApp"), fromApp);
}

std::string CreateNodeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateNodeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

int CreateNodeRequest::getNodeStorage() const {
  return nodeStorage_;
}

void CreateNodeRequest::setNodeStorage(int nodeStorage) {
  nodeStorage_ = nodeStorage;
  setParameter(std::string("NodeStorage"), std::to_string(nodeStorage));
}

std::string CreateNodeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateNodeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateNodeRequest::getOwnerId() const {
  return ownerId_;
}

void CreateNodeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateNodeRequest::getAccountPassword() const {
  return accountPassword_;
}

void CreateNodeRequest::setAccountPassword(const std::string &accountPassword) {
  accountPassword_ = accountPassword;
  setParameter(std::string("AccountPassword"), accountPassword);
}

