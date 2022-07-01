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

#include <alibabacloud/ddoscoo/model/ConfigNetworkRegionBlockRequest.h>

using AlibabaCloud::Ddoscoo::Model::ConfigNetworkRegionBlockRequest;

ConfigNetworkRegionBlockRequest::ConfigNetworkRegionBlockRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "ConfigNetworkRegionBlock") {
  setMethod(HttpRequest::Method::Post);
}

ConfigNetworkRegionBlockRequest::~ConfigNetworkRegionBlockRequest() {}

std::string ConfigNetworkRegionBlockRequest::getInstanceId() const {
  return instanceId_;
}

void ConfigNetworkRegionBlockRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ConfigNetworkRegionBlockRequest::getSourceIp() const {
  return sourceIp_;
}

void ConfigNetworkRegionBlockRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ConfigNetworkRegionBlockRequest::getConfig() const {
  return config_;
}

void ConfigNetworkRegionBlockRequest::setConfig(const std::string &config) {
  config_ = config;
  setParameter(std::string("Config"), config);
}

