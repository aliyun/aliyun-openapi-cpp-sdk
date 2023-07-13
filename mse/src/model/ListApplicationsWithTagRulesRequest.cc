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

#include <alibabacloud/mse/model/ListApplicationsWithTagRulesRequest.h>

using AlibabaCloud::Mse::Model::ListApplicationsWithTagRulesRequest;

ListApplicationsWithTagRulesRequest::ListApplicationsWithTagRulesRequest()
    : RpcServiceRequest("mse", "2019-05-31", "ListApplicationsWithTagRules") {
  setMethod(HttpRequest::Method::Get);
}

ListApplicationsWithTagRulesRequest::~ListApplicationsWithTagRulesRequest() {}

std::string ListApplicationsWithTagRulesRequest::getMseSessionId() const {
  return mseSessionId_;
}

void ListApplicationsWithTagRulesRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string ListApplicationsWithTagRulesRequest::getSource() const {
  return source_;
}

void ListApplicationsWithTagRulesRequest::setSource(const std::string &source) {
  source_ = source;
  setParameter(std::string("Source"), source);
}

int ListApplicationsWithTagRulesRequest::getPageNumber() const {
  return pageNumber_;
}

void ListApplicationsWithTagRulesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListApplicationsWithTagRulesRequest::getAppName() const {
  return appName_;
}

void ListApplicationsWithTagRulesRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

int ListApplicationsWithTagRulesRequest::getPageSize() const {
  return pageSize_;
}

void ListApplicationsWithTagRulesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListApplicationsWithTagRulesRequest::getAppId() const {
  return appId_;
}

void ListApplicationsWithTagRulesRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string ListApplicationsWithTagRulesRequest::get_Namespace() const {
  return _namespace_;
}

void ListApplicationsWithTagRulesRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

std::string ListApplicationsWithTagRulesRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void ListApplicationsWithTagRulesRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

std::string ListApplicationsWithTagRulesRequest::getRegion() const {
  return region_;
}

void ListApplicationsWithTagRulesRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

