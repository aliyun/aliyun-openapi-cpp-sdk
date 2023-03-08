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

#include <alibabacloud/adb/model/CreateSparkTemplateRequest.h>

using AlibabaCloud::Adb::Model::CreateSparkTemplateRequest;

CreateSparkTemplateRequest::CreateSparkTemplateRequest()
    : RpcServiceRequest("adb", "2021-12-01", "CreateSparkTemplate") {
  setMethod(HttpRequest::Method::Post);
}

CreateSparkTemplateRequest::~CreateSparkTemplateRequest() {}

std::string CreateSparkTemplateRequest::getDBClusterId() const {
  return dBClusterId_;
}

void CreateSparkTemplateRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setBodyParameter(std::string("DBClusterId"), dBClusterId);
}

std::string CreateSparkTemplateRequest::getAppType() const {
  return appType_;
}

void CreateSparkTemplateRequest::setAppType(const std::string &appType) {
  appType_ = appType;
  setBodyParameter(std::string("AppType"), appType);
}

std::string CreateSparkTemplateRequest::getType() const {
  return type_;
}

void CreateSparkTemplateRequest::setType(const std::string &type) {
  type_ = type;
  setBodyParameter(std::string("Type"), type);
}

long CreateSparkTemplateRequest::getParentId() const {
  return parentId_;
}

void CreateSparkTemplateRequest::setParentId(long parentId) {
  parentId_ = parentId;
  setBodyParameter(std::string("ParentId"), std::to_string(parentId));
}

std::string CreateSparkTemplateRequest::getName() const {
  return name_;
}

void CreateSparkTemplateRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("Name"), name);
}

