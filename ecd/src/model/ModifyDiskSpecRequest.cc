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

#include <alibabacloud/ecd/model/ModifyDiskSpecRequest.h>

using AlibabaCloud::Ecd::Model::ModifyDiskSpecRequest;

ModifyDiskSpecRequest::ModifyDiskSpecRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "ModifyDiskSpec") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDiskSpecRequest::~ModifyDiskSpecRequest() {}

std::string ModifyDiskSpecRequest::getRootDiskPerformanceLevel() const {
  return rootDiskPerformanceLevel_;
}

void ModifyDiskSpecRequest::setRootDiskPerformanceLevel(const std::string &rootDiskPerformanceLevel) {
  rootDiskPerformanceLevel_ = rootDiskPerformanceLevel;
  setParameter(std::string("RootDiskPerformanceLevel"), rootDiskPerformanceLevel);
}

bool ModifyDiskSpecRequest::getAutoPay() const {
  return autoPay_;
}

void ModifyDiskSpecRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

std::string ModifyDiskSpecRequest::getUserDiskPerformanceLevel() const {
  return userDiskPerformanceLevel_;
}

void ModifyDiskSpecRequest::setUserDiskPerformanceLevel(const std::string &userDiskPerformanceLevel) {
  userDiskPerformanceLevel_ = userDiskPerformanceLevel;
  setParameter(std::string("UserDiskPerformanceLevel"), userDiskPerformanceLevel);
}

std::string ModifyDiskSpecRequest::getPromotionId() const {
  return promotionId_;
}

void ModifyDiskSpecRequest::setPromotionId(const std::string &promotionId) {
  promotionId_ = promotionId;
  setParameter(std::string("PromotionId"), promotionId);
}

std::string ModifyDiskSpecRequest::getRegionId() const {
  return regionId_;
}

void ModifyDiskSpecRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyDiskSpecRequest::getDesktopId() const {
  return desktopId_;
}

void ModifyDiskSpecRequest::setDesktopId(const std::string &desktopId) {
  desktopId_ = desktopId;
  setParameter(std::string("DesktopId"), desktopId);
}

