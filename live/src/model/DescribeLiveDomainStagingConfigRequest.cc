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

#include <alibabacloud/live/model/DescribeLiveDomainStagingConfigRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveDomainStagingConfigRequest;

DescribeLiveDomainStagingConfigRequest::DescribeLiveDomainStagingConfigRequest()
    : RpcServiceRequest("live", "2016-11-01", "DescribeLiveDomainStagingConfig") {
  setMethod(HttpRequest::Method::Post);
}

DescribeLiveDomainStagingConfigRequest::~DescribeLiveDomainStagingConfigRequest() {}

std::string DescribeLiveDomainStagingConfigRequest::getFunctionNames() const {
  return functionNames_;
}

void DescribeLiveDomainStagingConfigRequest::setFunctionNames(const std::string &functionNames) {
  functionNames_ = functionNames;
  setParameter(std::string("FunctionNames"), functionNames);
}

std::string DescribeLiveDomainStagingConfigRequest::getRegionId() const {
  return regionId_;
}

void DescribeLiveDomainStagingConfigRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeLiveDomainStagingConfigRequest::getDomainName() const {
  return domainName_;
}

void DescribeLiveDomainStagingConfigRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long DescribeLiveDomainStagingConfigRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeLiveDomainStagingConfigRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

