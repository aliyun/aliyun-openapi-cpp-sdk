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

#include <alibabacloud/mse/model/CreateMseServiceApplicationRequest.h>

using AlibabaCloud::Mse::Model::CreateMseServiceApplicationRequest;

CreateMseServiceApplicationRequest::CreateMseServiceApplicationRequest()
    : RpcServiceRequest("mse", "2019-05-31", "CreateMseServiceApplication") {
  setMethod(HttpRequest::Method::Post);
}

CreateMseServiceApplicationRequest::~CreateMseServiceApplicationRequest() {}

std::string CreateMseServiceApplicationRequest::getMseSessionId() const {
  return mseSessionId_;
}

void CreateMseServiceApplicationRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string CreateMseServiceApplicationRequest::getLanguage() const {
  return language_;
}

void CreateMseServiceApplicationRequest::setLanguage(const std::string &language) {
  language_ = language;
  setParameter(std::string("Language"), language);
}

std::string CreateMseServiceApplicationRequest::getSource() const {
  return source_;
}

void CreateMseServiceApplicationRequest::setSource(const std::string &source) {
  source_ = source;
  setParameter(std::string("Source"), source);
}

std::string CreateMseServiceApplicationRequest::getExtraInfo() const {
  return extraInfo_;
}

void CreateMseServiceApplicationRequest::setExtraInfo(const std::string &extraInfo) {
  extraInfo_ = extraInfo;
  setParameter(std::string("ExtraInfo"), extraInfo);
}

std::string CreateMseServiceApplicationRequest::getAppName() const {
  return appName_;
}

void CreateMseServiceApplicationRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string CreateMseServiceApplicationRequest::getSwitchEnable() const {
  return switchEnable_;
}

void CreateMseServiceApplicationRequest::setSwitchEnable(const std::string &switchEnable) {
  switchEnable_ = switchEnable;
  setParameter(std::string("SwitchEnable"), switchEnable);
}

std::string CreateMseServiceApplicationRequest::getMseVersion() const {
  return mseVersion_;
}

void CreateMseServiceApplicationRequest::setMseVersion(const std::string &mseVersion) {
  mseVersion_ = mseVersion;
  setParameter(std::string("MseVersion"), mseVersion);
}

std::string CreateMseServiceApplicationRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void CreateMseServiceApplicationRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

std::string CreateMseServiceApplicationRequest::getSentinelEnable() const {
  return sentinelEnable_;
}

void CreateMseServiceApplicationRequest::setSentinelEnable(const std::string &sentinelEnable) {
  sentinelEnable_ = sentinelEnable;
  setParameter(std::string("SentinelEnable"), sentinelEnable);
}

std::string CreateMseServiceApplicationRequest::getRegion() const {
  return region_;
}

void CreateMseServiceApplicationRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

