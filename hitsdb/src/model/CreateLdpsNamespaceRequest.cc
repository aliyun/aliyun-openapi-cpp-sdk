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

#include <alibabacloud/hitsdb/model/CreateLdpsNamespaceRequest.h>

using AlibabaCloud::Hitsdb::Model::CreateLdpsNamespaceRequest;

CreateLdpsNamespaceRequest::CreateLdpsNamespaceRequest()
    : RpcServiceRequest("hitsdb", "2020-06-15", "CreateLdpsNamespace") {
  setMethod(HttpRequest::Method::Post);
}

CreateLdpsNamespaceRequest::~CreateLdpsNamespaceRequest() {}

long CreateLdpsNamespaceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateLdpsNamespaceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateLdpsNamespaceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateLdpsNamespaceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateLdpsNamespaceRequest::getSecurityToken() const {
  return securityToken_;
}

void CreateLdpsNamespaceRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string CreateLdpsNamespaceRequest::getRegionId() const {
  return regionId_;
}

void CreateLdpsNamespaceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateLdpsNamespaceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateLdpsNamespaceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateLdpsNamespaceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateLdpsNamespaceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateLdpsNamespaceRequest::getOwnerId() const {
  return ownerId_;
}

void CreateLdpsNamespaceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateLdpsNamespaceRequest::getInstanceId() const {
  return instanceId_;
}

void CreateLdpsNamespaceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string CreateLdpsNamespaceRequest::get_Namespace() const {
  return _namespace_;
}

void CreateLdpsNamespaceRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

