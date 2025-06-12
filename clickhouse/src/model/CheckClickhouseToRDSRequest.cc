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

#include <alibabacloud/clickhouse/model/CheckClickhouseToRDSRequest.h>

using AlibabaCloud::Clickhouse::Model::CheckClickhouseToRDSRequest;

CheckClickhouseToRDSRequest::CheckClickhouseToRDSRequest()
    : RpcServiceRequest("clickhouse", "2019-11-11", "CheckClickhouseToRDS") {
  setMethod(HttpRequest::Method::Post);
}

CheckClickhouseToRDSRequest::~CheckClickhouseToRDSRequest() {}

long CheckClickhouseToRDSRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CheckClickhouseToRDSRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CheckClickhouseToRDSRequest::getRdsVpcId() const {
  return rdsVpcId_;
}

void CheckClickhouseToRDSRequest::setRdsVpcId(const std::string &rdsVpcId) {
  rdsVpcId_ = rdsVpcId;
  setParameter(std::string("RdsVpcId"), rdsVpcId);
}

std::string CheckClickhouseToRDSRequest::getCkPassword() const {
  return ckPassword_;
}

void CheckClickhouseToRDSRequest::setCkPassword(const std::string &ckPassword) {
  ckPassword_ = ckPassword;
  setParameter(std::string("CkPassword"), ckPassword);
}

std::string CheckClickhouseToRDSRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CheckClickhouseToRDSRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CheckClickhouseToRDSRequest::getRdsPassword() const {
  return rdsPassword_;
}

void CheckClickhouseToRDSRequest::setRdsPassword(const std::string &rdsPassword) {
  rdsPassword_ = rdsPassword;
  setParameter(std::string("RdsPassword"), rdsPassword);
}

std::string CheckClickhouseToRDSRequest::getCkUserName() const {
  return ckUserName_;
}

void CheckClickhouseToRDSRequest::setCkUserName(const std::string &ckUserName) {
  ckUserName_ = ckUserName;
  setParameter(std::string("CkUserName"), ckUserName);
}

std::string CheckClickhouseToRDSRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CheckClickhouseToRDSRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CheckClickhouseToRDSRequest::getDbClusterId() const {
  return dbClusterId_;
}

void CheckClickhouseToRDSRequest::setDbClusterId(const std::string &dbClusterId) {
  dbClusterId_ = dbClusterId;
  setParameter(std::string("DbClusterId"), dbClusterId);
}

std::string CheckClickhouseToRDSRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CheckClickhouseToRDSRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string CheckClickhouseToRDSRequest::getRdsId() const {
  return rdsId_;
}

void CheckClickhouseToRDSRequest::setRdsId(const std::string &rdsId) {
  rdsId_ = rdsId;
  setParameter(std::string("RdsId"), rdsId);
}

long CheckClickhouseToRDSRequest::getOwnerId() const {
  return ownerId_;
}

void CheckClickhouseToRDSRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

long CheckClickhouseToRDSRequest::getClickhousePort() const {
  return clickhousePort_;
}

void CheckClickhouseToRDSRequest::setClickhousePort(long clickhousePort) {
  clickhousePort_ = clickhousePort;
  setParameter(std::string("ClickhousePort"), std::to_string(clickhousePort));
}

long CheckClickhouseToRDSRequest::getRdsPort() const {
  return rdsPort_;
}

void CheckClickhouseToRDSRequest::setRdsPort(long rdsPort) {
  rdsPort_ = rdsPort;
  setParameter(std::string("RdsPort"), std::to_string(rdsPort));
}

std::string CheckClickhouseToRDSRequest::getRdsVpcUrl() const {
  return rdsVpcUrl_;
}

void CheckClickhouseToRDSRequest::setRdsVpcUrl(const std::string &rdsVpcUrl) {
  rdsVpcUrl_ = rdsVpcUrl;
  setParameter(std::string("RdsVpcUrl"), rdsVpcUrl);
}

std::string CheckClickhouseToRDSRequest::getRdsUserName() const {
  return rdsUserName_;
}

void CheckClickhouseToRDSRequest::setRdsUserName(const std::string &rdsUserName) {
  rdsUserName_ = rdsUserName;
  setParameter(std::string("RdsUserName"), rdsUserName);
}

