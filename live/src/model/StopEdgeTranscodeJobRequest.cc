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

#include <alibabacloud/live/model/StopEdgeTranscodeJobRequest.h>

using AlibabaCloud::Live::Model::StopEdgeTranscodeJobRequest;

StopEdgeTranscodeJobRequest::StopEdgeTranscodeJobRequest()
    : RpcServiceRequest("live", "2016-11-01", "StopEdgeTranscodeJob") {
  setMethod(HttpRequest::Method::Post);
}

StopEdgeTranscodeJobRequest::~StopEdgeTranscodeJobRequest() {}

std::string StopEdgeTranscodeJobRequest::getJobId() const {
  return jobId_;
}

void StopEdgeTranscodeJobRequest::setJobId(const std::string &jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), jobId);
}

std::string StopEdgeTranscodeJobRequest::getRegionId() const {
  return regionId_;
}

void StopEdgeTranscodeJobRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string StopEdgeTranscodeJobRequest::getClusterId() const {
  return clusterId_;
}

void StopEdgeTranscodeJobRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

long StopEdgeTranscodeJobRequest::getOwnerId() const {
  return ownerId_;
}

void StopEdgeTranscodeJobRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

