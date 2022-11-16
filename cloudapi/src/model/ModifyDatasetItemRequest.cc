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

#include <alibabacloud/cloudapi/model/ModifyDatasetItemRequest.h>

using AlibabaCloud::CloudAPI::Model::ModifyDatasetItemRequest;

ModifyDatasetItemRequest::ModifyDatasetItemRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "ModifyDatasetItem") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDatasetItemRequest::~ModifyDatasetItemRequest() {}

std::string ModifyDatasetItemRequest::getDescription() const {
  return description_;
}

void ModifyDatasetItemRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string ModifyDatasetItemRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDatasetItemRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyDatasetItemRequest::getSecurityToken() const {
  return securityToken_;
}

void ModifyDatasetItemRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string ModifyDatasetItemRequest::getExpiredTime() const {
  return expiredTime_;
}

void ModifyDatasetItemRequest::setExpiredTime(const std::string &expiredTime) {
  expiredTime_ = expiredTime;
  setParameter(std::string("ExpiredTime"), expiredTime);
}

std::string ModifyDatasetItemRequest::getDatasetId() const {
  return datasetId_;
}

void ModifyDatasetItemRequest::setDatasetId(const std::string &datasetId) {
  datasetId_ = datasetId;
  setParameter(std::string("DatasetId"), datasetId);
}

std::string ModifyDatasetItemRequest::getDatasetItemId() const {
  return datasetItemId_;
}

void ModifyDatasetItemRequest::setDatasetItemId(const std::string &datasetItemId) {
  datasetItemId_ = datasetItemId;
  setParameter(std::string("DatasetItemId"), datasetItemId);
}

