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

#include <alibabacloud/mse/model/ListCircuitBreakerRulesRequest.h>

using AlibabaCloud::Mse::Model::ListCircuitBreakerRulesRequest;

ListCircuitBreakerRulesRequest::ListCircuitBreakerRulesRequest()
    : RpcServiceRequest("mse", "2019-05-31", "ListCircuitBreakerRules") {
  setMethod(HttpRequest::Method::Post);
}

ListCircuitBreakerRulesRequest::~ListCircuitBreakerRulesRequest() {}

std::string ListCircuitBreakerRulesRequest::getMseSessionId() const {
  return mseSessionId_;
}

void ListCircuitBreakerRulesRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string ListCircuitBreakerRulesRequest::getAppName() const {
  return appName_;
}

void ListCircuitBreakerRulesRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

int ListCircuitBreakerRulesRequest::getPageSize() const {
  return pageSize_;
}

void ListCircuitBreakerRulesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int ListCircuitBreakerRulesRequest::getPageIndex() const {
  return pageIndex_;
}

void ListCircuitBreakerRulesRequest::setPageIndex(int pageIndex) {
  pageIndex_ = pageIndex;
  setParameter(std::string("PageIndex"), std::to_string(pageIndex));
}

std::string ListCircuitBreakerRulesRequest::getResource() const {
  return resource_;
}

void ListCircuitBreakerRulesRequest::setResource(const std::string &resource) {
  resource_ = resource;
  setParameter(std::string("Resource"), resource);
}

std::string ListCircuitBreakerRulesRequest::getAppId() const {
  return appId_;
}

void ListCircuitBreakerRulesRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string ListCircuitBreakerRulesRequest::get_Namespace() const {
  return _namespace_;
}

void ListCircuitBreakerRulesRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

std::string ListCircuitBreakerRulesRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void ListCircuitBreakerRulesRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

std::string ListCircuitBreakerRulesRequest::getResourceSearchKey() const {
  return resourceSearchKey_;
}

void ListCircuitBreakerRulesRequest::setResourceSearchKey(const std::string &resourceSearchKey) {
  resourceSearchKey_ = resourceSearchKey;
  setParameter(std::string("ResourceSearchKey"), resourceSearchKey);
}

