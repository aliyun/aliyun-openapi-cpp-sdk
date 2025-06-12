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

#include <alibabacloud/clickhouse/model/ModifyAccountAuthorityRequest.h>

using AlibabaCloud::Clickhouse::Model::ModifyAccountAuthorityRequest;

ModifyAccountAuthorityRequest::ModifyAccountAuthorityRequest()
    : RpcServiceRequest("clickhouse", "2019-11-11", "ModifyAccountAuthority") {
  setMethod(HttpRequest::Method::Post);
}

ModifyAccountAuthorityRequest::~ModifyAccountAuthorityRequest() {}

long ModifyAccountAuthorityRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyAccountAuthorityRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyAccountAuthorityRequest::getTotalDictionaries() const {
  return totalDictionaries_;
}

void ModifyAccountAuthorityRequest::setTotalDictionaries(const std::string &totalDictionaries) {
  totalDictionaries_ = totalDictionaries;
  setParameter(std::string("TotalDictionaries"), totalDictionaries);
}

std::string ModifyAccountAuthorityRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyAccountAuthorityRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyAccountAuthorityRequest::getAccountName() const {
  return accountName_;
}

void ModifyAccountAuthorityRequest::setAccountName(const std::string &accountName) {
  accountName_ = accountName;
  setParameter(std::string("AccountName"), accountName);
}

std::string ModifyAccountAuthorityRequest::getDmlAuthority() const {
  return dmlAuthority_;
}

void ModifyAccountAuthorityRequest::setDmlAuthority(const std::string &dmlAuthority) {
  dmlAuthority_ = dmlAuthority;
  setParameter(std::string("DmlAuthority"), dmlAuthority);
}

std::string ModifyAccountAuthorityRequest::getRegionId() const {
  return regionId_;
}

void ModifyAccountAuthorityRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyAccountAuthorityRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyAccountAuthorityRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyAccountAuthorityRequest::getDBClusterId() const {
  return dBClusterId_;
}

void ModifyAccountAuthorityRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string ModifyAccountAuthorityRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyAccountAuthorityRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string ModifyAccountAuthorityRequest::getAllowDatabases() const {
  return allowDatabases_;
}

void ModifyAccountAuthorityRequest::setAllowDatabases(const std::string &allowDatabases) {
  allowDatabases_ = allowDatabases;
  setParameter(std::string("AllowDatabases"), allowDatabases);
}

std::string ModifyAccountAuthorityRequest::getAllowDictionaries() const {
  return allowDictionaries_;
}

void ModifyAccountAuthorityRequest::setAllowDictionaries(const std::string &allowDictionaries) {
  allowDictionaries_ = allowDictionaries;
  setParameter(std::string("AllowDictionaries"), allowDictionaries);
}

long ModifyAccountAuthorityRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyAccountAuthorityRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

bool ModifyAccountAuthorityRequest::getDdlAuthority() const {
  return ddlAuthority_;
}

void ModifyAccountAuthorityRequest::setDdlAuthority(bool ddlAuthority) {
  ddlAuthority_ = ddlAuthority;
  setParameter(std::string("DdlAuthority"), ddlAuthority ? "true" : "false");
}

std::string ModifyAccountAuthorityRequest::getTotalDatabases() const {
  return totalDatabases_;
}

void ModifyAccountAuthorityRequest::setTotalDatabases(const std::string &totalDatabases) {
  totalDatabases_ = totalDatabases;
  setParameter(std::string("TotalDatabases"), totalDatabases);
}

