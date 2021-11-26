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

#include <alibabacloud/qualitycheck/model/AddRuleCategoryRequest.h>

using AlibabaCloud::Qualitycheck::Model::AddRuleCategoryRequest;

AddRuleCategoryRequest::AddRuleCategoryRequest()
    : RpcServiceRequest("qualitycheck", "2019-01-15", "AddRuleCategory") {
  setMethod(HttpRequest::Method::Post);
}

AddRuleCategoryRequest::~AddRuleCategoryRequest() {}

long AddRuleCategoryRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void AddRuleCategoryRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string AddRuleCategoryRequest::getJsonStr() const {
  return jsonStr_;
}

void AddRuleCategoryRequest::setJsonStr(const std::string &jsonStr) {
  jsonStr_ = jsonStr;
  setParameter(std::string("JsonStr"), jsonStr);
}

std::string AddRuleCategoryRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void AddRuleCategoryRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

