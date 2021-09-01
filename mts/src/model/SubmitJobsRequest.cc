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

#include <alibabacloud/mts/model/SubmitJobsRequest.h>

using AlibabaCloud::Mts::Model::SubmitJobsRequest;

SubmitJobsRequest::SubmitJobsRequest()
    : RpcServiceRequest("mts", "2014-06-18", "SubmitJobs") {
  setMethod(HttpRequest::Method::Post);
}

SubmitJobsRequest::~SubmitJobsRequest() {}

std::string SubmitJobsRequest::getOutputs() const {
  return outputs_;
}

void SubmitJobsRequest::setOutputs(const std::string &outputs) {
  outputs_ = outputs;
  setParameter(std::string("Outputs"), outputs);
}

long SubmitJobsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void SubmitJobsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string SubmitJobsRequest::getOutputLocation() const {
  return outputLocation_;
}

void SubmitJobsRequest::setOutputLocation(const std::string &outputLocation) {
  outputLocation_ = outputLocation;
  setParameter(std::string("OutputLocation"), outputLocation);
}

std::string SubmitJobsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void SubmitJobsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string SubmitJobsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void SubmitJobsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string SubmitJobsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void SubmitJobsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long SubmitJobsRequest::getOwnerId() const {
  return ownerId_;
}

void SubmitJobsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string SubmitJobsRequest::getPipelineId() const {
  return pipelineId_;
}

void SubmitJobsRequest::setPipelineId(const std::string &pipelineId) {
  pipelineId_ = pipelineId;
  setParameter(std::string("PipelineId"), pipelineId);
}

std::string SubmitJobsRequest::getInput() const {
  return input_;
}

void SubmitJobsRequest::setInput(const std::string &input) {
  input_ = input;
  setParameter(std::string("Input"), input);
}

std::string SubmitJobsRequest::getOutputBucket() const {
  return outputBucket_;
}

void SubmitJobsRequest::setOutputBucket(const std::string &outputBucket) {
  outputBucket_ = outputBucket;
  setParameter(std::string("OutputBucket"), outputBucket);
}

