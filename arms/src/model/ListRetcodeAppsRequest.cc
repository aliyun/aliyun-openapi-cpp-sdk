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

#include <alibabacloud/arms/model/ListRetcodeAppsRequest.h>

using AlibabaCloud::ARMS::Model::ListRetcodeAppsRequest;

ListRetcodeAppsRequest::ListRetcodeAppsRequest()
    : RpcServiceRequest("arms", "2019-08-08", "ListRetcodeApps") {
  setMethod(HttpRequest::Method::Post);
}

ListRetcodeAppsRequest::~ListRetcodeAppsRequest() {}

std::string ListRetcodeAppsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ListRetcodeAppsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ListRetcodeAppsRequest::getRegionId() const {
  return regionId_;
}

void ListRetcodeAppsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<ListRetcodeAppsRequest::Tags> ListRetcodeAppsRequest::getTags() const {
  return tags_;
}

void ListRetcodeAppsRequest::setTags(const std::vector<ListRetcodeAppsRequest::Tags> &tags) {
  tags_ = tags;
  for(int dep1 = 0; dep1 != tags.size(); dep1++) {
  auto tagsObj = tags.at(dep1);
  std::string tagsObjStr = std::string("Tags") + "." + std::to_string(dep1 + 1);
    setParameter(tagsObjStr + ".Value", tagsObj.value);
    setParameter(tagsObjStr + ".Key", tagsObj.key);
  }
}

