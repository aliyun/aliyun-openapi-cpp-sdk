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

#include <alibabacloud/ddoscoo/model/ModifyWebIpSetSwitchRequest.h>

using AlibabaCloud::Ddoscoo::Model::ModifyWebIpSetSwitchRequest;

ModifyWebIpSetSwitchRequest::ModifyWebIpSetSwitchRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "ModifyWebIpSetSwitch") {
  setMethod(HttpRequest::Method::Post);
}

ModifyWebIpSetSwitchRequest::~ModifyWebIpSetSwitchRequest() {}

std::string ModifyWebIpSetSwitchRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ModifyWebIpSetSwitchRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ModifyWebIpSetSwitchRequest::getSourceIp() const {
  return sourceIp_;
}

void ModifyWebIpSetSwitchRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ModifyWebIpSetSwitchRequest::getDomain() const {
  return domain_;
}

void ModifyWebIpSetSwitchRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

std::string ModifyWebIpSetSwitchRequest::getConfig() const {
  return config_;
}

void ModifyWebIpSetSwitchRequest::setConfig(const std::string &config) {
  config_ = config;
  setParameter(std::string("Config"), config);
}

