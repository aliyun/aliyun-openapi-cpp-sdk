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

#include <alibabacloud/live/model/GetEdgeTranscodeJobRequest.h>

using AlibabaCloud::Live::Model::GetEdgeTranscodeJobRequest;

GetEdgeTranscodeJobRequest::GetEdgeTranscodeJobRequest()
    : RpcServiceRequest("live", "2016-11-01", "GetEdgeTranscodeJob") {
  setMethod(HttpRequest::Method::Post);
}

GetEdgeTranscodeJobRequest::~GetEdgeTranscodeJobRequest() {}

std::string GetEdgeTranscodeJobRequest::getJobId() const {
  return jobId_;
}

void GetEdgeTranscodeJobRequest::setJobId(const std::string &jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), jobId);
}

std::string GetEdgeTranscodeJobRequest::getRegionId() const {
  return regionId_;
}

void GetEdgeTranscodeJobRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string GetEdgeTranscodeJobRequest::getClusterId() const {
  return clusterId_;
}

void GetEdgeTranscodeJobRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

long GetEdgeTranscodeJobRequest::getOwnerId() const {
  return ownerId_;
}

void GetEdgeTranscodeJobRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

