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

#include <alibabacloud/live/model/CreateEdgeTranscodeJobRequest.h>

using AlibabaCloud::Live::Model::CreateEdgeTranscodeJobRequest;

CreateEdgeTranscodeJobRequest::CreateEdgeTranscodeJobRequest()
    : RpcServiceRequest("live", "2016-11-01", "CreateEdgeTranscodeJob") {
  setMethod(HttpRequest::Method::Post);
}

CreateEdgeTranscodeJobRequest::~CreateEdgeTranscodeJobRequest() {}

std::string CreateEdgeTranscodeJobRequest::getStreamInput() const {
  return streamInput_;
}

void CreateEdgeTranscodeJobRequest::setStreamInput(const std::string &streamInput) {
  streamInput_ = streamInput;
  setParameter(std::string("StreamInput"), streamInput);
}

std::string CreateEdgeTranscodeJobRequest::getStreamOutput() const {
  return streamOutput_;
}

void CreateEdgeTranscodeJobRequest::setStreamOutput(const std::string &streamOutput) {
  streamOutput_ = streamOutput;
  setParameter(std::string("StreamOutput"), streamOutput);
}

std::string CreateEdgeTranscodeJobRequest::getRegionId() const {
  return regionId_;
}

void CreateEdgeTranscodeJobRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateEdgeTranscodeJobRequest::getClusterId() const {
  return clusterId_;
}

void CreateEdgeTranscodeJobRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

long CreateEdgeTranscodeJobRequest::getOwnerId() const {
  return ownerId_;
}

void CreateEdgeTranscodeJobRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateEdgeTranscodeJobRequest::getTemplateId() const {
  return templateId_;
}

void CreateEdgeTranscodeJobRequest::setTemplateId(const std::string &templateId) {
  templateId_ = templateId;
  setParameter(std::string("TemplateId"), templateId);
}

std::string CreateEdgeTranscodeJobRequest::getName() const {
  return name_;
}

void CreateEdgeTranscodeJobRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

