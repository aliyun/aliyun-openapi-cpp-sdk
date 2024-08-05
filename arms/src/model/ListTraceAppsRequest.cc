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

#include <alibabacloud/arms/model/ListTraceAppsRequest.h>

using AlibabaCloud::ARMS::Model::ListTraceAppsRequest;

ListTraceAppsRequest::ListTraceAppsRequest()
    : RpcServiceRequest("arms", "2019-08-08", "ListTraceApps") {
  setMethod(HttpRequest::Method::Post);
}

ListTraceAppsRequest::~ListTraceAppsRequest() {}

std::string ListTraceAppsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ListTraceAppsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ListTraceAppsRequest::getRegionId() const {
  return regionId_;
}

void ListTraceAppsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListTraceAppsRequest::getAppType() const {
  return appType_;
}

void ListTraceAppsRequest::setAppType(const std::string &appType) {
  appType_ = appType;
  setParameter(std::string("AppType"), appType);
}

std::string ListTraceAppsRequest::getRegion() const {
  return region_;
}

void ListTraceAppsRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

std::vector<ListTraceAppsRequest::Tags> ListTraceAppsRequest::getTags() const {
  return tags_;
}

void ListTraceAppsRequest::setTags(const std::vector<ListTraceAppsRequest::Tags> &tags) {
  tags_ = tags;
  for(int dep1 = 0; dep1 != tags.size(); dep1++) {
  auto tagsObj = tags.at(dep1);
  std::string tagsObjStr = std::string("Tags") + "." + std::to_string(dep1 + 1);
    setParameter(tagsObjStr + ".Value", tagsObj.value);
    setParameter(tagsObjStr + ".Key", tagsObj.key);
  }
}

