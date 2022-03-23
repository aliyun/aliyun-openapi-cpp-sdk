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

#include <alibabacloud/r-kvstore/model/ModifyAuditLogConfigRequest.h>

using AlibabaCloud::R_kvstore::Model::ModifyAuditLogConfigRequest;

ModifyAuditLogConfigRequest::ModifyAuditLogConfigRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "ModifyAuditLogConfig") {
  setMethod(HttpRequest::Method::Post);
}

ModifyAuditLogConfigRequest::~ModifyAuditLogConfigRequest() {}

long ModifyAuditLogConfigRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyAuditLogConfigRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyAuditLogConfigRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyAuditLogConfigRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyAuditLogConfigRequest::getSecurityToken() const {
  return securityToken_;
}

void ModifyAuditLogConfigRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string ModifyAuditLogConfigRequest::getAuditCommand() const {
  return auditCommand_;
}

void ModifyAuditLogConfigRequest::setAuditCommand(const std::string &auditCommand) {
  auditCommand_ = auditCommand;
  setParameter(std::string("AuditCommand"), auditCommand);
}

std::string ModifyAuditLogConfigRequest::getAuditLogSwitchSource() const {
  return auditLogSwitchSource_;
}

void ModifyAuditLogConfigRequest::setAuditLogSwitchSource(const std::string &auditLogSwitchSource) {
  auditLogSwitchSource_ = auditLogSwitchSource;
  setParameter(std::string("AuditLogSwitchSource"), auditLogSwitchSource);
}

std::string ModifyAuditLogConfigRequest::getProxyAudit() const {
  return proxyAudit_;
}

void ModifyAuditLogConfigRequest::setProxyAudit(const std::string &proxyAudit) {
  proxyAudit_ = proxyAudit;
  setParameter(std::string("ProxyAudit"), proxyAudit);
}

int ModifyAuditLogConfigRequest::getRetention() const {
  return retention_;
}

void ModifyAuditLogConfigRequest::setRetention(int retention) {
  retention_ = retention;
  setParameter(std::string("Retention"), std::to_string(retention));
}

std::string ModifyAuditLogConfigRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyAuditLogConfigRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyAuditLogConfigRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyAuditLogConfigRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

bool ModifyAuditLogConfigRequest::getDbAudit() const {
  return dbAudit_;
}

void ModifyAuditLogConfigRequest::setDbAudit(bool dbAudit) {
  dbAudit_ = dbAudit;
  setParameter(std::string("DbAudit"), dbAudit ? "true" : "false");
}

long ModifyAuditLogConfigRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyAuditLogConfigRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyAuditLogConfigRequest::getServiceType() const {
  return serviceType_;
}

void ModifyAuditLogConfigRequest::setServiceType(const std::string &serviceType) {
  serviceType_ = serviceType;
  setParameter(std::string("ServiceType"), serviceType);
}

std::string ModifyAuditLogConfigRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyAuditLogConfigRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

