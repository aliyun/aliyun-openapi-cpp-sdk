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

#include <alibabacloud/arms/model/ListEnvironmentDashboardsRequest.h>

using AlibabaCloud::ARMS::Model::ListEnvironmentDashboardsRequest;

ListEnvironmentDashboardsRequest::ListEnvironmentDashboardsRequest()
    : RpcServiceRequest("arms", "2019-08-08", "ListEnvironmentDashboards") {
  setMethod(HttpRequest::Method::Post);
}

ListEnvironmentDashboardsRequest::~ListEnvironmentDashboardsRequest() {}

std::string ListEnvironmentDashboardsRequest::getScene() const {
  return scene_;
}

void ListEnvironmentDashboardsRequest::setScene(const std::string &scene) {
  scene_ = scene;
  setParameter(std::string("Scene"), scene);
}

std::string ListEnvironmentDashboardsRequest::getEnvironmentId() const {
  return environmentId_;
}

void ListEnvironmentDashboardsRequest::setEnvironmentId(const std::string &environmentId) {
  environmentId_ = environmentId;
  setParameter(std::string("EnvironmentId"), environmentId);
}

std::string ListEnvironmentDashboardsRequest::getRegionId() const {
  return regionId_;
}

void ListEnvironmentDashboardsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListEnvironmentDashboardsRequest::getAddonName() const {
  return addonName_;
}

void ListEnvironmentDashboardsRequest::setAddonName(const std::string &addonName) {
  addonName_ = addonName;
  setParameter(std::string("AddonName"), addonName);
}

