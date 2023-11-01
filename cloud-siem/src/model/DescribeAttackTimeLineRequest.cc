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

#include <alibabacloud/cloud-siem/model/DescribeAttackTimeLineRequest.h>

using AlibabaCloud::Cloud_siem::Model::DescribeAttackTimeLineRequest;

DescribeAttackTimeLineRequest::DescribeAttackTimeLineRequest()
    : RpcServiceRequest("cloud-siem", "2022-06-16", "DescribeAttackTimeLine") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAttackTimeLineRequest::~DescribeAttackTimeLineRequest() {}

std::string DescribeAttackTimeLineRequest::getAssetName() const {
  return assetName_;
}

void DescribeAttackTimeLineRequest::setAssetName(const std::string &assetName) {
  assetName_ = assetName;
  setBodyParameter(std::string("AssetName"), assetName);
}

long DescribeAttackTimeLineRequest::getStartTime() const {
  return startTime_;
}

void DescribeAttackTimeLineRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setBodyParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string DescribeAttackTimeLineRequest::getRegionId() const {
  return regionId_;
}

void DescribeAttackTimeLineRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

long DescribeAttackTimeLineRequest::getEndTime() const {
  return endTime_;
}

void DescribeAttackTimeLineRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setBodyParameter(std::string("EndTime"), std::to_string(endTime));
}

std::string DescribeAttackTimeLineRequest::getIncidentUuid() const {
  return incidentUuid_;
}

void DescribeAttackTimeLineRequest::setIncidentUuid(const std::string &incidentUuid) {
  incidentUuid_ = incidentUuid;
  setBodyParameter(std::string("IncidentUuid"), incidentUuid);
}

