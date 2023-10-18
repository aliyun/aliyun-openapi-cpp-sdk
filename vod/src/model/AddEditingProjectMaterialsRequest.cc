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

#include <alibabacloud/vod/model/AddEditingProjectMaterialsRequest.h>

using AlibabaCloud::Vod::Model::AddEditingProjectMaterialsRequest;

AddEditingProjectMaterialsRequest::AddEditingProjectMaterialsRequest()
    : RpcServiceRequest("vod", "2017-03-21", "AddEditingProjectMaterials") {
  setMethod(HttpRequest::Method::Post);
}

AddEditingProjectMaterialsRequest::~AddEditingProjectMaterialsRequest() {}

std::string AddEditingProjectMaterialsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void AddEditingProjectMaterialsRequest::setResourceOwnerId(const std::string &resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), resourceOwnerId);
}

std::string AddEditingProjectMaterialsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void AddEditingProjectMaterialsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string AddEditingProjectMaterialsRequest::getMaterialType() const {
  return materialType_;
}

void AddEditingProjectMaterialsRequest::setMaterialType(const std::string &materialType) {
  materialType_ = materialType;
  setParameter(std::string("MaterialType"), materialType);
}

std::string AddEditingProjectMaterialsRequest::getProjectId() const {
  return projectId_;
}

void AddEditingProjectMaterialsRequest::setProjectId(const std::string &projectId) {
  projectId_ = projectId;
  setParameter(std::string("ProjectId"), projectId);
}

std::string AddEditingProjectMaterialsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void AddEditingProjectMaterialsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string AddEditingProjectMaterialsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void AddEditingProjectMaterialsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string AddEditingProjectMaterialsRequest::getOwnerId() const {
  return ownerId_;
}

void AddEditingProjectMaterialsRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

std::string AddEditingProjectMaterialsRequest::getMaterialIds() const {
  return materialIds_;
}

void AddEditingProjectMaterialsRequest::setMaterialIds(const std::string &materialIds) {
  materialIds_ = materialIds;
  setParameter(std::string("MaterialIds"), materialIds);
}

