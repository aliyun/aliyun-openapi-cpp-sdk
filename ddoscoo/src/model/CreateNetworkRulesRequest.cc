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

#include <alibabacloud/ddoscoo/model/CreateNetworkRulesRequest.h>

using AlibabaCloud::Ddoscoo::Model::CreateNetworkRulesRequest;

CreateNetworkRulesRequest::CreateNetworkRulesRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "CreateNetworkRules") {
  setMethod(HttpRequest::Method::Post);
}

CreateNetworkRulesRequest::~CreateNetworkRulesRequest() {}

std::string CreateNetworkRulesRequest::getNetworkRules() const {
  return networkRules_;
}

void CreateNetworkRulesRequest::setNetworkRules(const std::string &networkRules) {
  networkRules_ = networkRules;
  setParameter(std::string("NetworkRules"), networkRules);
}

std::string CreateNetworkRulesRequest::getSourceIp() const {
  return sourceIp_;
}

void CreateNetworkRulesRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

