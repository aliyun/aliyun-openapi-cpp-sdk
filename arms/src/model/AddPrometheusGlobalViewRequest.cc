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

std::string AddPrometheusGlobalViewRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void AddPrometheusGlobalViewRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string AddPrometheusGlobalViewRequest::getRegionId() const {
  return regionId_;
}

void AddPrometheusGlobalViewRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<AddPrometheusGlobalViewRequest::Tag> AddPrometheusGlobalViewRequest::getTag() const {
  return tag_;
}

void AddPrometheusGlobalViewRequest::setTag(const std::vector<AddPrometheusGlobalViewRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
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

