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

#include <alibabacloud/ecs/model/StartImagePipelineExecutionRequest.h>

using AlibabaCloud::Ecs::Model::StartImagePipelineExecutionRequest;

StartImagePipelineExecutionRequest::StartImagePipelineExecutionRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "StartImagePipelineExecution") {
  setMethod(HttpRequest::Method::Post);
}

StartImagePipelineExecutionRequest::~StartImagePipelineExecutionRequest() {}

std::string StartImagePipelineExecutionRequest::getImagePipelineId() const {
  return imagePipelineId_;
}

void StartImagePipelineExecutionRequest::setImagePipelineId(const std::string &imagePipelineId) {
  imagePipelineId_ = imagePipelineId;
  setParameter(std::string("ImagePipelineId"), imagePipelineId);
}

long StartImagePipelineExecutionRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void StartImagePipelineExecutionRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string StartImagePipelineExecutionRequest::getClientToken() const {
  return clientToken_;
}

void StartImagePipelineExecutionRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string StartImagePipelineExecutionRequest::getRegionId() const {
  return regionId_;
}

void StartImagePipelineExecutionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<StartImagePipelineExecutionRequest::TemplateTag> StartImagePipelineExecutionRequest::getTemplateTag() const {
  return templateTag_;
}

void StartImagePipelineExecutionRequest::setTemplateTag(const std::vector<StartImagePipelineExecutionRequest::TemplateTag> &templateTag) {
  templateTag_ = templateTag;
  for(int dep1 = 0; dep1 != templateTag.size(); dep1++) {
  auto templateTagObj = templateTag.at(dep1);
  std::string templateTagObjStr = std::string("TemplateTag") + "." + std::to_string(dep1 + 1);
    setParameter(templateTagObjStr + ".Key", templateTagObj.key);
    setParameter(templateTagObjStr + ".Value", templateTagObj.value);
  }
}

std::vector<StartImagePipelineExecutionRequest::Tag> StartImagePipelineExecutionRequest::getTag() const {
  return tag_;
}

void StartImagePipelineExecutionRequest::setTag(const std::vector<StartImagePipelineExecutionRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}

std::string StartImagePipelineExecutionRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void StartImagePipelineExecutionRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string StartImagePipelineExecutionRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void StartImagePipelineExecutionRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long StartImagePipelineExecutionRequest::getOwnerId() const {
  return ownerId_;
}

void StartImagePipelineExecutionRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

