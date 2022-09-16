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

#include <alibabacloud/ecd/model/AttachCenRequest.h>

using AlibabaCloud::Ecd::Model::AttachCenRequest;

AttachCenRequest::AttachCenRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "AttachCen") {
  setMethod(HttpRequest::Method::Post);
}

AttachCenRequest::~AttachCenRequest() {}

std::string AttachCenRequest::getOfficeSiteId() const {
  return officeSiteId_;
}

void AttachCenRequest::setOfficeSiteId(const std::string &officeSiteId) {
  officeSiteId_ = officeSiteId;
  setParameter(std::string("OfficeSiteId"), officeSiteId);
}

std::string AttachCenRequest::getCenId() const {
  return cenId_;
}

void AttachCenRequest::setCenId(const std::string &cenId) {
  cenId_ = cenId;
  setParameter(std::string("CenId"), cenId);
}

long AttachCenRequest::getCenOwnerId() const {
  return cenOwnerId_;
}

void AttachCenRequest::setCenOwnerId(long cenOwnerId) {
  cenOwnerId_ = cenOwnerId;
  setParameter(std::string("CenOwnerId"), std::to_string(cenOwnerId));
}

std::string AttachCenRequest::getVerifyCode() const {
  return verifyCode_;
}

void AttachCenRequest::setVerifyCode(const std::string &verifyCode) {
  verifyCode_ = verifyCode;
  setParameter(std::string("VerifyCode"), verifyCode);
}

std::string AttachCenRequest::getRegionId() const {
  return regionId_;
}

void AttachCenRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

