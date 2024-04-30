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

#include <alibabacloud/dcdn/model/PublishDcdnStagingConfigToProductionRequest.h>

using AlibabaCloud::Dcdn::Model::PublishDcdnStagingConfigToProductionRequest;

PublishDcdnStagingConfigToProductionRequest::PublishDcdnStagingConfigToProductionRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "PublishDcdnStagingConfigToProduction") {
  setMethod(HttpRequest::Method::Post);
}

PublishDcdnStagingConfigToProductionRequest::~PublishDcdnStagingConfigToProductionRequest() {}

std::string PublishDcdnStagingConfigToProductionRequest::getFunctionName() const {
  return functionName_;
}

void PublishDcdnStagingConfigToProductionRequest::setFunctionName(const std::string &functionName) {
  functionName_ = functionName;
  setParameter(std::string("FunctionName"), functionName);
}

std::string PublishDcdnStagingConfigToProductionRequest::getDomainName() const {
  return domainName_;
}

void PublishDcdnStagingConfigToProductionRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

