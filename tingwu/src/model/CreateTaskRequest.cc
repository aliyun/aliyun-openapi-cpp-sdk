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

#include <alibabacloud/tingwu/model/CreateTaskRequest.h>

using AlibabaCloud::Tingwu::Model::CreateTaskRequest;

CreateTaskRequest::CreateTaskRequest()
    : RoaServiceRequest("tingwu", "2023-09-30") {
  setResourcePath("/openapi/tingwu/v2/tasks"};
  setMethod(HttpRequest::Method::Put);
}

CreateTaskRequest::~CreateTaskRequest() {}

std::string CreateTaskRequest::getType() const {
  return type_;
}

void CreateTaskRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("type"), type);
}

std::string CreateTaskRequest::getBody() const {
  return body_;
}

void CreateTaskRequest::setBody(const std::string &body) {
  body_ = body;
  setBodyParameter(std::string("body"), body);
}

std::string CreateTaskRequest::getOperation() const {
  return operation_;
}

void CreateTaskRequest::setOperation(const std::string &operation) {
  operation_ = operation;
  setParameter(std::string("operation"), operation);
}

