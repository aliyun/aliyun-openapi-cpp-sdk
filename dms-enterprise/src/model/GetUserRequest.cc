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

#include <alibabacloud/dms-enterprise/model/GetUserRequest.h>

using AlibabaCloud::Dms_enterprise::Model::GetUserRequest;

GetUserRequest::GetUserRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "GetUser") {
  setMethod(HttpRequest::Method::Post);
}

GetUserRequest::~GetUserRequest() {}

std::string GetUserRequest::getUserId() const {
  return userId_;
}

void GetUserRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

long GetUserRequest::getTid() const {
  return tid_;
}

void GetUserRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

std::string GetUserRequest::getUid() const {
  return uid_;
}

void GetUserRequest::setUid(const std::string &uid) {
  uid_ = uid;
  setParameter(std::string("Uid"), uid);
}

