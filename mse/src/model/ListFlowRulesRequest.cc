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

#include <alibabacloud/mse/model/ListFlowRulesRequest.h>

using AlibabaCloud::Mse::Model::ListFlowRulesRequest;

ListFlowRulesRequest::ListFlowRulesRequest()
    : RpcServiceRequest("mse", "2019-05-31", "ListFlowRules") {
  setMethod(HttpRequest::Method::Post);
}

ListFlowRulesRequest::~ListFlowRulesRequest() {}

std::string ListFlowRulesRequest::getMseSessionId() const {
  return mseSessionId_;
}

void ListFlowRulesRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string ListFlowRulesRequest::getAppName() const {
  return appName_;
}

void ListFlowRulesRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

int ListFlowRulesRequest::getPageSize() const {
  return pageSize_;
}

void ListFlowRulesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int ListFlowRulesRequest::getPageIndex() const {
  return pageIndex_;
}

void ListFlowRulesRequest::setPageIndex(int pageIndex) {
  pageIndex_ = pageIndex;
  setParameter(std::string("PageIndex"), std::to_string(pageIndex));
}

std::string ListFlowRulesRequest::getResource() const {
  return resource_;
}

void ListFlowRulesRequest::setResource(const std::string &resource) {
  resource_ = resource;
  setParameter(std::string("Resource"), resource);
}

std::string ListFlowRulesRequest::getAppId() const {
  return appId_;
}

void ListFlowRulesRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string ListFlowRulesRequest::get_Namespace() const {
  return _namespace_;
}

void ListFlowRulesRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

std::string ListFlowRulesRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void ListFlowRulesRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

std::string ListFlowRulesRequest::getResourceSearchKey() const {
  return resourceSearchKey_;
}

void ListFlowRulesRequest::setResourceSearchKey(const std::string &resourceSearchKey) {
  resourceSearchKey_ = resourceSearchKey;
  setParameter(std::string("ResourceSearchKey"), resourceSearchKey);
}

