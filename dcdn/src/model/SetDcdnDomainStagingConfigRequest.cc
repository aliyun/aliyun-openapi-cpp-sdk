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

#include <alibabacloud/dcdn/model/SetDcdnDomainStagingConfigRequest.h>

using AlibabaCloud::Dcdn::Model::SetDcdnDomainStagingConfigRequest;

SetDcdnDomainStagingConfigRequest::SetDcdnDomainStagingConfigRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "SetDcdnDomainStagingConfig") {
  setMethod(HttpRequest::Method::Post);
}

SetDcdnDomainStagingConfigRequest::~SetDcdnDomainStagingConfigRequest() {}

std::string SetDcdnDomainStagingConfigRequest::getFunctions() const {
  return functions_;
}

void SetDcdnDomainStagingConfigRequest::setFunctions(const std::string &functions) {
  functions_ = functions;
  setParameter(std::string("Functions"), functions);
}

std::string SetDcdnDomainStagingConfigRequest::getDomainName() const {
  return domainName_;
}

void SetDcdnDomainStagingConfigRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

