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

#include <alibabacloud/sas/model/SaveSuspEventUserSettingRequest.h>

using AlibabaCloud::Sas::Model::SaveSuspEventUserSettingRequest;

SaveSuspEventUserSettingRequest::SaveSuspEventUserSettingRequest()
    : RpcServiceRequest("sas", "2018-12-03", "SaveSuspEventUserSetting") {
  setMethod(HttpRequest::Method::Post);
}

SaveSuspEventUserSettingRequest::~SaveSuspEventUserSettingRequest() {}

std::string SaveSuspEventUserSettingRequest::getFrom() const {
  return from_;
}

void SaveSuspEventUserSettingRequest::setFrom(const std::string &from) {
  from_ = from;
  setParameter(std::string("From"), from);
}

std::string SaveSuspEventUserSettingRequest::getLevelsOn() const {
  return levelsOn_;
}

void SaveSuspEventUserSettingRequest::setLevelsOn(const std::string &levelsOn) {
  levelsOn_ = levelsOn;
  setParameter(std::string("LevelsOn"), levelsOn);
}

