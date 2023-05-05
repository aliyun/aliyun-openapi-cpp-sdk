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

#include <alibabacloud/ecd/model/SetDesktopGroupScaleTimerRequest.h>

using AlibabaCloud::Ecd::Model::SetDesktopGroupScaleTimerRequest;

SetDesktopGroupScaleTimerRequest::SetDesktopGroupScaleTimerRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "SetDesktopGroupScaleTimer") {
  setMethod(HttpRequest::Method::Post);
}

SetDesktopGroupScaleTimerRequest::~SetDesktopGroupScaleTimerRequest() {}

std::string SetDesktopGroupScaleTimerRequest::getDesktopGroupId() const {
  return desktopGroupId_;
}

void SetDesktopGroupScaleTimerRequest::setDesktopGroupId(const std::string &desktopGroupId) {
  desktopGroupId_ = desktopGroupId;
  setParameter(std::string("DesktopGroupId"), desktopGroupId);
}

std::vector<SetDesktopGroupScaleTimerRequest::ScaleTimerInfos> SetDesktopGroupScaleTimerRequest::getScaleTimerInfos() const {
  return scaleTimerInfos_;
}

void SetDesktopGroupScaleTimerRequest::setScaleTimerInfos(const std::vector<SetDesktopGroupScaleTimerRequest::ScaleTimerInfos> &scaleTimerInfos) {
  scaleTimerInfos_ = scaleTimerInfos;
  for(int dep1 = 0; dep1 != scaleTimerInfos.size(); dep1++) {
  auto scaleTimerInfosObj = scaleTimerInfos.at(dep1);
  std::string scaleTimerInfosObjStr = std::string("ScaleTimerInfos") + "." + std::to_string(dep1 + 1);
    setParameter(scaleTimerInfosObjStr + ".KeepDuration", std::to_string(scaleTimerInfosObj.keepDuration));
    setParameter(scaleTimerInfosObjStr + ".MinResAmount", std::to_string(scaleTimerInfosObj.minResAmount));
    setParameter(scaleTimerInfosObjStr + ".Cron", scaleTimerInfosObj.cron);
    setParameter(scaleTimerInfosObjStr + ".BuyResAmount", std::to_string(scaleTimerInfosObj.buyResAmount));
    setParameter(scaleTimerInfosObjStr + ".MaxResAmount", std::to_string(scaleTimerInfosObj.maxResAmount));
    setParameter(scaleTimerInfosObjStr + ".Type", scaleTimerInfosObj.type);
    setParameter(scaleTimerInfosObjStr + ".LoadPolicy", std::to_string(scaleTimerInfosObj.loadPolicy));
    setParameter(scaleTimerInfosObjStr + ".RatioThreshold", std::to_string(scaleTimerInfosObj.ratioThreshold));
  }
}

std::string SetDesktopGroupScaleTimerRequest::getRegionId() const {
  return regionId_;
}

void SetDesktopGroupScaleTimerRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

