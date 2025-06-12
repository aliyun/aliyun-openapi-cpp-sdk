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

#include <alibabacloud/clickhouse/model/CreateRDSToClickhouseDbRequest.h>

using AlibabaCloud::Clickhouse::Model::CreateRDSToClickhouseDbRequest;

CreateRDSToClickhouseDbRequest::CreateRDSToClickhouseDbRequest()
    : RpcServiceRequest("clickhouse", "2019-11-11", "CreateRDSToClickhouseDb") {
  setMethod(HttpRequest::Method::Post);
}

CreateRDSToClickhouseDbRequest::~CreateRDSToClickhouseDbRequest() {}

long CreateRDSToClickhouseDbRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateRDSToClickhouseDbRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateRDSToClickhouseDbRequest::getSynDbTables() const {
  return synDbTables_;
}

void CreateRDSToClickhouseDbRequest::setSynDbTables(const std::string &synDbTables) {
  synDbTables_ = synDbTables;
  setParameter(std::string("SynDbTables"), synDbTables);
}

std::string CreateRDSToClickhouseDbRequest::getRdsVpcId() const {
  return rdsVpcId_;
}

void CreateRDSToClickhouseDbRequest::setRdsVpcId(const std::string &rdsVpcId) {
  rdsVpcId_ = rdsVpcId;
  setParameter(std::string("RdsVpcId"), rdsVpcId);
}

std::string CreateRDSToClickhouseDbRequest::getCkPassword() const {
  return ckPassword_;
}

void CreateRDSToClickhouseDbRequest::setCkPassword(const std::string &ckPassword) {
  ckPassword_ = ckPassword;
  setParameter(std::string("CkPassword"), ckPassword);
}

std::string CreateRDSToClickhouseDbRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateRDSToClickhouseDbRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateRDSToClickhouseDbRequest::getRdsPassword() const {
  return rdsPassword_;
}

void CreateRDSToClickhouseDbRequest::setRdsPassword(const std::string &rdsPassword) {
  rdsPassword_ = rdsPassword;
  setParameter(std::string("RdsPassword"), rdsPassword);
}

std::string CreateRDSToClickhouseDbRequest::getCkUserName() const {
  return ckUserName_;
}

void CreateRDSToClickhouseDbRequest::setCkUserName(const std::string &ckUserName) {
  ckUserName_ = ckUserName;
  setParameter(std::string("CkUserName"), ckUserName);
}

std::string CreateRDSToClickhouseDbRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateRDSToClickhouseDbRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateRDSToClickhouseDbRequest::getDbClusterId() const {
  return dbClusterId_;
}

void CreateRDSToClickhouseDbRequest::setDbClusterId(const std::string &dbClusterId) {
  dbClusterId_ = dbClusterId;
  setParameter(std::string("DbClusterId"), dbClusterId);
}

std::string CreateRDSToClickhouseDbRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateRDSToClickhouseDbRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string CreateRDSToClickhouseDbRequest::getRdsId() const {
  return rdsId_;
}

void CreateRDSToClickhouseDbRequest::setRdsId(const std::string &rdsId) {
  rdsId_ = rdsId;
  setParameter(std::string("RdsId"), rdsId);
}

long CreateRDSToClickhouseDbRequest::getOwnerId() const {
  return ownerId_;
}

void CreateRDSToClickhouseDbRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

long CreateRDSToClickhouseDbRequest::getClickhousePort() const {
  return clickhousePort_;
}

void CreateRDSToClickhouseDbRequest::setClickhousePort(long clickhousePort) {
  clickhousePort_ = clickhousePort;
  setParameter(std::string("ClickhousePort"), std::to_string(clickhousePort));
}

long CreateRDSToClickhouseDbRequest::getLimitUpper() const {
  return limitUpper_;
}

void CreateRDSToClickhouseDbRequest::setLimitUpper(long limitUpper) {
  limitUpper_ = limitUpper;
  setParameter(std::string("LimitUpper"), std::to_string(limitUpper));
}

long CreateRDSToClickhouseDbRequest::getRdsPort() const {
  return rdsPort_;
}

void CreateRDSToClickhouseDbRequest::setRdsPort(long rdsPort) {
  rdsPort_ = rdsPort;
  setParameter(std::string("RdsPort"), std::to_string(rdsPort));
}

bool CreateRDSToClickhouseDbRequest::getSkipUnsupported() const {
  return skipUnsupported_;
}

void CreateRDSToClickhouseDbRequest::setSkipUnsupported(bool skipUnsupported) {
  skipUnsupported_ = skipUnsupported;
  setParameter(std::string("SkipUnsupported"), skipUnsupported ? "true" : "false");
}

std::string CreateRDSToClickhouseDbRequest::getRdsVpcUrl() const {
  return rdsVpcUrl_;
}

void CreateRDSToClickhouseDbRequest::setRdsVpcUrl(const std::string &rdsVpcUrl) {
  rdsVpcUrl_ = rdsVpcUrl;
  setParameter(std::string("RdsVpcUrl"), rdsVpcUrl);
}

std::string CreateRDSToClickhouseDbRequest::getRdsUserName() const {
  return rdsUserName_;
}

void CreateRDSToClickhouseDbRequest::setRdsUserName(const std::string &rdsUserName) {
  rdsUserName_ = rdsUserName;
  setParameter(std::string("RdsUserName"), rdsUserName);
}

