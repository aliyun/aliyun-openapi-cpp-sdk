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

#include <alibabacloud/ddoscoo/model/ModifyWebPreciseAccessSwitchRequest.h>

using AlibabaCloud::Ddoscoo::Model::ModifyWebPreciseAccessSwitchRequest;

ModifyWebPreciseAccessSwitchRequest::ModifyWebPreciseAccessSwitchRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "ModifyWebPreciseAccessSwitch") {
  setMethod(HttpRequest::Method::Post);
}

ModifyWebPreciseAccessSwitchRequest::~ModifyWebPreciseAccessSwitchRequest() {}

std::string ModifyWebPreciseAccessSwitchRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ModifyWebPreciseAccessSwitchRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ModifyWebPreciseAccessSwitchRequest::getSourceIp() const {
  return sourceIp_;
}

void ModifyWebPreciseAccessSwitchRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ModifyWebPreciseAccessSwitchRequest::getDomain() const {
  return domain_;
}

void ModifyWebPreciseAccessSwitchRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

std::string ModifyWebPreciseAccessSwitchRequest::getConfig() const {
  return config_;
}

void ModifyWebPreciseAccessSwitchRequest::setConfig(const std::string &config) {
  config_ = config;
  setParameter(std::string("Config"), config);
}

