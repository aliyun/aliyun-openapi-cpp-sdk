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

#include <alibabacloud/mse/model/GetApplicationListWithMetircsRequest.h>

using AlibabaCloud::Mse::Model::GetApplicationListWithMetircsRequest;

GetApplicationListWithMetircsRequest::GetApplicationListWithMetircsRequest()
    : RpcServiceRequest("mse", "2019-05-31", "GetApplicationListWithMetircs") {
  setMethod(HttpRequest::Method::Post);
}

GetApplicationListWithMetircsRequest::~GetApplicationListWithMetircsRequest() {}

std::string GetApplicationListWithMetircsRequest::getMseSessionId() const {
  return mseSessionId_;
}

void GetApplicationListWithMetircsRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string GetApplicationListWithMetircsRequest::getSource() const {
  return source_;
}

void GetApplicationListWithMetircsRequest::setSource(const std::string &source) {
  source_ = source;
  setParameter(std::string("Source"), source);
}

int GetApplicationListWithMetircsRequest::getPageNumber() const {
  return pageNumber_;
}

void GetApplicationListWithMetircsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string GetApplicationListWithMetircsRequest::getAppName() const {
  return appName_;
}

void GetApplicationListWithMetircsRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

int GetApplicationListWithMetircsRequest::getPageSize() const {
  return pageSize_;
}

void GetApplicationListWithMetircsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string GetApplicationListWithMetircsRequest::getAppId() const {
  return appId_;
}

void GetApplicationListWithMetircsRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string GetApplicationListWithMetircsRequest::get_Namespace() const {
  return _namespace_;
}

void GetApplicationListWithMetircsRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

std::string GetApplicationListWithMetircsRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void GetApplicationListWithMetircsRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

std::string GetApplicationListWithMetircsRequest::getRegion() const {
  return region_;
}

void GetApplicationListWithMetircsRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

