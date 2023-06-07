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

#include <alibabacloud/swas-open/model/InstallCloudMonitorAgentRequest.h>

using AlibabaCloud::SWAS_OPEN::Model::InstallCloudMonitorAgentRequest;

InstallCloudMonitorAgentRequest::InstallCloudMonitorAgentRequest()
    : RpcServiceRequest("swas-open", "2020-06-01", "InstallCloudMonitorAgent") {
  setMethod(HttpRequest::Method::Post);
}

InstallCloudMonitorAgentRequest::~InstallCloudMonitorAgentRequest() {}

std::string InstallCloudMonitorAgentRequest::getClientToken() const {
  return clientToken_;
}

void InstallCloudMonitorAgentRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string InstallCloudMonitorAgentRequest::getInstanceId() const {
  return instanceId_;
}

void InstallCloudMonitorAgentRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string InstallCloudMonitorAgentRequest::getRegionId() const {
  return regionId_;
}

void InstallCloudMonitorAgentRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool InstallCloudMonitorAgentRequest::getForce() const {
  return force_;
}

void InstallCloudMonitorAgentRequest::setForce(bool force) {
  force_ = force;
  setParameter(std::string("Force"), force ? "true" : "false");
}

