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

#include <alibabacloud/mse/model/DeleteGatewayAuthConsumerResourceRequest.h>

using AlibabaCloud::Mse::Model::DeleteGatewayAuthConsumerResourceRequest;

DeleteGatewayAuthConsumerResourceRequest::DeleteGatewayAuthConsumerResourceRequest()
    : RpcServiceRequest("mse", "2019-05-31", "DeleteGatewayAuthConsumerResource") {
  setMethod(HttpRequest::Method::Post);
}

DeleteGatewayAuthConsumerResourceRequest::~DeleteGatewayAuthConsumerResourceRequest() {}

std::string DeleteGatewayAuthConsumerResourceRequest::getMseSessionId() const {
  return mseSessionId_;
}

void DeleteGatewayAuthConsumerResourceRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string DeleteGatewayAuthConsumerResourceRequest::getGatewayUniqueId() const {
  return gatewayUniqueId_;
}

void DeleteGatewayAuthConsumerResourceRequest::setGatewayUniqueId(const std::string &gatewayUniqueId) {
  gatewayUniqueId_ = gatewayUniqueId;
  setParameter(std::string("GatewayUniqueId"), gatewayUniqueId);
}

long DeleteGatewayAuthConsumerResourceRequest::getConsumerId() const {
  return consumerId_;
}

void DeleteGatewayAuthConsumerResourceRequest::setConsumerId(long consumerId) {
  consumerId_ = consumerId;
  setParameter(std::string("ConsumerId"), std::to_string(consumerId));
}

std::string DeleteGatewayAuthConsumerResourceRequest::getIdList() const {
  return idList_;
}

void DeleteGatewayAuthConsumerResourceRequest::setIdList(const std::string &idList) {
  idList_ = idList;
  setParameter(std::string("IdList"), idList);
}

std::string DeleteGatewayAuthConsumerResourceRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void DeleteGatewayAuthConsumerResourceRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

