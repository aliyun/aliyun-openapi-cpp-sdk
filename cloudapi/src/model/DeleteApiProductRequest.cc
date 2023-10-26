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

#include <alibabacloud/cloudapi/model/DeleteApiProductRequest.h>

using AlibabaCloud::CloudAPI::Model::DeleteApiProductRequest;

DeleteApiProductRequest::DeleteApiProductRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "DeleteApiProduct") {
  setMethod(HttpRequest::Method::Post);
}

DeleteApiProductRequest::~DeleteApiProductRequest() {}

std::string DeleteApiProductRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DeleteApiProductRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DeleteApiProductRequest::getSecurityToken() const {
  return securityToken_;
}

void DeleteApiProductRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string DeleteApiProductRequest::getApiProductId() const {
  return apiProductId_;
}

void DeleteApiProductRequest::setApiProductId(const std::string &apiProductId) {
  apiProductId_ = apiProductId;
  setParameter(std::string("ApiProductId"), apiProductId);
}

