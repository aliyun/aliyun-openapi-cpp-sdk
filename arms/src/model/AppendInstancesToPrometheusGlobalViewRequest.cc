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

#include <alibabacloud/arms/model/AppendInstancesToPrometheusGlobalViewRequest.h>

using AlibabaCloud::ARMS::Model::AppendInstancesToPrometheusGlobalViewRequest;

AppendInstancesToPrometheusGlobalViewRequest::AppendInstancesToPrometheusGlobalViewRequest()
    : RpcServiceRequest("arms", "2019-08-08", "AppendInstancesToPrometheusGlobalView") {
  setMethod(HttpRequest::Method::Post);
}

AppendInstancesToPrometheusGlobalViewRequest::~AppendInstancesToPrometheusGlobalViewRequest() {}

std::string AppendInstancesToPrometheusGlobalViewRequest::getGlobalViewClusterId() const {
  return globalViewClusterId_;
}

void AppendInstancesToPrometheusGlobalViewRequest::setGlobalViewClusterId(const std::string &globalViewClusterId) {
  globalViewClusterId_ = globalViewClusterId;
  setParameter(std::string("GlobalViewClusterId"), globalViewClusterId);
}

std::string AppendInstancesToPrometheusGlobalViewRequest::getRegionId() const {
  return regionId_;
}

void AppendInstancesToPrometheusGlobalViewRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AppendInstancesToPrometheusGlobalViewRequest::getGroupName() const {
  return groupName_;
}

void AppendInstancesToPrometheusGlobalViewRequest::setGroupName(const std::string &groupName) {
  groupName_ = groupName;
  setParameter(std::string("GroupName"), groupName);
}

std::string AppendInstancesToPrometheusGlobalViewRequest::getClusters() const {
  return clusters_;
}

void AppendInstancesToPrometheusGlobalViewRequest::setClusters(const std::string &clusters) {
  clusters_ = clusters;
  setParameter(std::string("Clusters"), clusters);
}

