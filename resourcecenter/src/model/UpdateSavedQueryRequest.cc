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

#include <alibabacloud/resourcecenter/model/UpdateSavedQueryRequest.h>

using AlibabaCloud::ResourceCenter::Model::UpdateSavedQueryRequest;

UpdateSavedQueryRequest::UpdateSavedQueryRequest()
    : RpcServiceRequest("resourcecenter", "2022-12-01", "UpdateSavedQuery") {
  setMethod(HttpRequest::Method::Post);
}

UpdateSavedQueryRequest::~UpdateSavedQueryRequest() {}

std::string UpdateSavedQueryRequest::getExpression() const {
  return expression_;
}

void UpdateSavedQueryRequest::setExpression(const std::string &expression) {
  expression_ = expression;
  setParameter(std::string("Expression"), expression);
}

std::string UpdateSavedQueryRequest::getDescription() const {
  return description_;
}

void UpdateSavedQueryRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string UpdateSavedQueryRequest::getQueryId() const {
  return queryId_;
}

void UpdateSavedQueryRequest::setQueryId(const std::string &queryId) {
  queryId_ = queryId;
  setParameter(std::string("QueryId"), queryId);
}

std::string UpdateSavedQueryRequest::getName() const {
  return name_;
}

void UpdateSavedQueryRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

