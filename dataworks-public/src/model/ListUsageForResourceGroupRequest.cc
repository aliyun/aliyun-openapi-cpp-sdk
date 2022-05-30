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

#include <alibabacloud/dataworks-public/model/ListUsageForResourceGroupRequest.h>

using AlibabaCloud::Dataworks_public::Model::ListUsageForResourceGroupRequest;

ListUsageForResourceGroupRequest::ListUsageForResourceGroupRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "ListUsageForResourceGroup") {
  setMethod(HttpRequest::Method::Post);
}

ListUsageForResourceGroupRequest::~ListUsageForResourceGroupRequest() {}

std::string ListUsageForResourceGroupRequest::getProjectEnv() const {
  return projectEnv_;
}

void ListUsageForResourceGroupRequest::setProjectEnv(const std::string &projectEnv) {
  projectEnv_ = projectEnv;
  setBodyParameter(std::string("ProjectEnv"), projectEnv);
}

long ListUsageForResourceGroupRequest::getEndTime() const {
  return endTime_;
}

void ListUsageForResourceGroupRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setBodyParameter(std::string("EndTime"), std::to_string(endTime));
}

std::string ListUsageForResourceGroupRequest::getResourceGroupIdentifier() const {
  return resourceGroupIdentifier_;
}

void ListUsageForResourceGroupRequest::setResourceGroupIdentifier(const std::string &resourceGroupIdentifier) {
  resourceGroupIdentifier_ = resourceGroupIdentifier;
  setBodyParameter(std::string("ResourceGroupIdentifier"), resourceGroupIdentifier);
}

long ListUsageForResourceGroupRequest::getStartTime() const {
  return startTime_;
}

void ListUsageForResourceGroupRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setBodyParameter(std::string("StartTime"), std::to_string(startTime));
}

