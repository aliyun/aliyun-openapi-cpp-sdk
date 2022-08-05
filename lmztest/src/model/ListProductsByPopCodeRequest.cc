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

#include <alibabacloud/lmztest/model/ListProductsByPopCodeRequest.h>

using AlibabaCloud::LmzTest::Model::ListProductsByPopCodeRequest;

ListProductsByPopCodeRequest::ListProductsByPopCodeRequest()
    : RpcServiceRequest("lmztest", "2010-10-11", "ListProductsByPopCode") {
  setMethod(HttpRequest::Method::Post);
}

ListProductsByPopCodeRequest::~ListProductsByPopCodeRequest() {}

std::string ListProductsByPopCodeRequest::getAuthKey() const {
  return authKey_;
}

void ListProductsByPopCodeRequest::setAuthKey(const std::string &authKey) {
  authKey_ = authKey;
  setParameter(std::string("AuthKey"), authKey);
}

std::string ListProductsByPopCodeRequest::getExtraParams() const {
  return extraParams_;
}

void ListProductsByPopCodeRequest::setExtraParams(const std::string &extraParams) {
  extraParams_ = extraParams;
  setBodyParameter(std::string("ExtraParams"), extraParams);
}

std::string ListProductsByPopCodeRequest::getServerClientIp() const {
  return serverClientIp_;
}

void ListProductsByPopCodeRequest::setServerClientIp(const std::string &serverClientIp) {
  serverClientIp_ = serverClientIp;
  setParameter(std::string("ServerClientIp"), serverClientIp);
}

std::string ListProductsByPopCodeRequest::getRequestId() const {
  return requestId_;
}

void ListProductsByPopCodeRequest::setRequestId(const std::string &requestId) {
  requestId_ = requestId;
  setParameter(std::string("RequestId"), requestId);
}

std::string ListProductsByPopCodeRequest::getClientIp() const {
  return clientIp_;
}

void ListProductsByPopCodeRequest::setClientIp(const std::string &clientIp) {
  clientIp_ = clientIp;
  setParameter(std::string("ClientIp"), clientIp);
}

std::string ListProductsByPopCodeRequest::getIdentityDTO() const {
  return identityDTO_;
}

void ListProductsByPopCodeRequest::setIdentityDTO(const std::string &identityDTO) {
  identityDTO_ = identityDTO;
  setBodyParameter(std::string("IdentityDTO"), identityDTO);
}

std::string ListProductsByPopCodeRequest::getEnv() const {
  return env_;
}

void ListProductsByPopCodeRequest::setEnv(const std::string &env) {
  env_ = env;
  setParameter(std::string("Env"), env);
}

std::string ListProductsByPopCodeRequest::getPopCode() const {
  return popCode_;
}

void ListProductsByPopCodeRequest::setPopCode(const std::string &popCode) {
  popCode_ = popCode;
  setParameter(std::string("PopCode"), popCode);
}

