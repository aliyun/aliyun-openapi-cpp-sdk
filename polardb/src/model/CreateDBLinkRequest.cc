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

#include <alibabacloud/polardb/model/CreateDBLinkRequest.h>

using AlibabaCloud::Polardb::Model::CreateDBLinkRequest;

CreateDBLinkRequest::CreateDBLinkRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "CreateDBLink") {
  setMethod(HttpRequest::Method::Post);
}

CreateDBLinkRequest::~CreateDBLinkRequest() {}

long CreateDBLinkRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateDBLinkRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateDBLinkRequest::getSourceDBName() const {
  return sourceDBName_;
}

void CreateDBLinkRequest::setSourceDBName(const std::string &sourceDBName) {
  sourceDBName_ = sourceDBName;
  setParameter(std::string("SourceDBName"), sourceDBName);
}

std::string CreateDBLinkRequest::getClientToken() const {
  return clientToken_;
}

void CreateDBLinkRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateDBLinkRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateDBLinkRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateDBLinkRequest::getTargetDBName() const {
  return targetDBName_;
}

void CreateDBLinkRequest::setTargetDBName(const std::string &targetDBName) {
  targetDBName_ = targetDBName;
  setParameter(std::string("TargetDBName"), targetDBName);
}

std::string CreateDBLinkRequest::getTargetIp() const {
  return targetIp_;
}

void CreateDBLinkRequest::setTargetIp(const std::string &targetIp) {
  targetIp_ = targetIp;
  setParameter(std::string("TargetIp"), targetIp);
}

std::string CreateDBLinkRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateDBLinkRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateDBLinkRequest::getRegionId() const {
  return regionId_;
}

void CreateDBLinkRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateDBLinkRequest::getDBLinkName() const {
  return dBLinkName_;
}

void CreateDBLinkRequest::setDBLinkName(const std::string &dBLinkName) {
  dBLinkName_ = dBLinkName;
  setParameter(std::string("DBLinkName"), dBLinkName);
}

std::string CreateDBLinkRequest::getTargetPort() const {
  return targetPort_;
}

void CreateDBLinkRequest::setTargetPort(const std::string &targetPort) {
  targetPort_ = targetPort;
  setParameter(std::string("TargetPort"), targetPort);
}

std::string CreateDBLinkRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateDBLinkRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateDBLinkRequest::getTargetDBInstanceName() const {
  return targetDBInstanceName_;
}

void CreateDBLinkRequest::setTargetDBInstanceName(const std::string &targetDBInstanceName) {
  targetDBInstanceName_ = targetDBInstanceName;
  setParameter(std::string("TargetDBInstanceName"), targetDBInstanceName);
}

std::string CreateDBLinkRequest::getDBClusterId() const {
  return dBClusterId_;
}

void CreateDBLinkRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string CreateDBLinkRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateDBLinkRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string CreateDBLinkRequest::getTargetDBPasswd() const {
  return targetDBPasswd_;
}

void CreateDBLinkRequest::setTargetDBPasswd(const std::string &targetDBPasswd) {
  targetDBPasswd_ = targetDBPasswd;
  setParameter(std::string("TargetDBPasswd"), targetDBPasswd);
}

long CreateDBLinkRequest::getOwnerId() const {
  return ownerId_;
}

void CreateDBLinkRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateDBLinkRequest::getTargetDBAccount() const {
  return targetDBAccount_;
}

void CreateDBLinkRequest::setTargetDBAccount(const std::string &targetDBAccount) {
  targetDBAccount_ = targetDBAccount;
  setParameter(std::string("TargetDBAccount"), targetDBAccount);
}

std::string CreateDBLinkRequest::getVpcId() const {
  return vpcId_;
}

void CreateDBLinkRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

