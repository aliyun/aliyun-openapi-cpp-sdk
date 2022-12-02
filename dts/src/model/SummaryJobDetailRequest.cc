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

#include <alibabacloud/dts/model/SummaryJobDetailRequest.h>

using AlibabaCloud::Dts::Model::SummaryJobDetailRequest;

SummaryJobDetailRequest::SummaryJobDetailRequest()
    : RpcServiceRequest("dts", "2020-01-01", "SummaryJobDetail") {
  setMethod(HttpRequest::Method::Post);
}

SummaryJobDetailRequest::~SummaryJobDetailRequest() {}

std::string SummaryJobDetailRequest::getStructType() const {
  return structType_;
}

void SummaryJobDetailRequest::setStructType(const std::string &structType) {
  structType_ = structType;
  setParameter(std::string("StructType"), structType);
}

std::string SummaryJobDetailRequest::getRegionId() const {
  return regionId_;
}

void SummaryJobDetailRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string SummaryJobDetailRequest::getDtsJobId() const {
  return dtsJobId_;
}

void SummaryJobDetailRequest::setDtsJobId(const std::string &dtsJobId) {
  dtsJobId_ = dtsJobId;
  setParameter(std::string("DtsJobId"), dtsJobId);
}

std::string SummaryJobDetailRequest::getJobCode() const {
  return jobCode_;
}

void SummaryJobDetailRequest::setJobCode(const std::string &jobCode) {
  jobCode_ = jobCode;
  setParameter(std::string("JobCode"), jobCode);
}

std::string SummaryJobDetailRequest::getDtsInstanceId() const {
  return dtsInstanceId_;
}

void SummaryJobDetailRequest::setDtsInstanceId(const std::string &dtsInstanceId) {
  dtsInstanceId_ = dtsInstanceId;
  setParameter(std::string("DtsInstanceId"), dtsInstanceId);
}

std::string SummaryJobDetailRequest::getSynchronizationDirection() const {
  return synchronizationDirection_;
}

void SummaryJobDetailRequest::setSynchronizationDirection(const std::string &synchronizationDirection) {
  synchronizationDirection_ = synchronizationDirection;
  setParameter(std::string("SynchronizationDirection"), synchronizationDirection);
}

