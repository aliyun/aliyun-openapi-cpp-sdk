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

#include <alibabacloud/quickbi-public/model/ListUserGroupsByUserIdRequest.h>

using AlibabaCloud::Quickbi_public::Model::ListUserGroupsByUserIdRequest;

ListUserGroupsByUserIdRequest::ListUserGroupsByUserIdRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "ListUserGroupsByUserId") {
  setMethod(HttpRequest::Method::Post);
}

ListUserGroupsByUserIdRequest::~ListUserGroupsByUserIdRequest() {}

std::string ListUserGroupsByUserIdRequest::getAccessPoint() const {
  return accessPoint_;
}

void ListUserGroupsByUserIdRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

std::string ListUserGroupsByUserIdRequest::getSignType() const {
  return signType_;
}

void ListUserGroupsByUserIdRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

std::string ListUserGroupsByUserIdRequest::getUserId() const {
  return userId_;
}

void ListUserGroupsByUserIdRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

