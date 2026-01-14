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

#include <alibabacloud/quickbi-public/model/QueryUserByMobileAccountRequest.h>

using AlibabaCloud::Quickbi_public::Model::QueryUserByMobileAccountRequest;

QueryUserByMobileAccountRequest::QueryUserByMobileAccountRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "QueryUserByMobileAccount") {
  setMethod(HttpRequest::Method::Post);
}

QueryUserByMobileAccountRequest::~QueryUserByMobileAccountRequest() {}

std::string QueryUserByMobileAccountRequest::getAccessPoint() const {
  return accessPoint_;
}

void QueryUserByMobileAccountRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

std::string QueryUserByMobileAccountRequest::getSignType() const {
  return signType_;
}

void QueryUserByMobileAccountRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

std::string QueryUserByMobileAccountRequest::getMobileUserId() const {
  return mobileUserId_;
}

void QueryUserByMobileAccountRequest::setMobileUserId(const std::string &mobileUserId) {
  mobileUserId_ = mobileUserId;
  setParameter(std::string("MobileUserId"), mobileUserId);
}

std::string QueryUserByMobileAccountRequest::getMobileType() const {
  return mobileType_;
}

void QueryUserByMobileAccountRequest::setMobileType(const std::string &mobileType) {
  mobileType_ = mobileType;
  setParameter(std::string("MobileType"), mobileType);
}

