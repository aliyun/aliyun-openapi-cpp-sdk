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

#include <alibabacloud/ecd/model/VerifyCenRequest.h>

using AlibabaCloud::Ecd::Model::VerifyCenRequest;

VerifyCenRequest::VerifyCenRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "VerifyCen") {
  setMethod(HttpRequest::Method::Post);
}

VerifyCenRequest::~VerifyCenRequest() {}

std::string VerifyCenRequest::getCenId() const {
  return cenId_;
}

void VerifyCenRequest::setCenId(const std::string &cenId) {
  cenId_ = cenId;
  setParameter(std::string("CenId"), cenId);
}

long VerifyCenRequest::getCenOwnerId() const {
  return cenOwnerId_;
}

void VerifyCenRequest::setCenOwnerId(long cenOwnerId) {
  cenOwnerId_ = cenOwnerId;
  setParameter(std::string("CenOwnerId"), std::to_string(cenOwnerId));
}

std::string VerifyCenRequest::getVerifyCode() const {
  return verifyCode_;
}

void VerifyCenRequest::setVerifyCode(const std::string &verifyCode) {
  verifyCode_ = verifyCode;
  setParameter(std::string("VerifyCode"), verifyCode);
}

std::string VerifyCenRequest::getRegionId() const {
  return regionId_;
}

void VerifyCenRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string VerifyCenRequest::getCidrBlock() const {
  return cidrBlock_;
}

void VerifyCenRequest::setCidrBlock(const std::string &cidrBlock) {
  cidrBlock_ = cidrBlock;
  setParameter(std::string("CidrBlock"), cidrBlock);
}

