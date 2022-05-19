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

#include <alibabacloud/idaas-doraemon/model/FetchAccessTokenRequest.h>

using AlibabaCloud::Idaas_doraemon::Model::FetchAccessTokenRequest;

FetchAccessTokenRequest::FetchAccessTokenRequest()
    : RpcServiceRequest("idaas-doraemon", "2021-05-20", "FetchAccessToken") {
  setMethod(HttpRequest::Method::Post);
}

FetchAccessTokenRequest::~FetchAccessTokenRequest() {}

std::string FetchAccessTokenRequest::getUserId() const {
  return userId_;
}

void FetchAccessTokenRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string FetchAccessTokenRequest::getXClientIp() const {
  return xClientIp_;
}

void FetchAccessTokenRequest::setXClientIp(const std::string &xClientIp) {
  xClientIp_ = xClientIp;
  setParameter(std::string("XClientIp"), xClientIp);
}

std::string FetchAccessTokenRequest::getMobileExtendParamsJsonSign() const {
  return mobileExtendParamsJsonSign_;
}

void FetchAccessTokenRequest::setMobileExtendParamsJsonSign(const std::string &mobileExtendParamsJsonSign) {
  mobileExtendParamsJsonSign_ = mobileExtendParamsJsonSign;
  setParameter(std::string("MobileExtendParamsJsonSign"), mobileExtendParamsJsonSign);
}

std::string FetchAccessTokenRequest::getServerExtendParamsJson() const {
  return serverExtendParamsJson_;
}

void FetchAccessTokenRequest::setServerExtendParamsJson(const std::string &serverExtendParamsJson) {
  serverExtendParamsJson_ = serverExtendParamsJson;
  setParameter(std::string("ServerExtendParamsJson"), serverExtendParamsJson);
}

std::string FetchAccessTokenRequest::getMobileExtendParamsJson() const {
  return mobileExtendParamsJson_;
}

void FetchAccessTokenRequest::setMobileExtendParamsJson(const std::string &mobileExtendParamsJson) {
  mobileExtendParamsJson_ = mobileExtendParamsJson;
  setParameter(std::string("MobileExtendParamsJson"), mobileExtendParamsJson);
}

std::string FetchAccessTokenRequest::getApplicationExternalId() const {
  return applicationExternalId_;
}

void FetchAccessTokenRequest::setApplicationExternalId(const std::string &applicationExternalId) {
  applicationExternalId_ = applicationExternalId;
  setParameter(std::string("ApplicationExternalId"), applicationExternalId);
}

