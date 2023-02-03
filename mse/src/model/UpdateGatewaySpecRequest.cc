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

#include <alibabacloud/mse/model/UpdateGatewaySpecRequest.h>

using AlibabaCloud::Mse::Model::UpdateGatewaySpecRequest;

UpdateGatewaySpecRequest::UpdateGatewaySpecRequest()
    : RpcServiceRequest("mse", "2019-05-31", "UpdateGatewaySpec") {
  setMethod(HttpRequest::Method::Post);
}

UpdateGatewaySpecRequest::~UpdateGatewaySpecRequest() {}

std::string UpdateGatewaySpecRequest::getMseSessionId() const {
  return mseSessionId_;
}

void UpdateGatewaySpecRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string UpdateGatewaySpecRequest::getGatewayUniqueId() const {
  return gatewayUniqueId_;
}

void UpdateGatewaySpecRequest::setGatewayUniqueId(const std::string &gatewayUniqueId) {
  gatewayUniqueId_ = gatewayUniqueId;
  setParameter(std::string("GatewayUniqueId"), gatewayUniqueId);
}

int UpdateGatewaySpecRequest::getReplica() const {
  return replica_;
}

void UpdateGatewaySpecRequest::setReplica(int replica) {
  replica_ = replica;
  setParameter(std::string("Replica"), std::to_string(replica));
}

std::string UpdateGatewaySpecRequest::getSpec() const {
  return spec_;
}

void UpdateGatewaySpecRequest::setSpec(const std::string &spec) {
  spec_ = spec;
  setParameter(std::string("Spec"), spec);
}

std::string UpdateGatewaySpecRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void UpdateGatewaySpecRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

