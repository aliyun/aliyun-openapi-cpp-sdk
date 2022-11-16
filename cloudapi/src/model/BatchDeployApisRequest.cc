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

#include <alibabacloud/cloudapi/model/BatchDeployApisRequest.h>

using AlibabaCloud::CloudAPI::Model::BatchDeployApisRequest;

BatchDeployApisRequest::BatchDeployApisRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "BatchDeployApis") {
  setMethod(HttpRequest::Method::Post);
}

BatchDeployApisRequest::~BatchDeployApisRequest() {}

std::string BatchDeployApisRequest::getStageName() const {
  return stageName_;
}

void BatchDeployApisRequest::setStageName(const std::string &stageName) {
  stageName_ = stageName;
  setParameter(std::string("StageName"), stageName);
}

std::string BatchDeployApisRequest::getDescription() const {
  return description_;
}

void BatchDeployApisRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string BatchDeployApisRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void BatchDeployApisRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string BatchDeployApisRequest::getSecurityToken() const {
  return securityToken_;
}

void BatchDeployApisRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::vector<BatchDeployApisRequest::Api> BatchDeployApisRequest::getApi() const {
  return api_;
}

void BatchDeployApisRequest::setApi(const std::vector<BatchDeployApisRequest::Api> &api) {
  api_ = api;
  for(int dep1 = 0; dep1 != api.size(); dep1++) {
  auto apiObj = api.at(dep1);
  std::string apiObjStr = std::string("Api") + "." + std::to_string(dep1 + 1);
    setParameter(apiObjStr + ".GroupId", apiObj.groupId);
    setParameter(apiObjStr + ".ApiUid", apiObj.apiUid);
  }
}

