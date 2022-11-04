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

#include <alibabacloud/imageprocess/model/DetectRibFractureRequest.h>

using AlibabaCloud::Imageprocess::Model::DetectRibFractureRequest;

DetectRibFractureRequest::DetectRibFractureRequest()
    : RpcServiceRequest("imageprocess", "2020-03-20", "DetectRibFracture") {
  setMethod(HttpRequest::Method::Post);
}

DetectRibFractureRequest::~DetectRibFractureRequest() {}

std::string DetectRibFractureRequest::getOrgName() const {
  return orgName_;
}

void DetectRibFractureRequest::setOrgName(const std::string &orgName) {
  orgName_ = orgName;
  setBodyParameter(std::string("OrgName"), orgName);
}

std::string DetectRibFractureRequest::getSourceType() const {
  return sourceType_;
}

void DetectRibFractureRequest::setSourceType(const std::string &sourceType) {
  sourceType_ = sourceType;
  setBodyParameter(std::string("SourceType"), sourceType);
}

std::string DetectRibFractureRequest::getDataFormat() const {
  return dataFormat_;
}

void DetectRibFractureRequest::setDataFormat(const std::string &dataFormat) {
  dataFormat_ = dataFormat;
  setBodyParameter(std::string("DataFormat"), dataFormat);
}

std::vector<DetectRibFractureRequest::URLList> DetectRibFractureRequest::getURLList() const {
  return uRLList_;
}

void DetectRibFractureRequest::setURLList(const std::vector<DetectRibFractureRequest::URLList> &uRLList) {
  uRLList_ = uRLList;
  for(int dep1 = 0; dep1 != uRLList.size(); dep1++) {
  auto uRLListObj = uRLList.at(dep1);
  std::string uRLListObjStr = std::string("URLList") + "." + std::to_string(dep1 + 1);
    setBodyParameter(uRLListObjStr + ".URL", uRLListObj.uRL);
  }
}

std::string DetectRibFractureRequest::getOrgId() const {
  return orgId_;
}

void DetectRibFractureRequest::setOrgId(const std::string &orgId) {
  orgId_ = orgId;
  setBodyParameter(std::string("OrgId"), orgId);
}

bool DetectRibFractureRequest::getAsync() const {
  return async_;
}

void DetectRibFractureRequest::setAsync(bool async) {
  async_ = async;
  setBodyParameter(std::string("Async"), async ? "true" : "false");
}

