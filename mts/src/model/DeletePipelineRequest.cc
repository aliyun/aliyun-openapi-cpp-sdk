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

#include <alibabacloud/mts/model/DeletePipelineRequest.h>

using AlibabaCloud::Mts::Model::DeletePipelineRequest;

DeletePipelineRequest::DeletePipelineRequest()
    : RpcServiceRequest("mts", "2014-06-18", "DeletePipeline") {
  setMethod(HttpRequest::Method::Post);
}

DeletePipelineRequest::~DeletePipelineRequest() {}

long DeletePipelineRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeletePipelineRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeletePipelineRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeletePipelineRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeletePipelineRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeletePipelineRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeletePipelineRequest::getOwnerId() const {
  return ownerId_;
}

void DeletePipelineRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeletePipelineRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DeletePipelineRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DeletePipelineRequest::getPipelineId() const {
  return pipelineId_;
}

void DeletePipelineRequest::setPipelineId(const std::string &pipelineId) {
  pipelineId_ = pipelineId;
  setParameter(std::string("PipelineId"), pipelineId);
}

