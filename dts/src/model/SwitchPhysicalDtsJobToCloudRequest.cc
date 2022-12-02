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

#include <alibabacloud/dts/model/SwitchPhysicalDtsJobToCloudRequest.h>

using AlibabaCloud::Dts::Model::SwitchPhysicalDtsJobToCloudRequest;

SwitchPhysicalDtsJobToCloudRequest::SwitchPhysicalDtsJobToCloudRequest()
    : RpcServiceRequest("dts", "2020-01-01", "SwitchPhysicalDtsJobToCloud") {
  setMethod(HttpRequest::Method::Post);
}

SwitchPhysicalDtsJobToCloudRequest::~SwitchPhysicalDtsJobToCloudRequest() {}

std::string SwitchPhysicalDtsJobToCloudRequest::getResetCheckpoint() const {
  return resetCheckpoint_;
}

void SwitchPhysicalDtsJobToCloudRequest::setResetCheckpoint(const std::string &resetCheckpoint) {
  resetCheckpoint_ = resetCheckpoint;
  setParameter(std::string("ResetCheckpoint"), resetCheckpoint);
}

std::string SwitchPhysicalDtsJobToCloudRequest::getRegionId() const {
  return regionId_;
}

void SwitchPhysicalDtsJobToCloudRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string SwitchPhysicalDtsJobToCloudRequest::getResumeHoldJob() const {
  return resumeHoldJob_;
}

void SwitchPhysicalDtsJobToCloudRequest::setResumeHoldJob(const std::string &resumeHoldJob) {
  resumeHoldJob_ = resumeHoldJob;
  setParameter(std::string("ResumeHoldJob"), resumeHoldJob);
}

std::string SwitchPhysicalDtsJobToCloudRequest::getDtsJobId() const {
  return dtsJobId_;
}

void SwitchPhysicalDtsJobToCloudRequest::setDtsJobId(const std::string &dtsJobId) {
  dtsJobId_ = dtsJobId;
  setParameter(std::string("DtsJobId"), dtsJobId);
}

std::string SwitchPhysicalDtsJobToCloudRequest::getDtsInstanceId() const {
  return dtsInstanceId_;
}

void SwitchPhysicalDtsJobToCloudRequest::setDtsInstanceId(const std::string &dtsInstanceId) {
  dtsInstanceId_ = dtsInstanceId;
  setParameter(std::string("DtsInstanceId"), dtsInstanceId);
}

std::string SwitchPhysicalDtsJobToCloudRequest::getSynchronizationDirection() const {
  return synchronizationDirection_;
}

void SwitchPhysicalDtsJobToCloudRequest::setSynchronizationDirection(const std::string &synchronizationDirection) {
  synchronizationDirection_ = synchronizationDirection;
  setParameter(std::string("SynchronizationDirection"), synchronizationDirection);
}

