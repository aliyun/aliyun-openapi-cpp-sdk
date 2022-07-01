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

#include <alibabacloud/ddoscoo/model/ConfigUdpReflectRequest.h>

using AlibabaCloud::Ddoscoo::Model::ConfigUdpReflectRequest;

ConfigUdpReflectRequest::ConfigUdpReflectRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "ConfigUdpReflect") {
  setMethod(HttpRequest::Method::Post);
}

ConfigUdpReflectRequest::~ConfigUdpReflectRequest() {}

std::string ConfigUdpReflectRequest::getSourceIp() const {
  return sourceIp_;
}

void ConfigUdpReflectRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ConfigUdpReflectRequest::getRegionId() const {
  return regionId_;
}

void ConfigUdpReflectRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ConfigUdpReflectRequest::getInstanceId() const {
  return instanceId_;
}

void ConfigUdpReflectRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ConfigUdpReflectRequest::getConfig() const {
  return config_;
}

void ConfigUdpReflectRequest::setConfig(const std::string &config) {
  config_ = config;
  setParameter(std::string("Config"), config);
}

