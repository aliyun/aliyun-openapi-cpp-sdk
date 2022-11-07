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

#include <alibabacloud/cc5g/model/SubmitDiagnoseTaskForSingleCardRequest.h>

using AlibabaCloud::CC5G::Model::SubmitDiagnoseTaskForSingleCardRequest;

SubmitDiagnoseTaskForSingleCardRequest::SubmitDiagnoseTaskForSingleCardRequest()
    : RpcServiceRequest("cc5g", "2022-03-14", "SubmitDiagnoseTaskForSingleCard") {
  setMethod(HttpRequest::Method::Post);
}

SubmitDiagnoseTaskForSingleCardRequest::~SubmitDiagnoseTaskForSingleCardRequest() {}

std::string SubmitDiagnoseTaskForSingleCardRequest::getDestination() const {
  return destination_;
}

void SubmitDiagnoseTaskForSingleCardRequest::setDestination(const std::string &destination) {
  destination_ = destination;
  setParameter(std::string("Destination"), destination);
}

std::string SubmitDiagnoseTaskForSingleCardRequest::getSource() const {
  return source_;
}

void SubmitDiagnoseTaskForSingleCardRequest::setSource(const std::string &source) {
  source_ = source;
  setParameter(std::string("Source"), source);
}

long SubmitDiagnoseTaskForSingleCardRequest::getResourceUid() const {
  return resourceUid_;
}

void SubmitDiagnoseTaskForSingleCardRequest::setResourceUid(long resourceUid) {
  resourceUid_ = resourceUid;
  setParameter(std::string("ResourceUid"), std::to_string(resourceUid));
}

long SubmitDiagnoseTaskForSingleCardRequest::getEndTime() const {
  return endTime_;
}

void SubmitDiagnoseTaskForSingleCardRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

long SubmitDiagnoseTaskForSingleCardRequest::getBeginTime() const {
  return beginTime_;
}

void SubmitDiagnoseTaskForSingleCardRequest::setBeginTime(long beginTime) {
  beginTime_ = beginTime;
  setParameter(std::string("BeginTime"), std::to_string(beginTime));
}

std::string SubmitDiagnoseTaskForSingleCardRequest::getRegionNo() const {
  return regionNo_;
}

void SubmitDiagnoseTaskForSingleCardRequest::setRegionNo(const std::string &regionNo) {
  regionNo_ = regionNo;
  setParameter(std::string("RegionNo"), regionNo);
}

std::string SubmitDiagnoseTaskForSingleCardRequest::getWirelessCloudConnectorId() const {
  return wirelessCloudConnectorId_;
}

void SubmitDiagnoseTaskForSingleCardRequest::setWirelessCloudConnectorId(const std::string &wirelessCloudConnectorId) {
  wirelessCloudConnectorId_ = wirelessCloudConnectorId;
  setParameter(std::string("WirelessCloudConnectorId"), wirelessCloudConnectorId);
}

