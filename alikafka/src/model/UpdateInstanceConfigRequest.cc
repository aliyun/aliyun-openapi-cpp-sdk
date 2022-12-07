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

#include <alibabacloud/alikafka/model/UpdateInstanceConfigRequest.h>

using AlibabaCloud::Alikafka::Model::UpdateInstanceConfigRequest;

UpdateInstanceConfigRequest::UpdateInstanceConfigRequest()
    : RpcServiceRequest("alikafka", "2019-09-16", "UpdateInstanceConfig") {
  setMethod(HttpRequest::Method::Post);
}

UpdateInstanceConfigRequest::~UpdateInstanceConfigRequest() {}

std::string UpdateInstanceConfigRequest::getInstanceId() const {
  return instanceId_;
}

void UpdateInstanceConfigRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string UpdateInstanceConfigRequest::getRegionId() const {
  return regionId_;
}

void UpdateInstanceConfigRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateInstanceConfigRequest::getConfig() const {
  return config_;
}

void UpdateInstanceConfigRequest::setConfig(const std::string &config) {
  config_ = config;
  setParameter(std::string("Config"), config);
}

