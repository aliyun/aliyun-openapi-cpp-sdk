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

#include <alibabacloud/alikafka/model/ReleaseInstanceRequest.h>

using AlibabaCloud::Alikafka::Model::ReleaseInstanceRequest;

ReleaseInstanceRequest::ReleaseInstanceRequest()
    : RpcServiceRequest("alikafka", "2019-09-16", "ReleaseInstance") {
  setMethod(HttpRequest::Method::Post);
}

ReleaseInstanceRequest::~ReleaseInstanceRequest() {}

bool ReleaseInstanceRequest::getForceDeleteInstance() const {
  return forceDeleteInstance_;
}

void ReleaseInstanceRequest::setForceDeleteInstance(bool forceDeleteInstance) {
  forceDeleteInstance_ = forceDeleteInstance;
  setParameter(std::string("ForceDeleteInstance"), forceDeleteInstance ? "true" : "false");
}

std::string ReleaseInstanceRequest::getInstanceId() const {
  return instanceId_;
}

void ReleaseInstanceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ReleaseInstanceRequest::getRegionId() const {
  return regionId_;
}

void ReleaseInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool ReleaseInstanceRequest::getReleaseIgnoreTime() const {
  return releaseIgnoreTime_;
}

void ReleaseInstanceRequest::setReleaseIgnoreTime(bool releaseIgnoreTime) {
  releaseIgnoreTime_ = releaseIgnoreTime;
  setParameter(std::string("ReleaseIgnoreTime"), releaseIgnoreTime ? "true" : "false");
}

