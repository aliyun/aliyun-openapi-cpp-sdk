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

#include <alibabacloud/mse/model/GetKubernetesSourceRequest.h>

using AlibabaCloud::Mse::Model::GetKubernetesSourceRequest;

GetKubernetesSourceRequest::GetKubernetesSourceRequest()
    : RpcServiceRequest("mse", "2019-05-31", "GetKubernetesSource") {
  setMethod(HttpRequest::Method::Post);
}

GetKubernetesSourceRequest::~GetKubernetesSourceRequest() {}

std::string GetKubernetesSourceRequest::getMseSessionId() const {
  return mseSessionId_;
}

void GetKubernetesSourceRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string GetKubernetesSourceRequest::getGatewayUniqueId() const {
  return gatewayUniqueId_;
}

void GetKubernetesSourceRequest::setGatewayUniqueId(const std::string &gatewayUniqueId) {
  gatewayUniqueId_ = gatewayUniqueId;
  setParameter(std::string("GatewayUniqueId"), gatewayUniqueId);
}

bool GetKubernetesSourceRequest::getIsAll() const {
  return isAll_;
}

void GetKubernetesSourceRequest::setIsAll(bool isAll) {
  isAll_ = isAll;
  setParameter(std::string("IsAll"), isAll ? "true" : "false");
}

std::string GetKubernetesSourceRequest::getVpcId() const {
  return vpcId_;
}

void GetKubernetesSourceRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

std::string GetKubernetesSourceRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void GetKubernetesSourceRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

