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

#include <alibabacloud/ram/model/CreateAccessKeyRequest.h>

using AlibabaCloud::Ram::Model::CreateAccessKeyRequest;

CreateAccessKeyRequest::CreateAccessKeyRequest()
    : RpcServiceRequest("ram", "2015-05-01", "CreateAccessKey") {
  setMethod(HttpRequest::Method::Post);
}

CreateAccessKeyRequest::~CreateAccessKeyRequest() {}

std::string CreateAccessKeyRequest::getUserName() const {
  return userName_;
}

void CreateAccessKeyRequest::setUserName(const std::string &userName) {
  userName_ = userName;
  setParameter(std::string("UserName"), userName);
}

