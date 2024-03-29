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

#include <alibabacloud/mts/model/SubmitSubtitleJobRequest.h>

using AlibabaCloud::Mts::Model::SubmitSubtitleJobRequest;

SubmitSubtitleJobRequest::SubmitSubtitleJobRequest()
    : RpcServiceRequest("mts", "2014-06-18", "SubmitSubtitleJob") {
  setMethod(HttpRequest::Method::Post);
}

SubmitSubtitleJobRequest::~SubmitSubtitleJobRequest() {}

long SubmitSubtitleJobRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void SubmitSubtitleJobRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string SubmitSubtitleJobRequest::getOutputConfig() const {
  return outputConfig_;
}

void SubmitSubtitleJobRequest::setOutputConfig(const std::string &outputConfig) {
  outputConfig_ = outputConfig;
  setParameter(std::string("OutputConfig"), outputConfig);
}

std::string SubmitSubtitleJobRequest::getInputConfig() const {
  return inputConfig_;
}

void SubmitSubtitleJobRequest::setInputConfig(const std::string &inputConfig) {
  inputConfig_ = inputConfig;
  setParameter(std::string("InputConfig"), inputConfig);
}

std::string SubmitSubtitleJobRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void SubmitSubtitleJobRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string SubmitSubtitleJobRequest::getUserData() const {
  return userData_;
}

void SubmitSubtitleJobRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

std::string SubmitSubtitleJobRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void SubmitSubtitleJobRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string SubmitSubtitleJobRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void SubmitSubtitleJobRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long SubmitSubtitleJobRequest::getOwnerId() const {
  return ownerId_;
}

void SubmitSubtitleJobRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string SubmitSubtitleJobRequest::getPipelineId() const {
  return pipelineId_;
}

void SubmitSubtitleJobRequest::setPipelineId(const std::string &pipelineId) {
  pipelineId_ = pipelineId;
  setParameter(std::string("PipelineId"), pipelineId);
}

