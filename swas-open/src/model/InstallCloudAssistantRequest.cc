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

#include <alibabacloud/swas-open/model/InstallCloudAssistantRequest.h>

using AlibabaCloud::SWAS_OPEN::Model::InstallCloudAssistantRequest;

InstallCloudAssistantRequest::InstallCloudAssistantRequest()
    : RpcServiceRequest("swas-open", "2020-06-01", "InstallCloudAssistant") {
  setMethod(HttpRequest::Method::Post);
}

InstallCloudAssistantRequest::~InstallCloudAssistantRequest() {}

std::string InstallCloudAssistantRequest::getSite() const {
  return site_;
}

void InstallCloudAssistantRequest::setSite(const std::string &site) {
  site_ = site;
  setParameter(std::string("Site"), site);
}

std::string InstallCloudAssistantRequest::getRegionId() const {
  return regionId_;
}

void InstallCloudAssistantRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<InstallCloudAssistantRequest::std::string> InstallCloudAssistantRequest::getInstanceIds() const {
  return instanceIds_;
}

void InstallCloudAssistantRequest::setInstanceIds(const std::vector<InstallCloudAssistantRequest::std::string> &instanceIds) {
  instanceIds_ = instanceIds;
  for(int dep1 = 0; dep1 != instanceIds.size(); dep1++) {
    setParameter(std::string("InstanceIds") + "." + std::to_string(dep1 + 1), instanceIds[dep1]);
  }
}

