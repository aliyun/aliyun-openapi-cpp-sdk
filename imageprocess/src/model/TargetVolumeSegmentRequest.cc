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

#include <alibabacloud/imageprocess/model/TargetVolumeSegmentRequest.h>

using AlibabaCloud::Imageprocess::Model::TargetVolumeSegmentRequest;

TargetVolumeSegmentRequest::TargetVolumeSegmentRequest()
    : RpcServiceRequest("imageprocess", "2020-03-20", "TargetVolumeSegment") {
  setMethod(HttpRequest::Method::Post);
}

TargetVolumeSegmentRequest::~TargetVolumeSegmentRequest() {}

std::string TargetVolumeSegmentRequest::getCancerType() const {
  return cancerType_;
}

void TargetVolumeSegmentRequest::setCancerType(const std::string &cancerType) {
  cancerType_ = cancerType;
  setBodyParameter(std::string("CancerType"), cancerType);
}

std::string TargetVolumeSegmentRequest::getOrgName() const {
  return orgName_;
}

void TargetVolumeSegmentRequest::setOrgName(const std::string &orgName) {
  orgName_ = orgName;
  setBodyParameter(std::string("OrgName"), orgName);
}

std::string TargetVolumeSegmentRequest::getTargetVolumeType() const {
  return targetVolumeType_;
}

void TargetVolumeSegmentRequest::setTargetVolumeType(const std::string &targetVolumeType) {
  targetVolumeType_ = targetVolumeType;
  setBodyParameter(std::string("TargetVolumeType"), targetVolumeType);
}

std::string TargetVolumeSegmentRequest::getDataFormat() const {
  return dataFormat_;
}

void TargetVolumeSegmentRequest::setDataFormat(const std::string &dataFormat) {
  dataFormat_ = dataFormat;
  setBodyParameter(std::string("DataFormat"), dataFormat);
}

std::vector<TargetVolumeSegmentRequest::URLList> TargetVolumeSegmentRequest::getURLList() const {
  return uRLList_;
}

void TargetVolumeSegmentRequest::setURLList(const std::vector<TargetVolumeSegmentRequest::URLList> &uRLList) {
  uRLList_ = uRLList;
  for(int dep1 = 0; dep1 != uRLList.size(); dep1++) {
  auto uRLListObj = uRLList.at(dep1);
  std::string uRLListObjStr = std::string("URLList") + "." + std::to_string(dep1 + 1);
    setBodyParameter(uRLListObjStr + ".URL", uRLListObj.uRL);
  }
}

std::string TargetVolumeSegmentRequest::getOrgId() const {
  return orgId_;
}

void TargetVolumeSegmentRequest::setOrgId(const std::string &orgId) {
  orgId_ = orgId;
  setBodyParameter(std::string("OrgId"), orgId);
}

bool TargetVolumeSegmentRequest::getAsync() const {
  return async_;
}

void TargetVolumeSegmentRequest::setAsync(bool async) {
  async_ = async;
  setBodyParameter(std::string("Async"), async ? "true" : "false");
}

