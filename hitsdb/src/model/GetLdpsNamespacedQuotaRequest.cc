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

#include <alibabacloud/hitsdb/model/GetLdpsNamespacedQuotaRequest.h>

using AlibabaCloud::Hitsdb::Model::GetLdpsNamespacedQuotaRequest;

GetLdpsNamespacedQuotaRequest::GetLdpsNamespacedQuotaRequest()
    : RpcServiceRequest("hitsdb", "2020-06-15", "GetLdpsNamespacedQuota") {
  setMethod(HttpRequest::Method::Post);
}

GetLdpsNamespacedQuotaRequest::~GetLdpsNamespacedQuotaRequest() {}

long GetLdpsNamespacedQuotaRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void GetLdpsNamespacedQuotaRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string GetLdpsNamespacedQuotaRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void GetLdpsNamespacedQuotaRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string GetLdpsNamespacedQuotaRequest::getSecurityToken() const {
  return securityToken_;
}

void GetLdpsNamespacedQuotaRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string GetLdpsNamespacedQuotaRequest::getRegionId() const {
  return regionId_;
}

void GetLdpsNamespacedQuotaRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string GetLdpsNamespacedQuotaRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void GetLdpsNamespacedQuotaRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string GetLdpsNamespacedQuotaRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void GetLdpsNamespacedQuotaRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long GetLdpsNamespacedQuotaRequest::getOwnerId() const {
  return ownerId_;
}

void GetLdpsNamespacedQuotaRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string GetLdpsNamespacedQuotaRequest::getInstanceId() const {
  return instanceId_;
}

void GetLdpsNamespacedQuotaRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string GetLdpsNamespacedQuotaRequest::get_Namespace() const {
  return _namespace_;
}

void GetLdpsNamespacedQuotaRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

