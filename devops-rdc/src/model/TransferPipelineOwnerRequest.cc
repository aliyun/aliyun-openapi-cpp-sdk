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

#include <alibabacloud/devops-rdc/model/TransferPipelineOwnerRequest.h>

using AlibabaCloud::Devops_rdc::Model::TransferPipelineOwnerRequest;

TransferPipelineOwnerRequest::TransferPipelineOwnerRequest()
    : RpcServiceRequest("devops-rdc", "2020-03-03", "TransferPipelineOwner") {
  setMethod(HttpRequest::Method::Post);
}

TransferPipelineOwnerRequest::~TransferPipelineOwnerRequest() {}

std::string TransferPipelineOwnerRequest::getUserPk() const {
  return userPk_;
}

void TransferPipelineOwnerRequest::setUserPk(const std::string &userPk) {
  userPk_ = userPk;
  setBodyParameter(std::string("UserPk"), userPk);
}

std::string TransferPipelineOwnerRequest::getOrgId() const {
  return orgId_;
}

void TransferPipelineOwnerRequest::setOrgId(const std::string &orgId) {
  orgId_ = orgId;
  setParameter(std::string("OrgId"), orgId);
}

long TransferPipelineOwnerRequest::getPipelineId() const {
  return pipelineId_;
}

void TransferPipelineOwnerRequest::setPipelineId(long pipelineId) {
  pipelineId_ = pipelineId;
  setParameter(std::string("PipelineId"), std::to_string(pipelineId));
}

std::string TransferPipelineOwnerRequest::getNewOwnerId() const {
  return newOwnerId_;
}

void TransferPipelineOwnerRequest::setNewOwnerId(const std::string &newOwnerId) {
  newOwnerId_ = newOwnerId;
  setBodyParameter(std::string("NewOwnerId"), newOwnerId);
}

