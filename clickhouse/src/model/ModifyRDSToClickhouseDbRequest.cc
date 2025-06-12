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

#include <alibabacloud/clickhouse/model/ModifyRDSToClickhouseDbRequest.h>

using AlibabaCloud::Clickhouse::Model::ModifyRDSToClickhouseDbRequest;

ModifyRDSToClickhouseDbRequest::ModifyRDSToClickhouseDbRequest()
    : RpcServiceRequest("clickhouse", "2019-11-11", "ModifyRDSToClickhouseDb") {
  setMethod(HttpRequest::Method::Post);
}

ModifyRDSToClickhouseDbRequest::~ModifyRDSToClickhouseDbRequest() {}

long ModifyRDSToClickhouseDbRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyRDSToClickhouseDbRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyRDSToClickhouseDbRequest::getRdsVpcId() const {
  return rdsVpcId_;
}

void ModifyRDSToClickhouseDbRequest::setRdsVpcId(const std::string &rdsVpcId) {
  rdsVpcId_ = rdsVpcId;
  setParameter(std::string("RdsVpcId"), rdsVpcId);
}

std::string ModifyRDSToClickhouseDbRequest::getCkPassword() const {
  return ckPassword_;
}

void ModifyRDSToClickhouseDbRequest::setCkPassword(const std::string &ckPassword) {
  ckPassword_ = ckPassword;
  setParameter(std::string("CkPassword"), ckPassword);
}

std::string ModifyRDSToClickhouseDbRequest::getRdsSynTables() const {
  return rdsSynTables_;
}

void ModifyRDSToClickhouseDbRequest::setRdsSynTables(const std::string &rdsSynTables) {
  rdsSynTables_ = rdsSynTables;
  setParameter(std::string("RdsSynTables"), rdsSynTables);
}

std::string ModifyRDSToClickhouseDbRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyRDSToClickhouseDbRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyRDSToClickhouseDbRequest::getRdsPassword() const {
  return rdsPassword_;
}

void ModifyRDSToClickhouseDbRequest::setRdsPassword(const std::string &rdsPassword) {
  rdsPassword_ = rdsPassword;
  setParameter(std::string("RdsPassword"), rdsPassword);
}

std::string ModifyRDSToClickhouseDbRequest::getCkUserName() const {
  return ckUserName_;
}

void ModifyRDSToClickhouseDbRequest::setCkUserName(const std::string &ckUserName) {
  ckUserName_ = ckUserName;
  setParameter(std::string("CkUserName"), ckUserName);
}

std::string ModifyRDSToClickhouseDbRequest::getRdsSynDb() const {
  return rdsSynDb_;
}

void ModifyRDSToClickhouseDbRequest::setRdsSynDb(const std::string &rdsSynDb) {
  rdsSynDb_ = rdsSynDb;
  setParameter(std::string("RdsSynDb"), rdsSynDb);
}

std::string ModifyRDSToClickhouseDbRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyRDSToClickhouseDbRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyRDSToClickhouseDbRequest::getDbClusterId() const {
  return dbClusterId_;
}

void ModifyRDSToClickhouseDbRequest::setDbClusterId(const std::string &dbClusterId) {
  dbClusterId_ = dbClusterId;
  setParameter(std::string("DbClusterId"), dbClusterId);
}

std::string ModifyRDSToClickhouseDbRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyRDSToClickhouseDbRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string ModifyRDSToClickhouseDbRequest::getRdsId() const {
  return rdsId_;
}

void ModifyRDSToClickhouseDbRequest::setRdsId(const std::string &rdsId) {
  rdsId_ = rdsId;
  setParameter(std::string("RdsId"), rdsId);
}

long ModifyRDSToClickhouseDbRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyRDSToClickhouseDbRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

long ModifyRDSToClickhouseDbRequest::getClickhousePort() const {
  return clickhousePort_;
}

void ModifyRDSToClickhouseDbRequest::setClickhousePort(long clickhousePort) {
  clickhousePort_ = clickhousePort;
  setParameter(std::string("ClickhousePort"), std::to_string(clickhousePort));
}

long ModifyRDSToClickhouseDbRequest::getLimitUpper() const {
  return limitUpper_;
}

void ModifyRDSToClickhouseDbRequest::setLimitUpper(long limitUpper) {
  limitUpper_ = limitUpper;
  setParameter(std::string("LimitUpper"), std::to_string(limitUpper));
}

long ModifyRDSToClickhouseDbRequest::getRdsPort() const {
  return rdsPort_;
}

void ModifyRDSToClickhouseDbRequest::setRdsPort(long rdsPort) {
  rdsPort_ = rdsPort;
  setParameter(std::string("RdsPort"), std::to_string(rdsPort));
}

bool ModifyRDSToClickhouseDbRequest::getSkipUnsupported() const {
  return skipUnsupported_;
}

void ModifyRDSToClickhouseDbRequest::setSkipUnsupported(bool skipUnsupported) {
  skipUnsupported_ = skipUnsupported;
  setParameter(std::string("SkipUnsupported"), skipUnsupported ? "true" : "false");
}

std::string ModifyRDSToClickhouseDbRequest::getRdsUserName() const {
  return rdsUserName_;
}

void ModifyRDSToClickhouseDbRequest::setRdsUserName(const std::string &rdsUserName) {
  rdsUserName_ = rdsUserName;
  setParameter(std::string("RdsUserName"), rdsUserName);
}

