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

#include <alibabacloud/mse/model/ListGatewayAuthConsumerResourceRequest.h>

using AlibabaCloud::Mse::Model::ListGatewayAuthConsumerResourceRequest;

ListGatewayAuthConsumerResourceRequest::ListGatewayAuthConsumerResourceRequest()
    : RpcServiceRequest("mse", "2019-05-31", "ListGatewayAuthConsumerResource") {
  setMethod(HttpRequest::Method::Post);
}

ListGatewayAuthConsumerResourceRequest::~ListGatewayAuthConsumerResourceRequest() {}

std::string ListGatewayAuthConsumerResourceRequest::getMseSessionId() const {
  return mseSessionId_;
}

void ListGatewayAuthConsumerResourceRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string ListGatewayAuthConsumerResourceRequest::getGatewayUniqueId() const {
  return gatewayUniqueId_;
}

void ListGatewayAuthConsumerResourceRequest::setGatewayUniqueId(const std::string &gatewayUniqueId) {
  gatewayUniqueId_ = gatewayUniqueId;
  setParameter(std::string("GatewayUniqueId"), gatewayUniqueId);
}

long ListGatewayAuthConsumerResourceRequest::getConsumerId() const {
  return consumerId_;
}

void ListGatewayAuthConsumerResourceRequest::setConsumerId(long consumerId) {
  consumerId_ = consumerId;
  setParameter(std::string("ConsumerId"), std::to_string(consumerId));
}

std::string ListGatewayAuthConsumerResourceRequest::getPageNum() const {
  return pageNum_;
}

void ListGatewayAuthConsumerResourceRequest::setPageNum(const std::string &pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), pageNum);
}

std::string ListGatewayAuthConsumerResourceRequest::getPageSize() const {
  return pageSize_;
}

void ListGatewayAuthConsumerResourceRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

std::string ListGatewayAuthConsumerResourceRequest::getRouteName() const {
  return routeName_;
}

void ListGatewayAuthConsumerResourceRequest::setRouteName(const std::string &routeName) {
  routeName_ = routeName;
  setParameter(std::string("RouteName"), routeName);
}

bool ListGatewayAuthConsumerResourceRequest::getResourceStatus() const {
  return resourceStatus_;
}

void ListGatewayAuthConsumerResourceRequest::setResourceStatus(bool resourceStatus) {
  resourceStatus_ = resourceStatus;
  setParameter(std::string("ResourceStatus"), resourceStatus ? "true" : "false");
}

std::string ListGatewayAuthConsumerResourceRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void ListGatewayAuthConsumerResourceRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

