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

#include <alibabacloud/mse/model/CreateApplicationRequest.h>

using AlibabaCloud::Mse::Model::CreateApplicationRequest;

CreateApplicationRequest::CreateApplicationRequest()
    : RpcServiceRequest("mse", "2019-05-31", "CreateApplication") {
  setMethod(HttpRequest::Method::Post);
}

CreateApplicationRequest::~CreateApplicationRequest() {}

std::string CreateApplicationRequest::getMseSessionId() const {
  return mseSessionId_;
}

void CreateApplicationRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string CreateApplicationRequest::getLanguage() const {
  return language_;
}

void CreateApplicationRequest::setLanguage(const std::string &language) {
  language_ = language;
  setParameter(std::string("Language"), language);
}

std::string CreateApplicationRequest::getSource() const {
  return source_;
}

void CreateApplicationRequest::setSource(const std::string &source) {
  source_ = source;
  setParameter(std::string("Source"), source);
}

std::string CreateApplicationRequest::getExtraInfo() const {
  return extraInfo_;
}

void CreateApplicationRequest::setExtraInfo(const std::string &extraInfo) {
  extraInfo_ = extraInfo;
  setParameter(std::string("ExtraInfo"), extraInfo);
}

std::string CreateApplicationRequest::getAppName() const {
  return appName_;
}

void CreateApplicationRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string CreateApplicationRequest::getSwitchEnable() const {
  return switchEnable_;
}

void CreateApplicationRequest::setSwitchEnable(const std::string &switchEnable) {
  switchEnable_ = switchEnable;
  setParameter(std::string("SwitchEnable"), switchEnable);
}

std::string CreateApplicationRequest::get_Namespace() const {
  return _namespace_;
}

void CreateApplicationRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

std::string CreateApplicationRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void CreateApplicationRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

std::string CreateApplicationRequest::getSentinelEnable() const {
  return sentinelEnable_;
}

void CreateApplicationRequest::setSentinelEnable(const std::string &sentinelEnable) {
  sentinelEnable_ = sentinelEnable;
  setParameter(std::string("SentinelEnable"), sentinelEnable);
}

std::string CreateApplicationRequest::getRegion() const {
  return region_;
}

void CreateApplicationRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

