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

#include <alibabacloud/arms/model/AddPrometheusGlobalViewRequest.h>

using AlibabaCloud::ARMS::Model::AddPrometheusGlobalViewRequest;

AddPrometheusGlobalViewRequest::AddPrometheusGlobalViewRequest()
    : RpcServiceRequest("arms", "2019-08-08", "AddPrometheusGlobalView") {
  setMethod(HttpRequest::Method::Post);
}

AddPrometheusGlobalViewRequest::~AddPrometheusGlobalViewRequest() {}

std::string AddPrometheusGlobalViewRequest::getRegionId() const {
  return regionId_;
}

void AddPrometheusGlobalViewRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AddPrometheusGlobalViewRequest::getGroupName() const {
  return groupName_;
}

void AddPrometheusGlobalViewRequest::setGroupName(const std::string &groupName) {
  groupName_ = groupName;
  setParameter(std::string("GroupName"), groupName);
}

std::string AddPrometheusGlobalViewRequest::getClusters() const {
  return clusters_;
}

void AddPrometheusGlobalViewRequest::setClusters(const std::string &clusters) {
  clusters_ = clusters;
  setParameter(std::string("Clusters"), clusters);
}

