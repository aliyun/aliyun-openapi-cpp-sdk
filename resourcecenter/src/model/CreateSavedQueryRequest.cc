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

#include <alibabacloud/resourcecenter/model/CreateSavedQueryRequest.h>

using AlibabaCloud::ResourceCenter::Model::CreateSavedQueryRequest;

CreateSavedQueryRequest::CreateSavedQueryRequest()
    : RpcServiceRequest("resourcecenter", "2022-12-01", "CreateSavedQuery") {
  setMethod(HttpRequest::Method::Post);
}

CreateSavedQueryRequest::~CreateSavedQueryRequest() {}

std::string CreateSavedQueryRequest::getExpression() const {
  return expression_;
}

void CreateSavedQueryRequest::setExpression(const std::string &expression) {
  expression_ = expression;
  setParameter(std::string("Expression"), expression);
}

std::string CreateSavedQueryRequest::getDescription() const {
  return description_;
}

void CreateSavedQueryRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateSavedQueryRequest::getName() const {
  return name_;
}

void CreateSavedQueryRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

