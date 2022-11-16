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

#include <alibabacloud/cloudapi/model/SdkGenerateByAppForRegionRequest.h>

using AlibabaCloud::CloudAPI::Model::SdkGenerateByAppForRegionRequest;

SdkGenerateByAppForRegionRequest::SdkGenerateByAppForRegionRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "SdkGenerateByAppForRegion") {
  setMethod(HttpRequest::Method::Post);
}

SdkGenerateByAppForRegionRequest::~SdkGenerateByAppForRegionRequest() {}

std::string SdkGenerateByAppForRegionRequest::getLanguage() const {
  return language_;
}

void SdkGenerateByAppForRegionRequest::setLanguage(const std::string &language) {
  language_ = language;
  setParameter(std::string("Language"), language);
}

std::string SdkGenerateByAppForRegionRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void SdkGenerateByAppForRegionRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string SdkGenerateByAppForRegionRequest::getSecurityToken() const {
  return securityToken_;
}

void SdkGenerateByAppForRegionRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

long SdkGenerateByAppForRegionRequest::getAppId() const {
  return appId_;
}

void SdkGenerateByAppForRegionRequest::setAppId(long appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), std::to_string(appId));
}

long SdkGenerateByAppForRegionRequest::getAliUid() const {
  return aliUid_;
}

void SdkGenerateByAppForRegionRequest::setAliUid(long aliUid) {
  aliUid_ = aliUid;
  setParameter(std::string("AliUid"), std::to_string(aliUid));
}

