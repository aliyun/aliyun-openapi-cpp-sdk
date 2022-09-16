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

#include <alibabacloud/ecd/model/ModifyDesktopSpecRequest.h>

using AlibabaCloud::Ecd::Model::ModifyDesktopSpecRequest;

ModifyDesktopSpecRequest::ModifyDesktopSpecRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "ModifyDesktopSpec") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDesktopSpecRequest::~ModifyDesktopSpecRequest() {}

bool ModifyDesktopSpecRequest::getAutoPay() const {
  return autoPay_;
}

void ModifyDesktopSpecRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

std::string ModifyDesktopSpecRequest::getUserDiskPerformanceLevel() const {
  return userDiskPerformanceLevel_;
}

void ModifyDesktopSpecRequest::setUserDiskPerformanceLevel(const std::string &userDiskPerformanceLevel) {
  userDiskPerformanceLevel_ = userDiskPerformanceLevel;
  setParameter(std::string("UserDiskPerformanceLevel"), userDiskPerformanceLevel);
}

std::string ModifyDesktopSpecRequest::getPromotionId() const {
  return promotionId_;
}

void ModifyDesktopSpecRequest::setPromotionId(const std::string &promotionId) {
  promotionId_ = promotionId;
  setParameter(std::string("PromotionId"), promotionId);
}

int ModifyDesktopSpecRequest::getUserDiskSizeGib() const {
  return userDiskSizeGib_;
}

void ModifyDesktopSpecRequest::setUserDiskSizeGib(int userDiskSizeGib) {
  userDiskSizeGib_ = userDiskSizeGib;
  setParameter(std::string("UserDiskSizeGib"), std::to_string(userDiskSizeGib));
}

std::string ModifyDesktopSpecRequest::getRegionId() const {
  return regionId_;
}

void ModifyDesktopSpecRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyDesktopSpecRequest::getDesktopId() const {
  return desktopId_;
}

void ModifyDesktopSpecRequest::setDesktopId(const std::string &desktopId) {
  desktopId_ = desktopId;
  setParameter(std::string("DesktopId"), desktopId);
}

std::string ModifyDesktopSpecRequest::getDesktopType() const {
  return desktopType_;
}

void ModifyDesktopSpecRequest::setDesktopType(const std::string &desktopType) {
  desktopType_ = desktopType;
  setParameter(std::string("DesktopType"), desktopType);
}

int ModifyDesktopSpecRequest::getRootDiskSizeGib() const {
  return rootDiskSizeGib_;
}

void ModifyDesktopSpecRequest::setRootDiskSizeGib(int rootDiskSizeGib) {
  rootDiskSizeGib_ = rootDiskSizeGib;
  setParameter(std::string("RootDiskSizeGib"), std::to_string(rootDiskSizeGib));
}

