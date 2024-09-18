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

#include <alibabacloud/quickbi-public/model/AddShareReportRequest.h>

using AlibabaCloud::Quickbi_public::Model::AddShareReportRequest;

AddShareReportRequest::AddShareReportRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "AddShareReport") {
  setMethod(HttpRequest::Method::Post);
}

AddShareReportRequest::~AddShareReportRequest() {}

std::string AddShareReportRequest::getClientToken() const {
  return clientToken_;
}

void AddShareReportRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string AddShareReportRequest::getAccessPoint() const {
  return accessPoint_;
}

void AddShareReportRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

long AddShareReportRequest::getExpireDate() const {
  return expireDate_;
}

void AddShareReportRequest::setExpireDate(long expireDate) {
  expireDate_ = expireDate;
  setParameter(std::string("ExpireDate"), std::to_string(expireDate));
}

int AddShareReportRequest::getAuthPoint() const {
  return authPoint_;
}

void AddShareReportRequest::setAuthPoint(int authPoint) {
  authPoint_ = authPoint;
  setParameter(std::string("AuthPoint"), std::to_string(authPoint));
}

std::string AddShareReportRequest::getSignType() const {
  return signType_;
}

void AddShareReportRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

int AddShareReportRequest::getShareToType() const {
  return shareToType_;
}

void AddShareReportRequest::setShareToType(int shareToType) {
  shareToType_ = shareToType;
  setParameter(std::string("ShareToType"), std::to_string(shareToType));
}

std::string AddShareReportRequest::getWorksId() const {
  return worksId_;
}

void AddShareReportRequest::setWorksId(const std::string &worksId) {
  worksId_ = worksId;
  setParameter(std::string("WorksId"), worksId);
}

std::string AddShareReportRequest::getShareToId() const {
  return shareToId_;
}

void AddShareReportRequest::setShareToId(const std::string &shareToId) {
  shareToId_ = shareToId;
  setParameter(std::string("ShareToId"), shareToId);
}

