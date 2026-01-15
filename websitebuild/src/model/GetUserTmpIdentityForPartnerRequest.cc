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

#include <alibabacloud/websitebuild/model/GetUserTmpIdentityForPartnerRequest.h>

using AlibabaCloud::WebsiteBuild::Model::GetUserTmpIdentityForPartnerRequest;

GetUserTmpIdentityForPartnerRequest::GetUserTmpIdentityForPartnerRequest()
    : RpcServiceRequest("websitebuild", "2025-04-29", "GetUserTmpIdentityForPartner") {
  setMethod(HttpRequest::Method::Post);
}

GetUserTmpIdentityForPartnerRequest::~GetUserTmpIdentityForPartnerRequest() {}

std::string GetUserTmpIdentityForPartnerRequest::getAuthPurpose() const {
  return authPurpose_;
}

void GetUserTmpIdentityForPartnerRequest::setAuthPurpose(const std::string &authPurpose) {
  authPurpose_ = authPurpose;
  setParameter(std::string("AuthPurpose"), authPurpose);
}

std::string GetUserTmpIdentityForPartnerRequest::getUserId() const {
  return userId_;
}

void GetUserTmpIdentityForPartnerRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string GetUserTmpIdentityForPartnerRequest::getExtend() const {
  return extend_;
}

void GetUserTmpIdentityForPartnerRequest::setExtend(const std::string &extend) {
  extend_ = extend;
  setParameter(std::string("Extend"), extend);
}

std::string GetUserTmpIdentityForPartnerRequest::getServiceLinkedRole() const {
  return serviceLinkedRole_;
}

void GetUserTmpIdentityForPartnerRequest::setServiceLinkedRole(const std::string &serviceLinkedRole) {
  serviceLinkedRole_ = serviceLinkedRole;
  setParameter(std::string("ServiceLinkedRole"), serviceLinkedRole);
}

std::string GetUserTmpIdentityForPartnerRequest::getBizId() const {
  return bizId_;
}

void GetUserTmpIdentityForPartnerRequest::setBizId(const std::string &bizId) {
  bizId_ = bizId;
  setParameter(std::string("BizId"), bizId);
}

