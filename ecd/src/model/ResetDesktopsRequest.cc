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

#include <alibabacloud/ecd/model/ResetDesktopsRequest.h>

using AlibabaCloud::Ecd::Model::ResetDesktopsRequest;

ResetDesktopsRequest::ResetDesktopsRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "ResetDesktops") {
  setMethod(HttpRequest::Method::Post);
}

ResetDesktopsRequest::~ResetDesktopsRequest() {}

std::string ResetDesktopsRequest::getImageId() const {
  return imageId_;
}

void ResetDesktopsRequest::setImageId(const std::string &imageId) {
  imageId_ = imageId;
  setParameter(std::string("ImageId"), imageId);
}

std::string ResetDesktopsRequest::getResetType() const {
  return resetType_;
}

void ResetDesktopsRequest::setResetType(const std::string &resetType) {
  resetType_ = resetType;
  setParameter(std::string("ResetType"), resetType);
}

std::string ResetDesktopsRequest::getDesktopGroupId() const {
  return desktopGroupId_;
}

void ResetDesktopsRequest::setDesktopGroupId(const std::string &desktopGroupId) {
  desktopGroupId_ = desktopGroupId;
  setParameter(std::string("DesktopGroupId"), desktopGroupId);
}

std::string ResetDesktopsRequest::getRegionId() const {
  return regionId_;
}

void ResetDesktopsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<std::string> ResetDesktopsRequest::getDesktopId() const {
  return desktopId_;
}

void ResetDesktopsRequest::setDesktopId(const std::vector<std::string> &desktopId) {
  desktopId_ = desktopId;
}

std::string ResetDesktopsRequest::getPayType() const {
  return payType_;
}

void ResetDesktopsRequest::setPayType(const std::string &payType) {
  payType_ = payType;
  setParameter(std::string("PayType"), payType);
}

