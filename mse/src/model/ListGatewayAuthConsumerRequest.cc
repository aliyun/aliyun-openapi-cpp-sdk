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

#include <alibabacloud/mse/model/ListGatewayAuthConsumerRequest.h>

using AlibabaCloud::Mse::Model::ListGatewayAuthConsumerRequest;

ListGatewayAuthConsumerRequest::ListGatewayAuthConsumerRequest()
    : RpcServiceRequest("mse", "2019-05-31", "ListGatewayAuthConsumer") {
  setMethod(HttpRequest::Method::Post);
}

ListGatewayAuthConsumerRequest::~ListGatewayAuthConsumerRequest() {}

std::string ListGatewayAuthConsumerRequest::getMseSessionId() const {
  return mseSessionId_;
}

void ListGatewayAuthConsumerRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string ListGatewayAuthConsumerRequest::getGatewayUniqueId() const {
  return gatewayUniqueId_;
}

void ListGatewayAuthConsumerRequest::setGatewayUniqueId(const std::string &gatewayUniqueId) {
  gatewayUniqueId_ = gatewayUniqueId;
  setParameter(std::string("GatewayUniqueId"), gatewayUniqueId);
}

std::string ListGatewayAuthConsumerRequest::getType() const {
  return type_;
}

void ListGatewayAuthConsumerRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string ListGatewayAuthConsumerRequest::getPageNum() const {
  return pageNum_;
}

void ListGatewayAuthConsumerRequest::setPageNum(const std::string &pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), pageNum);
}

std::string ListGatewayAuthConsumerRequest::getPageSize() const {
  return pageSize_;
}

void ListGatewayAuthConsumerRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

bool ListGatewayAuthConsumerRequest::getConsumerStatus() const {
  return consumerStatus_;
}

void ListGatewayAuthConsumerRequest::setConsumerStatus(bool consumerStatus) {
  consumerStatus_ = consumerStatus;
  setParameter(std::string("ConsumerStatus"), consumerStatus ? "true" : "false");
}

std::string ListGatewayAuthConsumerRequest::getName() const {
  return name_;
}

void ListGatewayAuthConsumerRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string ListGatewayAuthConsumerRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void ListGatewayAuthConsumerRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

