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

#include <alibabacloud/ens/model/RescaleApplicationRequest.h>

using AlibabaCloud::Ens::Model::RescaleApplicationRequest;

RescaleApplicationRequest::RescaleApplicationRequest()
    : RpcServiceRequest("ens", "2017-11-10", "RescaleApplication") {
  setMethod(HttpRequest::Method::Post);
}

RescaleApplicationRequest::~RescaleApplicationRequest() {}

std::string RescaleApplicationRequest::getRescaleType() const {
  return rescaleType_;
}

void RescaleApplicationRequest::setRescaleType(const std::string &rescaleType) {
  rescaleType_ = rescaleType;
  setParameter(std::string("RescaleType"), rescaleType);
}

std::string RescaleApplicationRequest::getResourceSelector() const {
  return resourceSelector_;
}

void RescaleApplicationRequest::setResourceSelector(const std::string &resourceSelector) {
  resourceSelector_ = resourceSelector;
  setParameter(std::string("ResourceSelector"), resourceSelector);
}

int RescaleApplicationRequest::getTimeout() const {
  return timeout_;
}

void RescaleApplicationRequest::setTimeout(int timeout) {
  timeout_ = timeout;
  setParameter(std::string("Timeout"), std::to_string(timeout));
}

std::string RescaleApplicationRequest::getRescaleLevel() const {
  return rescaleLevel_;
}

void RescaleApplicationRequest::setRescaleLevel(const std::string &rescaleLevel) {
  rescaleLevel_ = rescaleLevel;
  setParameter(std::string("RescaleLevel"), rescaleLevel);
}

std::string RescaleApplicationRequest::getAppId() const {
  return appId_;
}

void RescaleApplicationRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string RescaleApplicationRequest::getToAppVersion() const {
  return toAppVersion_;
}

void RescaleApplicationRequest::setToAppVersion(const std::string &toAppVersion) {
  toAppVersion_ = toAppVersion;
  setParameter(std::string("ToAppVersion"), toAppVersion);
}

