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

#include <alibabacloud/cloudapi/model/DetachApiProductRequest.h>

using AlibabaCloud::CloudAPI::Model::DetachApiProductRequest;

DetachApiProductRequest::DetachApiProductRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "DetachApiProduct") {
  setMethod(HttpRequest::Method::Post);
}

DetachApiProductRequest::~DetachApiProductRequest() {}

std::string DetachApiProductRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DetachApiProductRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::vector<DetachApiProductRequest::Apis> DetachApiProductRequest::getApis() const {
  return apis_;
}

void DetachApiProductRequest::setApis(const std::vector<DetachApiProductRequest::Apis> &apis) {
  apis_ = apis;
  for(int dep1 = 0; dep1 != apis.size(); dep1++) {
  auto apisObj = apis.at(dep1);
  std::string apisObjStr = std::string("Apis") + "." + std::to_string(dep1 + 1);
    setParameter(apisObjStr + ".StageName", apisObj.stageName);
    setParameter(apisObjStr + ".ApiId", apisObj.apiId);
  }
}

std::string DetachApiProductRequest::getSecurityToken() const {
  return securityToken_;
}

void DetachApiProductRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string DetachApiProductRequest::getApiProductId() const {
  return apiProductId_;
}

void DetachApiProductRequest::setApiProductId(const std::string &apiProductId) {
  apiProductId_ = apiProductId;
  setParameter(std::string("ApiProductId"), apiProductId);
}

