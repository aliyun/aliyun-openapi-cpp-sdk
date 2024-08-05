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

#include <alibabacloud/arms/model/GetRumAppsRequest.h>

using AlibabaCloud::ARMS::Model::GetRumAppsRequest;

GetRumAppsRequest::GetRumAppsRequest()
    : RpcServiceRequest("arms", "2019-08-08", "GetRumApps") {
  setMethod(HttpRequest::Method::Post);
}

GetRumAppsRequest::~GetRumAppsRequest() {}

std::vector<GetRumAppsRequest::Tags> GetRumAppsRequest::getTags() const {
  return tags_;
}

void GetRumAppsRequest::setTags(const std::vector<GetRumAppsRequest::Tags> &tags) {
  tags_ = tags;
  for(int dep1 = 0; dep1 != tags.size(); dep1++) {
    setParameter(std::string("Tags") + "." + std::to_string(dep1 + 1) + ".Value", tags[dep1].value);
    setParameter(std::string("Tags") + "." + std::to_string(dep1 + 1) + ".Key", tags[dep1].key);
  }
}

std::string GetRumAppsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void GetRumAppsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string GetRumAppsRequest::getAppName() const {
  return appName_;
}

void GetRumAppsRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string GetRumAppsRequest::getAppGroup() const {
  return appGroup_;
}

void GetRumAppsRequest::setAppGroup(const std::string &appGroup) {
  appGroup_ = appGroup;
  setParameter(std::string("AppGroup"), appGroup);
}

std::string GetRumAppsRequest::getRegionId() const {
  return regionId_;
}

void GetRumAppsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string GetRumAppsRequest::getAppId() const {
  return appId_;
}

void GetRumAppsRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

