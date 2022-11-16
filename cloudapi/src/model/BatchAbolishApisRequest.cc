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

#include <alibabacloud/cloudapi/model/BatchAbolishApisRequest.h>

using AlibabaCloud::CloudAPI::Model::BatchAbolishApisRequest;

BatchAbolishApisRequest::BatchAbolishApisRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "BatchAbolishApis") {
  setMethod(HttpRequest::Method::Post);
}

BatchAbolishApisRequest::~BatchAbolishApisRequest() {}

std::string BatchAbolishApisRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void BatchAbolishApisRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string BatchAbolishApisRequest::getSecurityToken() const {
  return securityToken_;
}

void BatchAbolishApisRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::vector<BatchAbolishApisRequest::Api> BatchAbolishApisRequest::getApi() const {
  return api_;
}

void BatchAbolishApisRequest::setApi(const std::vector<BatchAbolishApisRequest::Api> &api) {
  api_ = api;
  for(int dep1 = 0; dep1 != api.size(); dep1++) {
  auto apiObj = api.at(dep1);
  std::string apiObjStr = std::string("Api") + "." + std::to_string(dep1 + 1);
    setParameter(apiObjStr + ".StageName", apiObj.stageName);
    setParameter(apiObjStr + ".GroupId", apiObj.groupId);
    setParameter(apiObjStr + ".ApiUid", apiObj.apiUid);
    setParameter(apiObjStr + ".StageId", apiObj.stageId);
  }
}

