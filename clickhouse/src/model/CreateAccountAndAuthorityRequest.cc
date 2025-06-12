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

#include <alibabacloud/clickhouse/model/CreateAccountAndAuthorityRequest.h>

using AlibabaCloud::Clickhouse::Model::CreateAccountAndAuthorityRequest;

CreateAccountAndAuthorityRequest::CreateAccountAndAuthorityRequest()
    : RpcServiceRequest("clickhouse", "2019-11-11", "CreateAccountAndAuthority") {
  setMethod(HttpRequest::Method::Post);
}

CreateAccountAndAuthorityRequest::~CreateAccountAndAuthorityRequest() {}

long CreateAccountAndAuthorityRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateAccountAndAuthorityRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateAccountAndAuthorityRequest::getTotalDictionaries() const {
  return totalDictionaries_;
}

void CreateAccountAndAuthorityRequest::setTotalDictionaries(const std::string &totalDictionaries) {
  totalDictionaries_ = totalDictionaries;
  setParameter(std::string("TotalDictionaries"), totalDictionaries);
}

std::string CreateAccountAndAuthorityRequest::getAccountDescription() const {
  return accountDescription_;
}

void CreateAccountAndAuthorityRequest::setAccountDescription(const std::string &accountDescription) {
  accountDescription_ = accountDescription;
  setParameter(std::string("AccountDescription"), accountDescription);
}

std::string CreateAccountAndAuthorityRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateAccountAndAuthorityRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateAccountAndAuthorityRequest::getAccountName() const {
  return accountName_;
}

void CreateAccountAndAuthorityRequest::setAccountName(const std::string &accountName) {
  accountName_ = accountName;
  setParameter(std::string("AccountName"), accountName);
}

std::string CreateAccountAndAuthorityRequest::getDmlAuthority() const {
  return dmlAuthority_;
}

void CreateAccountAndAuthorityRequest::setDmlAuthority(const std::string &dmlAuthority) {
  dmlAuthority_ = dmlAuthority;
  setParameter(std::string("DmlAuthority"), dmlAuthority);
}

std::string CreateAccountAndAuthorityRequest::getRegionId() const {
  return regionId_;
}

void CreateAccountAndAuthorityRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateAccountAndAuthorityRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateAccountAndAuthorityRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateAccountAndAuthorityRequest::getDBClusterId() const {
  return dBClusterId_;
}

void CreateAccountAndAuthorityRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string CreateAccountAndAuthorityRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateAccountAndAuthorityRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string CreateAccountAndAuthorityRequest::getAllowDatabases() const {
  return allowDatabases_;
}

void CreateAccountAndAuthorityRequest::setAllowDatabases(const std::string &allowDatabases) {
  allowDatabases_ = allowDatabases;
  setParameter(std::string("AllowDatabases"), allowDatabases);
}

std::string CreateAccountAndAuthorityRequest::getAllowDictionaries() const {
  return allowDictionaries_;
}

void CreateAccountAndAuthorityRequest::setAllowDictionaries(const std::string &allowDictionaries) {
  allowDictionaries_ = allowDictionaries;
  setParameter(std::string("AllowDictionaries"), allowDictionaries);
}

long CreateAccountAndAuthorityRequest::getOwnerId() const {
  return ownerId_;
}

void CreateAccountAndAuthorityRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateAccountAndAuthorityRequest::getAccountPassword() const {
  return accountPassword_;
}

void CreateAccountAndAuthorityRequest::setAccountPassword(const std::string &accountPassword) {
  accountPassword_ = accountPassword;
  setParameter(std::string("AccountPassword"), accountPassword);
}

bool CreateAccountAndAuthorityRequest::getDdlAuthority() const {
  return ddlAuthority_;
}

void CreateAccountAndAuthorityRequest::setDdlAuthority(bool ddlAuthority) {
  ddlAuthority_ = ddlAuthority;
  setParameter(std::string("DdlAuthority"), ddlAuthority ? "true" : "false");
}

std::string CreateAccountAndAuthorityRequest::getTotalDatabases() const {
  return totalDatabases_;
}

void CreateAccountAndAuthorityRequest::setTotalDatabases(const std::string &totalDatabases) {
  totalDatabases_ = totalDatabases;
  setParameter(std::string("TotalDatabases"), totalDatabases);
}

