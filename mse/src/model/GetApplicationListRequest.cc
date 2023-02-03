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

#include <alibabacloud/mse/model/GetApplicationListRequest.h>

using AlibabaCloud::Mse::Model::GetApplicationListRequest;

GetApplicationListRequest::GetApplicationListRequest()
    : RpcServiceRequest("mse", "2019-05-31", "GetApplicationList") {
  setMethod(HttpRequest::Method::Post);
}

GetApplicationListRequest::~GetApplicationListRequest() {}

std::string GetApplicationListRequest::getMseSessionId() const {
  return mseSessionId_;
}

void GetApplicationListRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string GetApplicationListRequest::getLanguage() const {
  return language_;
}

void GetApplicationListRequest::setLanguage(const std::string &language) {
  language_ = language;
  setParameter(std::string("Language"), language);
}

std::string GetApplicationListRequest::getSource() const {
  return source_;
}

void GetApplicationListRequest::setSource(const std::string &source) {
  source_ = source;
  setParameter(std::string("Source"), source);
}

int GetApplicationListRequest::getPageNumber() const {
  return pageNumber_;
}

void GetApplicationListRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string GetApplicationListRequest::getAppName() const {
  return appName_;
}

void GetApplicationListRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

int GetApplicationListRequest::getPageSize() const {
  return pageSize_;
}

void GetApplicationListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

bool GetApplicationListRequest::getSwitchEnable() const {
  return switchEnable_;
}

void GetApplicationListRequest::setSwitchEnable(bool switchEnable) {
  switchEnable_ = switchEnable;
  setParameter(std::string("SwitchEnable"), switchEnable ? "true" : "false");
}

std::string GetApplicationListRequest::getAppId() const {
  return appId_;
}

void GetApplicationListRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string GetApplicationListRequest::get_Namespace() const {
  return _namespace_;
}

void GetApplicationListRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

std::string GetApplicationListRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void GetApplicationListRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

bool GetApplicationListRequest::getSentinelEnable() const {
  return sentinelEnable_;
}

void GetApplicationListRequest::setSentinelEnable(bool sentinelEnable) {
  sentinelEnable_ = sentinelEnable;
  setParameter(std::string("SentinelEnable"), sentinelEnable ? "true" : "false");
}

std::string GetApplicationListRequest::getRegion() const {
  return region_;
}

void GetApplicationListRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

