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

#include <alibabacloud/dts/model/StopDtsJobsRequest.h>

using AlibabaCloud::Dts::Model::StopDtsJobsRequest;

StopDtsJobsRequest::StopDtsJobsRequest()
    : RpcServiceRequest("dts", "2020-01-01", "StopDtsJobs") {
  setMethod(HttpRequest::Method::Post);
}

StopDtsJobsRequest::~StopDtsJobsRequest() {}

std::string StopDtsJobsRequest::getDtsJobIds() const {
  return dtsJobIds_;
}

void StopDtsJobsRequest::setDtsJobIds(const std::string &dtsJobIds) {
  dtsJobIds_ = dtsJobIds;
  setParameter(std::string("DtsJobIds"), dtsJobIds);
}

std::string StopDtsJobsRequest::getRegionId() const {
  return regionId_;
}

void StopDtsJobsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

