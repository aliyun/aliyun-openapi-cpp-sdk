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

#include <alibabacloud/arms/model/SaveTraceAppConfigRequest.h>

using AlibabaCloud::ARMS::Model::SaveTraceAppConfigRequest;

SaveTraceAppConfigRequest::SaveTraceAppConfigRequest()
    : RpcServiceRequest("arms", "2019-08-08", "SaveTraceAppConfig") {
  setMethod(HttpRequest::Method::Post);
}

SaveTraceAppConfigRequest::~SaveTraceAppConfigRequest() {}

std::vector<SaveTraceAppConfigRequest::Settings> SaveTraceAppConfigRequest::getSettings() const {
  return settings_;
}

void SaveTraceAppConfigRequest::setSettings(const std::vector<SaveTraceAppConfigRequest::Settings> &settings) {
  settings_ = settings;
  for(int dep1 = 0; dep1 != settings.size(); dep1++) {
  auto settingsObj = settings.at(dep1);
  std::string settingsObjStr = std::string("Settings") + "." + std::to_string(dep1 + 1);
    setParameter(settingsObjStr + ".Value", settingsObj.value);
    setParameter(settingsObjStr + ".Key", settingsObj.key);
  }
}

std::string SaveTraceAppConfigRequest::getPid() const {
  return pid_;
}

void SaveTraceAppConfigRequest::setPid(const std::string &pid) {
  pid_ = pid;
  setParameter(std::string("Pid"), pid);
}

