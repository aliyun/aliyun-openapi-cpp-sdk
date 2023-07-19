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

#include <alibabacloud/dts/model/ReverseTwoWayDirectionRequest.h>

using AlibabaCloud::Dts::Model::ReverseTwoWayDirectionRequest;

ReverseTwoWayDirectionRequest::ReverseTwoWayDirectionRequest()
    : RpcServiceRequest("dts", "2020-01-01", "ReverseTwoWayDirection") {
  setMethod(HttpRequest::Method::Post);
}

ReverseTwoWayDirectionRequest::~ReverseTwoWayDirectionRequest() {}

std::string ReverseTwoWayDirectionRequest::getRegionId() const {
  return regionId_;
}

void ReverseTwoWayDirectionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool ReverseTwoWayDirectionRequest::getIgnoreErrorSubJob() const {
  return ignoreErrorSubJob_;
}

void ReverseTwoWayDirectionRequest::setIgnoreErrorSubJob(bool ignoreErrorSubJob) {
  ignoreErrorSubJob_ = ignoreErrorSubJob;
  setParameter(std::string("IgnoreErrorSubJob"), ignoreErrorSubJob ? "true" : "false");
}

std::string ReverseTwoWayDirectionRequest::getDtsInstanceId() const {
  return dtsInstanceId_;
}

void ReverseTwoWayDirectionRequest::setDtsInstanceId(const std::string &dtsInstanceId) {
  dtsInstanceId_ = dtsInstanceId;
  setParameter(std::string("DtsInstanceId"), dtsInstanceId);
}

