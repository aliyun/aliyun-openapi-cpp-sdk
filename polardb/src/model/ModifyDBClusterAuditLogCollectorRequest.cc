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

#include <alibabacloud/polardb/model/ModifyDBClusterAuditLogCollectorRequest.h>

using AlibabaCloud::Polardb::Model::ModifyDBClusterAuditLogCollectorRequest;

ModifyDBClusterAuditLogCollectorRequest::ModifyDBClusterAuditLogCollectorRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "ModifyDBClusterAuditLogCollector") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBClusterAuditLogCollectorRequest::~ModifyDBClusterAuditLogCollectorRequest() {}

long ModifyDBClusterAuditLogCollectorRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyDBClusterAuditLogCollectorRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyDBClusterAuditLogCollectorRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDBClusterAuditLogCollectorRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyDBClusterAuditLogCollectorRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyDBClusterAuditLogCollectorRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyDBClusterAuditLogCollectorRequest::getDBClusterId() const {
  return dBClusterId_;
}

void ModifyDBClusterAuditLogCollectorRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string ModifyDBClusterAuditLogCollectorRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyDBClusterAuditLogCollectorRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string ModifyDBClusterAuditLogCollectorRequest::getCollectorStatus() const {
  return collectorStatus_;
}

void ModifyDBClusterAuditLogCollectorRequest::setCollectorStatus(const std::string &collectorStatus) {
  collectorStatus_ = collectorStatus;
  setParameter(std::string("CollectorStatus"), collectorStatus);
}

long ModifyDBClusterAuditLogCollectorRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyDBClusterAuditLogCollectorRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

