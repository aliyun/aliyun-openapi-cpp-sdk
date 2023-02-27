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

#include <alibabacloud/ice/model/SubmitMediaProducingJobRequest.h>

using AlibabaCloud::ICE::Model::SubmitMediaProducingJobRequest;

SubmitMediaProducingJobRequest::SubmitMediaProducingJobRequest()
    : RpcServiceRequest("ice", "2020-11-09", "SubmitMediaProducingJob") {
  setMethod(HttpRequest::Method::Post);
}

SubmitMediaProducingJobRequest::~SubmitMediaProducingJobRequest() {}

std::string SubmitMediaProducingJobRequest::getClientToken() const {
  return clientToken_;
}

void SubmitMediaProducingJobRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string SubmitMediaProducingJobRequest::getOutputMediaTarget() const {
  return outputMediaTarget_;
}

void SubmitMediaProducingJobRequest::setOutputMediaTarget(const std::string &outputMediaTarget) {
  outputMediaTarget_ = outputMediaTarget;
  setParameter(std::string("OutputMediaTarget"), outputMediaTarget);
}

std::string SubmitMediaProducingJobRequest::getSource() const {
  return source_;
}

void SubmitMediaProducingJobRequest::setSource(const std::string &source) {
  source_ = source;
  setParameter(std::string("Source"), source);
}

long SubmitMediaProducingJobRequest::getResourceRealOwnerId() const {
  return resourceRealOwnerId_;
}

void SubmitMediaProducingJobRequest::setResourceRealOwnerId(long resourceRealOwnerId) {
  resourceRealOwnerId_ = resourceRealOwnerId;
  setParameter(std::string("ResourceRealOwnerId"), std::to_string(resourceRealOwnerId));
}

std::string SubmitMediaProducingJobRequest::getEditingProduceConfig() const {
  return editingProduceConfig_;
}

void SubmitMediaProducingJobRequest::setEditingProduceConfig(const std::string &editingProduceConfig) {
  editingProduceConfig_ = editingProduceConfig;
  setParameter(std::string("EditingProduceConfig"), editingProduceConfig);
}

std::string SubmitMediaProducingJobRequest::getUserData() const {
  return userData_;
}

void SubmitMediaProducingJobRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

std::string SubmitMediaProducingJobRequest::getOutputMediaConfig() const {
  return outputMediaConfig_;
}

void SubmitMediaProducingJobRequest::setOutputMediaConfig(const std::string &outputMediaConfig) {
  outputMediaConfig_ = outputMediaConfig;
  setParameter(std::string("OutputMediaConfig"), outputMediaConfig);
}

std::string SubmitMediaProducingJobRequest::getProjectId() const {
  return projectId_;
}

void SubmitMediaProducingJobRequest::setProjectId(const std::string &projectId) {
  projectId_ = projectId;
  setParameter(std::string("ProjectId"), projectId);
}

std::string SubmitMediaProducingJobRequest::getTemplateId() const {
  return templateId_;
}

void SubmitMediaProducingJobRequest::setTemplateId(const std::string &templateId) {
  templateId_ = templateId;
  setParameter(std::string("TemplateId"), templateId);
}

std::string SubmitMediaProducingJobRequest::getTimeline() const {
  return timeline_;
}

void SubmitMediaProducingJobRequest::setTimeline(const std::string &timeline) {
  timeline_ = timeline;
  setParameter(std::string("Timeline"), timeline);
}

std::string SubmitMediaProducingJobRequest::getProjectMetadata() const {
  return projectMetadata_;
}

void SubmitMediaProducingJobRequest::setProjectMetadata(const std::string &projectMetadata) {
  projectMetadata_ = projectMetadata;
  setParameter(std::string("ProjectMetadata"), projectMetadata);
}

std::string SubmitMediaProducingJobRequest::getClipsParam() const {
  return clipsParam_;
}

void SubmitMediaProducingJobRequest::setClipsParam(const std::string &clipsParam) {
  clipsParam_ = clipsParam;
  setParameter(std::string("ClipsParam"), clipsParam);
}

std::string SubmitMediaProducingJobRequest::getMediaMarks() const {
  return mediaMarks_;
}

void SubmitMediaProducingJobRequest::setMediaMarks(const std::string &mediaMarks) {
  mediaMarks_ = mediaMarks;
  setParameter(std::string("MediaMarks"), mediaMarks);
}

