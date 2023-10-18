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

#include <alibabacloud/vod/model/DeleteVodSpecificConfigRequest.h>

using AlibabaCloud::Vod::Model::DeleteVodSpecificConfigRequest;

DeleteVodSpecificConfigRequest::DeleteVodSpecificConfigRequest()
    : RpcServiceRequest("vod", "2017-03-21", "DeleteVodSpecificConfig") {
  setMethod(HttpRequest::Method::Post);
}

DeleteVodSpecificConfigRequest::~DeleteVodSpecificConfigRequest() {}

std::string DeleteVodSpecificConfigRequest::getDomainName() const {
  return domainName_;
}

void DeleteVodSpecificConfigRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long DeleteVodSpecificConfigRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteVodSpecificConfigRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteVodSpecificConfigRequest::getEnv() const {
  return env_;
}

void DeleteVodSpecificConfigRequest::setEnv(const std::string &env) {
  env_ = env;
  setParameter(std::string("Env"), env);
}

std::string DeleteVodSpecificConfigRequest::getSecurityToken() const {
  return securityToken_;
}

void DeleteVodSpecificConfigRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string DeleteVodSpecificConfigRequest::getConfigId() const {
  return configId_;
}

void DeleteVodSpecificConfigRequest::setConfigId(const std::string &configId) {
  configId_ = configId;
  setParameter(std::string("ConfigId"), configId);
}

