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

#include <alibabacloud/dds/model/CreateNodeBatchRequest.h>

using AlibabaCloud::Dds::Model::CreateNodeBatchRequest;

CreateNodeBatchRequest::CreateNodeBatchRequest()
    : RpcServiceRequest("dds", "2015-12-01", "CreateNodeBatch") {
  setMethod(HttpRequest::Method::Post);
}

CreateNodeBatchRequest::~CreateNodeBatchRequest() {}

long CreateNodeBatchRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateNodeBatchRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateNodeBatchRequest::getClientToken() const {
  return clientToken_;
}

void CreateNodeBatchRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateNodeBatchRequest::getNodesInfo() const {
  return nodesInfo_;
}

void CreateNodeBatchRequest::setNodesInfo(const std::string &nodesInfo) {
  nodesInfo_ = nodesInfo;
  setParameter(std::string("NodesInfo"), nodesInfo);
}

std::string CreateNodeBatchRequest::getCouponNo() const {
  return couponNo_;
}

void CreateNodeBatchRequest::setCouponNo(const std::string &couponNo) {
  couponNo_ = couponNo;
  setParameter(std::string("CouponNo"), couponNo);
}

std::string CreateNodeBatchRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateNodeBatchRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

bool CreateNodeBatchRequest::getShardDirect() const {
  return shardDirect_;
}

void CreateNodeBatchRequest::setShardDirect(bool shardDirect) {
  shardDirect_ = shardDirect;
  setParameter(std::string("ShardDirect"), shardDirect ? "true" : "false");
}

std::string CreateNodeBatchRequest::getAccountName() const {
  return accountName_;
}

void CreateNodeBatchRequest::setAccountName(const std::string &accountName) {
  accountName_ = accountName;
  setParameter(std::string("AccountName"), accountName);
}

std::string CreateNodeBatchRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void CreateNodeBatchRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string CreateNodeBatchRequest::getBusinessInfo() const {
  return businessInfo_;
}

void CreateNodeBatchRequest::setBusinessInfo(const std::string &businessInfo) {
  businessInfo_ = businessInfo;
  setParameter(std::string("BusinessInfo"), businessInfo);
}

bool CreateNodeBatchRequest::getAutoPay() const {
  return autoPay_;
}

void CreateNodeBatchRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

std::string CreateNodeBatchRequest::getFromApp() const {
  return fromApp_;
}

void CreateNodeBatchRequest::setFromApp(const std::string &fromApp) {
  fromApp_ = fromApp;
  setParameter(std::string("FromApp"), fromApp);
}

std::string CreateNodeBatchRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateNodeBatchRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateNodeBatchRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateNodeBatchRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateNodeBatchRequest::getOwnerId() const {
  return ownerId_;
}

void CreateNodeBatchRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateNodeBatchRequest::getAccountPassword() const {
  return accountPassword_;
}

void CreateNodeBatchRequest::setAccountPassword(const std::string &accountPassword) {
  accountPassword_ = accountPassword;
  setParameter(std::string("AccountPassword"), accountPassword);
}

