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

#include <alibabacloud/live/model/SetLiveDomainStagingConfigRequest.h>

using AlibabaCloud::Live::Model::SetLiveDomainStagingConfigRequest;

SetLiveDomainStagingConfigRequest::SetLiveDomainStagingConfigRequest()
    : RpcServiceRequest("live", "2016-11-01", "SetLiveDomainStagingConfig") {
  setMethod(HttpRequest::Method::Post);
}

SetLiveDomainStagingConfigRequest::~SetLiveDomainStagingConfigRequest() {}

std::string SetLiveDomainStagingConfigRequest::getFunctions() const {
  return functions_;
}

void SetLiveDomainStagingConfigRequest::setFunctions(const std::string &functions) {
  functions_ = functions;
  setParameter(std::string("Functions"), functions);
}

std::string SetLiveDomainStagingConfigRequest::getRegionId() const {
  return regionId_;
}

void SetLiveDomainStagingConfigRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string SetLiveDomainStagingConfigRequest::getDomainName() const {
  return domainName_;
}

void SetLiveDomainStagingConfigRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long SetLiveDomainStagingConfigRequest::getOwnerId() const {
  return ownerId_;
}

void SetLiveDomainStagingConfigRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

