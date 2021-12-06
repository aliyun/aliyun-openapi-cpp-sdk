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

#include <alibabacloud/ecs/model/CancelImagePipelineExecutionRequest.h>

using AlibabaCloud::Ecs::Model::CancelImagePipelineExecutionRequest;

CancelImagePipelineExecutionRequest::CancelImagePipelineExecutionRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "CancelImagePipelineExecution") {
  setMethod(HttpRequest::Method::Post);
}

CancelImagePipelineExecutionRequest::~CancelImagePipelineExecutionRequest() {}

long CancelImagePipelineExecutionRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CancelImagePipelineExecutionRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CancelImagePipelineExecutionRequest::getExecutionId() const {
  return executionId_;
}

void CancelImagePipelineExecutionRequest::setExecutionId(const std::string &executionId) {
  executionId_ = executionId;
  setParameter(std::string("ExecutionId"), executionId);
}

std::string CancelImagePipelineExecutionRequest::getRegionId() const {
  return regionId_;
}

void CancelImagePipelineExecutionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<CancelImagePipelineExecutionRequest::TemplateTag> CancelImagePipelineExecutionRequest::getTemplateTag() const {
  return templateTag_;
}

void CancelImagePipelineExecutionRequest::setTemplateTag(const std::vector<CancelImagePipelineExecutionRequest::TemplateTag> &templateTag) {
  templateTag_ = templateTag;
  for(int dep1 = 0; dep1 != templateTag.size(); dep1++) {
  auto templateTagObj = templateTag.at(dep1);
  std::string templateTagObjStr = std::string("TemplateTag") + "." + std::to_string(dep1 + 1);
    setParameter(templateTagObjStr + ".Key", templateTagObj.key);
    setParameter(templateTagObjStr + ".Value", templateTagObj.value);
  }
}

std::string CancelImagePipelineExecutionRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CancelImagePipelineExecutionRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CancelImagePipelineExecutionRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CancelImagePipelineExecutionRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CancelImagePipelineExecutionRequest::getOwnerId() const {
  return ownerId_;
}

void CancelImagePipelineExecutionRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

