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

#include <alibabacloud/clickhouse/model/UpgradeMinorVersionRequest.h>

using AlibabaCloud::Clickhouse::Model::UpgradeMinorVersionRequest;

UpgradeMinorVersionRequest::UpgradeMinorVersionRequest()
    : RpcServiceRequest("clickhouse", "2019-11-11", "UpgradeMinorVersion") {
  setMethod(HttpRequest::Method::Post);
}

UpgradeMinorVersionRequest::~UpgradeMinorVersionRequest() {}

long UpgradeMinorVersionRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UpgradeMinorVersionRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

bool UpgradeMinorVersionRequest::getUpgradeImmediately() const {
  return upgradeImmediately_;
}

void UpgradeMinorVersionRequest::setUpgradeImmediately(bool upgradeImmediately) {
  upgradeImmediately_ = upgradeImmediately;
  setParameter(std::string("UpgradeImmediately"), upgradeImmediately ? "true" : "false");
}

std::string UpgradeMinorVersionRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void UpgradeMinorVersionRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string UpgradeMinorVersionRequest::getUpgradeVersion() const {
  return upgradeVersion_;
}

void UpgradeMinorVersionRequest::setUpgradeVersion(const std::string &upgradeVersion) {
  upgradeVersion_ = upgradeVersion;
  setParameter(std::string("UpgradeVersion"), upgradeVersion);
}

std::string UpgradeMinorVersionRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UpgradeMinorVersionRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string UpgradeMinorVersionRequest::getDBClusterId() const {
  return dBClusterId_;
}

void UpgradeMinorVersionRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string UpgradeMinorVersionRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void UpgradeMinorVersionRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long UpgradeMinorVersionRequest::getOwnerId() const {
  return ownerId_;
}

void UpgradeMinorVersionRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UpgradeMinorVersionRequest::getUpgradeTime() const {
  return upgradeTime_;
}

void UpgradeMinorVersionRequest::setUpgradeTime(const std::string &upgradeTime) {
  upgradeTime_ = upgradeTime;
  setParameter(std::string("UpgradeTime"), upgradeTime);
}

