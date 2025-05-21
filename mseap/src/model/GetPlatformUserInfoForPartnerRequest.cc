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

#include <alibabacloud/mseap/model/GetPlatformUserInfoForPartnerRequest.h>

using AlibabaCloud::Mseap::Model::GetPlatformUserInfoForPartnerRequest;

GetPlatformUserInfoForPartnerRequest::GetPlatformUserInfoForPartnerRequest()
    : RpcServiceRequest("mseap", "2021-01-18", "GetPlatformUserInfoForPartner") {
  setMethod(HttpRequest::Method::Post);
}

GetPlatformUserInfoForPartnerRequest::~GetPlatformUserInfoForPartnerRequest() {}

std::string GetPlatformUserInfoForPartnerRequest::getUserId() const {
  return userId_;
}

void GetPlatformUserInfoForPartnerRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string GetPlatformUserInfoForPartnerRequest::getAppId() const {
  return appId_;
}

void GetPlatformUserInfoForPartnerRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string GetPlatformUserInfoForPartnerRequest::getPlatformType() const {
  return platformType_;
}

void GetPlatformUserInfoForPartnerRequest::setPlatformType(const std::string &platformType) {
  platformType_ = platformType;
  setParameter(std::string("PlatformType"), platformType);
}

