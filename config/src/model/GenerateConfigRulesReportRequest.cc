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

#include <alibabacloud/config/model/GenerateConfigRulesReportRequest.h>

using AlibabaCloud::Config::Model::GenerateConfigRulesReportRequest;

GenerateConfigRulesReportRequest::GenerateConfigRulesReportRequest()
    : RpcServiceRequest("config", "2020-09-07", "GenerateConfigRulesReport") {
  setMethod(HttpRequest::Method::Post);
}

GenerateConfigRulesReportRequest::~GenerateConfigRulesReportRequest() {}

std::string GenerateConfigRulesReportRequest::getClientToken() const {
  return clientToken_;
}

void GenerateConfigRulesReportRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setBodyParameter(std::string("ClientToken"), clientToken);
}

std::string GenerateConfigRulesReportRequest::getConfigRuleIds() const {
  return configRuleIds_;
}

void GenerateConfigRulesReportRequest::setConfigRuleIds(const std::string &configRuleIds) {
  configRuleIds_ = configRuleIds;
  setBodyParameter(std::string("ConfigRuleIds"), configRuleIds);
}

