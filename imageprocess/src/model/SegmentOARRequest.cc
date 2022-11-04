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

#include <alibabacloud/imageprocess/model/SegmentOARRequest.h>

using AlibabaCloud::Imageprocess::Model::SegmentOARRequest;

SegmentOARRequest::SegmentOARRequest()
    : RpcServiceRequest("imageprocess", "2020-03-20", "SegmentOAR") {
  setMethod(HttpRequest::Method::Post);
}

SegmentOARRequest::~SegmentOARRequest() {}

std::string SegmentOARRequest::getOrgName() const {
  return orgName_;
}

void SegmentOARRequest::setOrgName(const std::string &orgName) {
  orgName_ = orgName;
  setBodyParameter(std::string("OrgName"), orgName);
}

std::string SegmentOARRequest::getBodyPart() const {
  return bodyPart_;
}

void SegmentOARRequest::setBodyPart(const std::string &bodyPart) {
  bodyPart_ = bodyPart;
  setBodyParameter(std::string("BodyPart"), bodyPart);
}

std::string SegmentOARRequest::getDataFormat() const {
  return dataFormat_;
}

void SegmentOARRequest::setDataFormat(const std::string &dataFormat) {
  dataFormat_ = dataFormat;
  setBodyParameter(std::string("DataFormat"), dataFormat);
}

std::vector<SegmentOARRequest::URLList> SegmentOARRequest::getURLList() const {
  return uRLList_;
}

void SegmentOARRequest::setURLList(const std::vector<SegmentOARRequest::URLList> &uRLList) {
  uRLList_ = uRLList;
  for(int dep1 = 0; dep1 != uRLList.size(); dep1++) {
  auto uRLListObj = uRLList.at(dep1);
  std::string uRLListObjStr = std::string("URLList") + "." + std::to_string(dep1 + 1);
    setBodyParameter(uRLListObjStr + ".URL", uRLListObj.uRL);
  }
}

std::string SegmentOARRequest::getOrgId() const {
  return orgId_;
}

void SegmentOARRequest::setOrgId(const std::string &orgId) {
  orgId_ = orgId;
  setBodyParameter(std::string("OrgId"), orgId);
}

bool SegmentOARRequest::getAsync() const {
  return async_;
}

void SegmentOARRequest::setAsync(bool async) {
  async_ = async;
  setBodyParameter(std::string("Async"), async ? "true" : "false");
}

bool SegmentOARRequest::getContrast() const {
  return contrast_;
}

void SegmentOARRequest::setContrast(bool contrast) {
  contrast_ = contrast;
  setBodyParameter(std::string("Contrast"), contrast ? "true" : "false");
}

std::vector<long> SegmentOARRequest::getMaskList() const {
  return maskList_;
}

void SegmentOARRequest::setMaskList(const std::vector<long> &maskList) {
  maskList_ = maskList;
}

