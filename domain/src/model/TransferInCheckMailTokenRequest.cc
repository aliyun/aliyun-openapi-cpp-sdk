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

#include <alibabacloud/domain/model/TransferInCheckMailTokenRequest.h>

using AlibabaCloud::Domain::Model::TransferInCheckMailTokenRequest;

TransferInCheckMailTokenRequest::TransferInCheckMailTokenRequest()
    : RpcServiceRequest("domain", "2018-01-29", "TransferInCheckMailToken") {
  setMethod(HttpRequest::Method::Post);
}

TransferInCheckMailTokenRequest::~TransferInCheckMailTokenRequest() {}

std::string TransferInCheckMailTokenRequest::getToken() const {
  return token_;
}

void TransferInCheckMailTokenRequest::setToken(const std::string &token) {
  token_ = token;
  setParameter(std::string("Token"), token);
}

std::string TransferInCheckMailTokenRequest::getUserClientIp() const {
  return userClientIp_;
}

void TransferInCheckMailTokenRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string TransferInCheckMailTokenRequest::getLang() const {
  return lang_;
}

void TransferInCheckMailTokenRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

