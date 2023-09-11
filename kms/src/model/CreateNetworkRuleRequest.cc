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

#include <alibabacloud/kms/model/CreateNetworkRuleRequest.h>

using AlibabaCloud::Kms::Model::CreateNetworkRuleRequest;

CreateNetworkRuleRequest::CreateNetworkRuleRequest()
    : RpcServiceRequest("kms", "2016-01-20", "CreateNetworkRule") {
  setMethod(HttpRequest::Method::Post);
}

CreateNetworkRuleRequest::~CreateNetworkRuleRequest() {}

std::string CreateNetworkRuleRequest::getDescription() const {
  return description_;
}

void CreateNetworkRuleRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateNetworkRuleRequest::getType() const {
  return type_;
}

void CreateNetworkRuleRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string CreateNetworkRuleRequest::getName() const {
  return name_;
}

void CreateNetworkRuleRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string CreateNetworkRuleRequest::getSourcePrivateIp() const {
  return sourcePrivateIp_;
}

void CreateNetworkRuleRequest::setSourcePrivateIp(const std::string &sourcePrivateIp) {
  sourcePrivateIp_ = sourcePrivateIp;
  setParameter(std::string("SourcePrivateIp"), sourcePrivateIp);
}

