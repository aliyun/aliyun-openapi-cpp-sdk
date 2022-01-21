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

#include <alibabacloud/cms/model/ModifyMonitorGroupRequest.h>

using AlibabaCloud::Cms::Model::ModifyMonitorGroupRequest;

ModifyMonitorGroupRequest::ModifyMonitorGroupRequest()
    : RpcServiceRequest("cms", "2019-01-01", "ModifyMonitorGroup") {
  setMethod(HttpRequest::Method::Post);
}

ModifyMonitorGroupRequest::~ModifyMonitorGroupRequest() {}

std::string ModifyMonitorGroupRequest::getContactGroups() const {
  return contactGroups_;
}

void ModifyMonitorGroupRequest::setContactGroups(const std::string &contactGroups) {
  contactGroups_ = contactGroups;
  setParameter(std::string("ContactGroups"), contactGroups);
}

std::string ModifyMonitorGroupRequest::getGroupId() const {
  return groupId_;
}

void ModifyMonitorGroupRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string ModifyMonitorGroupRequest::getGroupName() const {
  return groupName_;
}

void ModifyMonitorGroupRequest::setGroupName(const std::string &groupName) {
  groupName_ = groupName;
  setParameter(std::string("GroupName"), groupName);
}

std::string ModifyMonitorGroupRequest::getBindUrls() const {
  return bindUrls_;
}

void ModifyMonitorGroupRequest::setBindUrls(const std::string &bindUrls) {
  bindUrls_ = bindUrls;
  setParameter(std::string("BindUrls"), bindUrls);
}

long ModifyMonitorGroupRequest::getServiceId() const {
  return serviceId_;
}

void ModifyMonitorGroupRequest::setServiceId(long serviceId) {
  serviceId_ = serviceId;
  setParameter(std::string("ServiceId"), std::to_string(serviceId));
}

