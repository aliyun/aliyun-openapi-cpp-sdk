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

#include <alibabacloud/mse/model/ListSSLCertRequest.h>

using AlibabaCloud::Mse::Model::ListSSLCertRequest;

ListSSLCertRequest::ListSSLCertRequest()
    : RpcServiceRequest("mse", "2019-05-31", "ListSSLCert") {
  setMethod(HttpRequest::Method::Post);
}

ListSSLCertRequest::~ListSSLCertRequest() {}

std::string ListSSLCertRequest::getMseSessionId() const {
  return mseSessionId_;
}

void ListSSLCertRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string ListSSLCertRequest::getGatewayUniqueId() const {
  return gatewayUniqueId_;
}

void ListSSLCertRequest::setGatewayUniqueId(const std::string &gatewayUniqueId) {
  gatewayUniqueId_ = gatewayUniqueId;
  setParameter(std::string("GatewayUniqueId"), gatewayUniqueId);
}

std::string ListSSLCertRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void ListSSLCertRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

