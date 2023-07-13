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

#include <alibabacloud/mse/model/GetLosslessRuleByAppRequest.h>

using AlibabaCloud::Mse::Model::GetLosslessRuleByAppRequest;

GetLosslessRuleByAppRequest::GetLosslessRuleByAppRequest()
    : RpcServiceRequest("mse", "2019-05-31", "GetLosslessRuleByApp") {
  setMethod(HttpRequest::Method::Post);
}

GetLosslessRuleByAppRequest::~GetLosslessRuleByAppRequest() {}

std::string GetLosslessRuleByAppRequest::getMseSessionId() const {
  return mseSessionId_;
}

void GetLosslessRuleByAppRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string GetLosslessRuleByAppRequest::getAppName() const {
  return appName_;
}

void GetLosslessRuleByAppRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string GetLosslessRuleByAppRequest::getRegionId() const {
  return regionId_;
}

void GetLosslessRuleByAppRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string GetLosslessRuleByAppRequest::getAppId() const {
  return appId_;
}

void GetLosslessRuleByAppRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string GetLosslessRuleByAppRequest::get_Namespace() const {
  return _namespace_;
}

void GetLosslessRuleByAppRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

std::string GetLosslessRuleByAppRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void GetLosslessRuleByAppRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

