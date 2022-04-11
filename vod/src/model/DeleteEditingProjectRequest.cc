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

#include <alibabacloud/vod/model/DeleteEditingProjectRequest.h>

using AlibabaCloud::Vod::Model::DeleteEditingProjectRequest;

DeleteEditingProjectRequest::DeleteEditingProjectRequest()
    : RpcServiceRequest("vod", "2017-03-21", "DeleteEditingProject") {
  setMethod(HttpRequest::Method::Post);
}

DeleteEditingProjectRequest::~DeleteEditingProjectRequest() {}

std::string DeleteEditingProjectRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteEditingProjectRequest::setResourceOwnerId(const std::string &resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), resourceOwnerId);
}

std::string DeleteEditingProjectRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteEditingProjectRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteEditingProjectRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteEditingProjectRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DeleteEditingProjectRequest::getProjectIds() const {
  return projectIds_;
}

void DeleteEditingProjectRequest::setProjectIds(const std::string &projectIds) {
  projectIds_ = projectIds;
  setParameter(std::string("ProjectIds"), projectIds);
}

std::string DeleteEditingProjectRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteEditingProjectRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

std::string DeleteEditingProjectRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DeleteEditingProjectRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

