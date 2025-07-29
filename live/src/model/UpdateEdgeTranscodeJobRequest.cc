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

#include <alibabacloud/live/model/UpdateEdgeTranscodeJobRequest.h>

using AlibabaCloud::Live::Model::UpdateEdgeTranscodeJobRequest;

UpdateEdgeTranscodeJobRequest::UpdateEdgeTranscodeJobRequest()
    : RpcServiceRequest("live", "2016-11-01", "UpdateEdgeTranscodeJob") {
  setMethod(HttpRequest::Method::Post);
}

UpdateEdgeTranscodeJobRequest::~UpdateEdgeTranscodeJobRequest() {}

std::string UpdateEdgeTranscodeJobRequest::getStreamInput() const {
  return streamInput_;
}

void UpdateEdgeTranscodeJobRequest::setStreamInput(const std::string &streamInput) {
  streamInput_ = streamInput;
  setParameter(std::string("StreamInput"), streamInput);
}

std::string UpdateEdgeTranscodeJobRequest::getStreamOutput() const {
  return streamOutput_;
}

void UpdateEdgeTranscodeJobRequest::setStreamOutput(const std::string &streamOutput) {
  streamOutput_ = streamOutput;
  setParameter(std::string("StreamOutput"), streamOutput);
}

std::string UpdateEdgeTranscodeJobRequest::getJobId() const {
  return jobId_;
}

void UpdateEdgeTranscodeJobRequest::setJobId(const std::string &jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), jobId);
}

std::string UpdateEdgeTranscodeJobRequest::getRegionId() const {
  return regionId_;
}

void UpdateEdgeTranscodeJobRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateEdgeTranscodeJobRequest::getClusterId() const {
  return clusterId_;
}

void UpdateEdgeTranscodeJobRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

long UpdateEdgeTranscodeJobRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateEdgeTranscodeJobRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UpdateEdgeTranscodeJobRequest::getTemplateId() const {
  return templateId_;
}

void UpdateEdgeTranscodeJobRequest::setTemplateId(const std::string &templateId) {
  templateId_ = templateId;
  setParameter(std::string("TemplateId"), templateId);
}

std::string UpdateEdgeTranscodeJobRequest::getName() const {
  return name_;
}

void UpdateEdgeTranscodeJobRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

