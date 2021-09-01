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

#include <alibabacloud/mts/model/SubmitAnalysisJobRequest.h>

using AlibabaCloud::Mts::Model::SubmitAnalysisJobRequest;

SubmitAnalysisJobRequest::SubmitAnalysisJobRequest()
    : RpcServiceRequest("mts", "2014-06-18", "SubmitAnalysisJob") {
  setMethod(HttpRequest::Method::Post);
}

SubmitAnalysisJobRequest::~SubmitAnalysisJobRequest() {}

long SubmitAnalysisJobRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void SubmitAnalysisJobRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string SubmitAnalysisJobRequest::getAnalysisConfig() const {
  return analysisConfig_;
}

void SubmitAnalysisJobRequest::setAnalysisConfig(const std::string &analysisConfig) {
  analysisConfig_ = analysisConfig;
  setParameter(std::string("AnalysisConfig"), analysisConfig);
}

std::string SubmitAnalysisJobRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void SubmitAnalysisJobRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string SubmitAnalysisJobRequest::getUserData() const {
  return userData_;
}

void SubmitAnalysisJobRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

std::string SubmitAnalysisJobRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void SubmitAnalysisJobRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string SubmitAnalysisJobRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void SubmitAnalysisJobRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long SubmitAnalysisJobRequest::getOwnerId() const {
  return ownerId_;
}

void SubmitAnalysisJobRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string SubmitAnalysisJobRequest::getPriority() const {
  return priority_;
}

void SubmitAnalysisJobRequest::setPriority(const std::string &priority) {
  priority_ = priority;
  setParameter(std::string("Priority"), priority);
}

std::string SubmitAnalysisJobRequest::getPipelineId() const {
  return pipelineId_;
}

void SubmitAnalysisJobRequest::setPipelineId(const std::string &pipelineId) {
  pipelineId_ = pipelineId;
  setParameter(std::string("PipelineId"), pipelineId);
}

std::string SubmitAnalysisJobRequest::getInput() const {
  return input_;
}

void SubmitAnalysisJobRequest::setInput(const std::string &input) {
  input_ = input;
  setParameter(std::string("Input"), input);
}

