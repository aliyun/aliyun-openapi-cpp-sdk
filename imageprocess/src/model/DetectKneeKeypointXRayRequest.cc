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

#include <alibabacloud/imageprocess/model/DetectKneeKeypointXRayRequest.h>

using AlibabaCloud::Imageprocess::Model::DetectKneeKeypointXRayRequest;

DetectKneeKeypointXRayRequest::DetectKneeKeypointXRayRequest()
    : RpcServiceRequest("imageprocess", "2020-03-20", "DetectKneeKeypointXRay") {
  setMethod(HttpRequest::Method::Post);
}

DetectKneeKeypointXRayRequest::~DetectKneeKeypointXRayRequest() {}

std::string DetectKneeKeypointXRayRequest::getOrgName() const {
  return orgName_;
}

void DetectKneeKeypointXRayRequest::setOrgName(const std::string &orgName) {
  orgName_ = orgName;
  setBodyParameter(std::string("OrgName"), orgName);
}

std::string DetectKneeKeypointXRayRequest::getTracerId() const {
  return tracerId_;
}

void DetectKneeKeypointXRayRequest::setTracerId(const std::string &tracerId) {
  tracerId_ = tracerId;
  setBodyParameter(std::string("TracerId"), tracerId);
}

std::string DetectKneeKeypointXRayRequest::getDataFormat() const {
  return dataFormat_;
}

void DetectKneeKeypointXRayRequest::setDataFormat(const std::string &dataFormat) {
  dataFormat_ = dataFormat;
  setBodyParameter(std::string("DataFormat"), dataFormat);
}

std::string DetectKneeKeypointXRayRequest::getOrgId() const {
  return orgId_;
}

void DetectKneeKeypointXRayRequest::setOrgId(const std::string &orgId) {
  orgId_ = orgId;
  setBodyParameter(std::string("OrgId"), orgId);
}

std::string DetectKneeKeypointXRayRequest::getImageUrl() const {
  return imageUrl_;
}

void DetectKneeKeypointXRayRequest::setImageUrl(const std::string &imageUrl) {
  imageUrl_ = imageUrl;
  setBodyParameter(std::string("ImageUrl"), imageUrl);
}

