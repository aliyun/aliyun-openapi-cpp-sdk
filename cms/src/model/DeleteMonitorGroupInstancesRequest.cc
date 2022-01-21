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

#include <alibabacloud/cms/model/DeleteMonitorGroupInstancesRequest.h>

using AlibabaCloud::Cms::Model::DeleteMonitorGroupInstancesRequest;

DeleteMonitorGroupInstancesRequest::DeleteMonitorGroupInstancesRequest()
    : RpcServiceRequest("cms", "2019-01-01", "DeleteMonitorGroupInstances") {
  setMethod(HttpRequest::Method::Post);
}

DeleteMonitorGroupInstancesRequest::~DeleteMonitorGroupInstancesRequest() {}

long DeleteMonitorGroupInstancesRequest::getGroupId() const {
  return groupId_;
}

void DeleteMonitorGroupInstancesRequest::setGroupId(long groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), std::to_string(groupId));
}

std::string DeleteMonitorGroupInstancesRequest::getInstanceIdList() const {
  return instanceIdList_;
}

void DeleteMonitorGroupInstancesRequest::setInstanceIdList(const std::string &instanceIdList) {
  instanceIdList_ = instanceIdList;
  setParameter(std::string("InstanceIdList"), instanceIdList);
}

std::string DeleteMonitorGroupInstancesRequest::getCategory() const {
  return category_;
}

void DeleteMonitorGroupInstancesRequest::setCategory(const std::string &category) {
  category_ = category;
  setParameter(std::string("Category"), category);
}

