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

#include <alibabacloud/imageprocess/model/DetectKneeXRayRequest.h>

using AlibabaCloud::Imageprocess::Model::DetectKneeXRayRequest;

DetectKneeXRayRequest::DetectKneeXRayRequest()
    : RpcServiceRequest("imageprocess", "2020-03-20", "DetectKneeXRay") {
  setMethod(HttpRequest::Method::Post);
}

DetectKneeXRayRequest::~DetectKneeXRayRequest() {}

std::string DetectKneeXRayRequest::getOrgName() const {
  return orgName_;
}

void DetectKneeXRayRequest::setOrgName(const std::string &orgName) {
  orgName_ = orgName;
  setBodyParameter(std::string("OrgName"), orgName);
}

std::string DetectKneeXRayRequest::getDataFormat() const {
  return dataFormat_;
}

void DetectKneeXRayRequest::setDataFormat(const std::string &dataFormat) {
  dataFormat_ = dataFormat;
  setBodyParameter(std::string("DataFormat"), dataFormat);
}

std::string DetectKneeXRayRequest::getUrl() const {
  return url_;
}

void DetectKneeXRayRequest::setUrl(const std::string &url) {
  url_ = url;
  setBodyParameter(std::string("Url"), url);
}

std::string DetectKneeXRayRequest::getOrgId() const {
  return orgId_;
}

void DetectKneeXRayRequest::setOrgId(const std::string &orgId) {
  orgId_ = orgId;
  setBodyParameter(std::string("OrgId"), orgId);
}

