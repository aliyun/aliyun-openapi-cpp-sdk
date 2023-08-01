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

#include <alibabacloud/grace/model/AnalyzeFileRequest.h>

using AlibabaCloud::Grace::Model::AnalyzeFileRequest;

AnalyzeFileRequest::AnalyzeFileRequest()
    : RoaServiceRequest("grace", "2022-06-06") {
  setResourcePath("/AnalyzeFile"};
  setMethod(HttpRequest::Method::Post);
}

AnalyzeFileRequest::~AnalyzeFileRequest() {}

bool AnalyzeFileRequest::getKeepUnreachableObjects() const {
  return keepUnreachableObjects_;
}

void AnalyzeFileRequest::setKeepUnreachableObjects(bool keepUnreachableObjects) {
  keepUnreachableObjects_ = keepUnreachableObjects;
  setParameter(std::string("keepUnreachableObjects"), keepUnreachableObjects ? "true" : "false");
}

std::string AnalyzeFileRequest::getToken() const {
  return token_;
}

void AnalyzeFileRequest::setToken(const std::string &token) {
  token_ = token;
  setParameter(std::string("token"), token);
}

std::string AnalyzeFileRequest::getName() const {
  return name_;
}

void AnalyzeFileRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("name"), name);
}

