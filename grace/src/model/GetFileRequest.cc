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

#include <alibabacloud/grace/model/GetFileRequest.h>

using AlibabaCloud::Grace::Model::GetFileRequest;

GetFileRequest::GetFileRequest()
    : RoaServiceRequest("grace", "2022-06-06") {
  setResourcePath("/GetFile"};
  setMethod(HttpRequest::Method::Get);
}

GetFileRequest::~GetFileRequest() {}

std::string GetFileRequest::getToken() const {
  return token_;
}

void GetFileRequest::setToken(const std::string &token) {
  token_ = token;
  setParameter(std::string("token"), token);
}

std::string GetFileRequest::getName() const {
  return name_;
}

void GetFileRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("name"), name);
}

