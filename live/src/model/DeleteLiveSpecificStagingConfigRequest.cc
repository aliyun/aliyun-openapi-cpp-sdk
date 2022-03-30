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

#include <alibabacloud/live/model/DeleteLiveSpecificStagingConfigRequest.h>

using AlibabaCloud::Live::Model::DeleteLiveSpecificStagingConfigRequest;

DeleteLiveSpecificStagingConfigRequest::DeleteLiveSpecificStagingConfigRequest()
    : RpcServiceRequest("live", "2016-11-01", "DeleteLiveSpecificStagingConfig") {
  setMethod(HttpRequest::Method::Post);
}

DeleteLiveSpecificStagingConfigRequest::~DeleteLiveSpecificStagingConfigRequest() {}

std::string DeleteLiveSpecificStagingConfigRequest::getSecurityToken() const {
  return securityToken_;
}

void DeleteLiveSpecificStagingConfigRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string DeleteLiveSpecificStagingConfigRequest::getDomainName() const {
  return domainName_;
}

void DeleteLiveSpecificStagingConfigRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long DeleteLiveSpecificStagingConfigRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteLiveSpecificStagingConfigRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteLiveSpecificStagingConfigRequest::getConfigId() const {
  return configId_;
}

void DeleteLiveSpecificStagingConfigRequest::setConfigId(const std::string &configId) {
  configId_ = configId;
  setParameter(std::string("ConfigId"), configId);
}

