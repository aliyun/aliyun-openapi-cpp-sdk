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

#include <alibabacloud/arms/model/RemoveSourcesFromPrometheusGlobalViewRequest.h>

using AlibabaCloud::ARMS::Model::RemoveSourcesFromPrometheusGlobalViewRequest;

RemoveSourcesFromPrometheusGlobalViewRequest::RemoveSourcesFromPrometheusGlobalViewRequest()
    : RpcServiceRequest("arms", "2019-08-08", "RemoveSourcesFromPrometheusGlobalView") {
  setMethod(HttpRequest::Method::Post);
}

RemoveSourcesFromPrometheusGlobalViewRequest::~RemoveSourcesFromPrometheusGlobalViewRequest() {}

std::string RemoveSourcesFromPrometheusGlobalViewRequest::getSourceNames() const {
  return sourceNames_;
}

void RemoveSourcesFromPrometheusGlobalViewRequest::setSourceNames(const std::string &sourceNames) {
  sourceNames_ = sourceNames;
  setParameter(std::string("SourceNames"), sourceNames);
}

std::string RemoveSourcesFromPrometheusGlobalViewRequest::getGlobalViewClusterId() const {
  return globalViewClusterId_;
}

void RemoveSourcesFromPrometheusGlobalViewRequest::setGlobalViewClusterId(const std::string &globalViewClusterId) {
  globalViewClusterId_ = globalViewClusterId;
  setParameter(std::string("GlobalViewClusterId"), globalViewClusterId);
}

std::string RemoveSourcesFromPrometheusGlobalViewRequest::getRegionId() const {
  return regionId_;
}

void RemoveSourcesFromPrometheusGlobalViewRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string RemoveSourcesFromPrometheusGlobalViewRequest::getGroupName() const {
  return groupName_;
}

void RemoveSourcesFromPrometheusGlobalViewRequest::setGroupName(const std::string &groupName) {
  groupName_ = groupName;
  setParameter(std::string("GroupName"), groupName);
}

