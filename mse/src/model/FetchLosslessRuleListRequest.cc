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

#include <alibabacloud/mse/model/FetchLosslessRuleListRequest.h>

using AlibabaCloud::Mse::Model::FetchLosslessRuleListRequest;

FetchLosslessRuleListRequest::FetchLosslessRuleListRequest()
    : RpcServiceRequest("mse", "2019-05-31", "FetchLosslessRuleList") {
  setMethod(HttpRequest::Method::Post);
}

FetchLosslessRuleListRequest::~FetchLosslessRuleListRequest() {}

std::string FetchLosslessRuleListRequest::getMseSessionId() const {
  return mseSessionId_;
}

void FetchLosslessRuleListRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

int FetchLosslessRuleListRequest::getPageNumber() const {
  return pageNumber_;
}

void FetchLosslessRuleListRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string FetchLosslessRuleListRequest::getAppName() const {
  return appName_;
}

void FetchLosslessRuleListRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string FetchLosslessRuleListRequest::getRegionId() const {
  return regionId_;
}

void FetchLosslessRuleListRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int FetchLosslessRuleListRequest::getPageSize() const {
  return pageSize_;
}

void FetchLosslessRuleListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string FetchLosslessRuleListRequest::getAppId() const {
  return appId_;
}

void FetchLosslessRuleListRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string FetchLosslessRuleListRequest::get_Namespace() const {
  return _namespace_;
}

void FetchLosslessRuleListRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

std::string FetchLosslessRuleListRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void FetchLosslessRuleListRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

