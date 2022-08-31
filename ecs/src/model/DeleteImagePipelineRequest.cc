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

#include <alibabacloud/ecs/model/DeleteImagePipelineRequest.h>

using AlibabaCloud::Ecs::Model::DeleteImagePipelineRequest;

DeleteImagePipelineRequest::DeleteImagePipelineRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DeleteImagePipeline") {
  setMethod(HttpRequest::Method::Post);
}

DeleteImagePipelineRequest::~DeleteImagePipelineRequest() {}

std::string DeleteImagePipelineRequest::getImagePipelineId() const {
  return imagePipelineId_;
}

void DeleteImagePipelineRequest::setImagePipelineId(const std::string &imagePipelineId) {
  imagePipelineId_ = imagePipelineId;
  setParameter(std::string("ImagePipelineId"), imagePipelineId);
}

long DeleteImagePipelineRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteImagePipelineRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteImagePipelineRequest::getRegionId() const {
  return regionId_;
}

void DeleteImagePipelineRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteImagePipelineRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteImagePipelineRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteImagePipelineRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteImagePipelineRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteImagePipelineRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteImagePipelineRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

