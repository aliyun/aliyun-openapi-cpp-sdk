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

#include <alibabacloud/cms/model/CreateMonitorGroupRequest.h>

using AlibabaCloud::Cms::Model::CreateMonitorGroupRequest;

CreateMonitorGroupRequest::CreateMonitorGroupRequest()
    : RpcServiceRequest("cms", "2019-01-01", "CreateMonitorGroup") {
  setMethod(HttpRequest::Method::Post);
}

CreateMonitorGroupRequest::~CreateMonitorGroupRequest() {}

std::string CreateMonitorGroupRequest::getContactGroups() const {
  return contactGroups_;
}

void CreateMonitorGroupRequest::setContactGroups(const std::string &contactGroups) {
  contactGroups_ = contactGroups;
  setParameter(std::string("ContactGroups"), contactGroups);
}

std::string CreateMonitorGroupRequest::getType() const {
  return type_;
}

void CreateMonitorGroupRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string CreateMonitorGroupRequest::getGroupName() const {
  return groupName_;
}

void CreateMonitorGroupRequest::setGroupName(const std::string &groupName) {
  groupName_ = groupName;
  setParameter(std::string("GroupName"), groupName);
}

std::string CreateMonitorGroupRequest::getOptions() const {
  return options_;
}

void CreateMonitorGroupRequest::setOptions(const std::string &options) {
  options_ = options;
  setParameter(std::string("Options"), options);
}

long CreateMonitorGroupRequest::getServiceId() const {
  return serviceId_;
}

void CreateMonitorGroupRequest::setServiceId(long serviceId) {
  serviceId_ = serviceId;
  setParameter(std::string("ServiceId"), std::to_string(serviceId));
}

std::string CreateMonitorGroupRequest::getBindUrl() const {
  return bindUrl_;
}

void CreateMonitorGroupRequest::setBindUrl(const std::string &bindUrl) {
  bindUrl_ = bindUrl;
  setParameter(std::string("BindUrl"), bindUrl);
}

