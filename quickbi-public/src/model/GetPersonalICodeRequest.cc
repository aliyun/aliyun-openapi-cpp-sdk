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

#include <alibabacloud/quickbi-public/model/GetPersonalICodeRequest.h>

using AlibabaCloud::Quickbi_public::Model::GetPersonalICodeRequest;

GetPersonalICodeRequest::GetPersonalICodeRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "GetPersonalICode") {
  setMethod(HttpRequest::Method::Post);
}

GetPersonalICodeRequest::~GetPersonalICodeRequest() {}

std::string GetPersonalICodeRequest::getAccessPoint() const {
  return accessPoint_;
}

void GetPersonalICodeRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

std::string GetPersonalICodeRequest::getSignType() const {
  return signType_;
}

void GetPersonalICodeRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

std::string GetPersonalICodeRequest::getQuickBIUserId() const {
  return quickBIUserId_;
}

void GetPersonalICodeRequest::setQuickBIUserId(const std::string &quickBIUserId) {
  quickBIUserId_ = quickBIUserId;
  setParameter(std::string("QuickBIUserId"), quickBIUserId);
}

