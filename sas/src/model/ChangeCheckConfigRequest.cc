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

#include <alibabacloud/sas/model/ChangeCheckConfigRequest.h>

using AlibabaCloud::Sas::Model::ChangeCheckConfigRequest;

ChangeCheckConfigRequest::ChangeCheckConfigRequest()
    : RpcServiceRequest("sas", "2018-12-03", "ChangeCheckConfig") {
  setMethod(HttpRequest::Method::Post);
}

ChangeCheckConfigRequest::~ChangeCheckConfigRequest() {}

std::vector<long> ChangeCheckConfigRequest::getStandardIds() const {
  return standardIds_;
}

void ChangeCheckConfigRequest::setStandardIds(const std::vector<long> &standardIds) {
  standardIds_ = standardIds;
}

int ChangeCheckConfigRequest::getEndTime() const {
  return endTime_;
}

void ChangeCheckConfigRequest::setEndTime(int endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

std::vector<int> ChangeCheckConfigRequest::getCycleDays() const {
  return cycleDays_;
}

void ChangeCheckConfigRequest::setCycleDays(const std::vector<int> &cycleDays) {
  cycleDays_ = cycleDays;
}

int ChangeCheckConfigRequest::getStartTime() const {
  return startTime_;
}

void ChangeCheckConfigRequest::setStartTime(int startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string ChangeCheckConfigRequest::getSourceIp() const {
  return sourceIp_;
}

void ChangeCheckConfigRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ChangeCheckConfigRequest::getRegionId() const {
  return regionId_;
}

void ChangeCheckConfigRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

