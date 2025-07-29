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

#include <alibabacloud/live/model/StartEdgeTranscodeJobRequest.h>

using AlibabaCloud::Live::Model::StartEdgeTranscodeJobRequest;

StartEdgeTranscodeJobRequest::StartEdgeTranscodeJobRequest()
    : RpcServiceRequest("live", "2016-11-01", "StartEdgeTranscodeJob") {
  setMethod(HttpRequest::Method::Post);
}

StartEdgeTranscodeJobRequest::~StartEdgeTranscodeJobRequest() {}

std::string StartEdgeTranscodeJobRequest::getJobId() const {
  return jobId_;
}

void StartEdgeTranscodeJobRequest::setJobId(const std::string &jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), jobId);
}

std::string StartEdgeTranscodeJobRequest::getRegionId() const {
  return regionId_;
}

void StartEdgeTranscodeJobRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string StartEdgeTranscodeJobRequest::getClusterId() const {
  return clusterId_;
}

void StartEdgeTranscodeJobRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

long StartEdgeTranscodeJobRequest::getOwnerId() const {
  return ownerId_;
}

void StartEdgeTranscodeJobRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

