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

#include <alibabacloud/cms/model/CreateMonitorGroupByResourceGroupIdRequest.h>

using AlibabaCloud::Cms::Model::CreateMonitorGroupByResourceGroupIdRequest;

CreateMonitorGroupByResourceGroupIdRequest::CreateMonitorGroupByResourceGroupIdRequest()
    : RpcServiceRequest("cms", "2019-01-01", "CreateMonitorGroupByResourceGroupId") {
  setMethod(HttpRequest::Method::Post);
}

CreateMonitorGroupByResourceGroupIdRequest::~CreateMonitorGroupByResourceGroupIdRequest() {}

std::string CreateMonitorGroupByResourceGroupIdRequest::getResourceGroupName() const {
  return resourceGroupName_;
}

void CreateMonitorGroupByResourceGroupIdRequest::setResourceGroupName(const std::string &resourceGroupName) {
  resourceGroupName_ = resourceGroupName;
  setParameter(std::string("ResourceGroupName"), resourceGroupName);
}

bool CreateMonitorGroupByResourceGroupIdRequest::getEnableSubscribeEvent() const {
  return enableSubscribeEvent_;
}

void CreateMonitorGroupByResourceGroupIdRequest::setEnableSubscribeEvent(bool enableSubscribeEvent) {
  enableSubscribeEvent_ = enableSubscribeEvent;
  setParameter(std::string("EnableSubscribeEvent"), enableSubscribeEvent ? "true" : "false");
}

std::string CreateMonitorGroupByResourceGroupIdRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateMonitorGroupByResourceGroupIdRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

bool CreateMonitorGroupByResourceGroupIdRequest::getEnableInstallAgent() const {
  return enableInstallAgent_;
}

void CreateMonitorGroupByResourceGroupIdRequest::setEnableInstallAgent(bool enableInstallAgent) {
  enableInstallAgent_ = enableInstallAgent;
  setParameter(std::string("EnableInstallAgent"), enableInstallAgent ? "true" : "false");
}

std::string CreateMonitorGroupByResourceGroupIdRequest::getRegionId() const {
  return regionId_;
}

void CreateMonitorGroupByResourceGroupIdRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<std::string> CreateMonitorGroupByResourceGroupIdRequest::getContactGroupList() const {
  return contactGroupList_;
}

void CreateMonitorGroupByResourceGroupIdRequest::setContactGroupList(const std::vector<std::string> &contactGroupList) {
  contactGroupList_ = contactGroupList;
}

