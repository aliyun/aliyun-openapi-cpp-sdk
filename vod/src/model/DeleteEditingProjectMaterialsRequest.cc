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

#include <alibabacloud/vod/model/DeleteEditingProjectMaterialsRequest.h>

using AlibabaCloud::Vod::Model::DeleteEditingProjectMaterialsRequest;

DeleteEditingProjectMaterialsRequest::DeleteEditingProjectMaterialsRequest()
    : RpcServiceRequest("vod", "2017-03-21", "DeleteEditingProjectMaterials") {
  setMethod(HttpRequest::Method::Post);
}

DeleteEditingProjectMaterialsRequest::~DeleteEditingProjectMaterialsRequest() {}

std::string DeleteEditingProjectMaterialsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteEditingProjectMaterialsRequest::setResourceOwnerId(const std::string &resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), resourceOwnerId);
}

std::string DeleteEditingProjectMaterialsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DeleteEditingProjectMaterialsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DeleteEditingProjectMaterialsRequest::getMaterialType() const {
  return materialType_;
}

void DeleteEditingProjectMaterialsRequest::setMaterialType(const std::string &materialType) {
  materialType_ = materialType;
  setParameter(std::string("MaterialType"), materialType);
}

std::string DeleteEditingProjectMaterialsRequest::getProjectId() const {
  return projectId_;
}

void DeleteEditingProjectMaterialsRequest::setProjectId(const std::string &projectId) {
  projectId_ = projectId;
  setParameter(std::string("ProjectId"), projectId);
}

std::string DeleteEditingProjectMaterialsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteEditingProjectMaterialsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteEditingProjectMaterialsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteEditingProjectMaterialsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DeleteEditingProjectMaterialsRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteEditingProjectMaterialsRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

std::string DeleteEditingProjectMaterialsRequest::getMaterialIds() const {
  return materialIds_;
}

void DeleteEditingProjectMaterialsRequest::setMaterialIds(const std::string &materialIds) {
  materialIds_ = materialIds;
  setParameter(std::string("MaterialIds"), materialIds);
}

