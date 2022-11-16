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

#include <alibabacloud/cloudapi/model/CreateDatasetItemRequest.h>

using AlibabaCloud::CloudAPI::Model::CreateDatasetItemRequest;

CreateDatasetItemRequest::CreateDatasetItemRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "CreateDatasetItem") {
  setMethod(HttpRequest::Method::Post);
}

CreateDatasetItemRequest::~CreateDatasetItemRequest() {}

std::string CreateDatasetItemRequest::getDescription() const {
  return description_;
}

void CreateDatasetItemRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateDatasetItemRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateDatasetItemRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateDatasetItemRequest::getSecurityToken() const {
  return securityToken_;
}

void CreateDatasetItemRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string CreateDatasetItemRequest::getExpiredTime() const {
  return expiredTime_;
}

void CreateDatasetItemRequest::setExpiredTime(const std::string &expiredTime) {
  expiredTime_ = expiredTime;
  setParameter(std::string("ExpiredTime"), expiredTime);
}

std::string CreateDatasetItemRequest::getDatasetId() const {
  return datasetId_;
}

void CreateDatasetItemRequest::setDatasetId(const std::string &datasetId) {
  datasetId_ = datasetId;
  setParameter(std::string("DatasetId"), datasetId);
}

std::string CreateDatasetItemRequest::getValue() const {
  return value_;
}

void CreateDatasetItemRequest::setValue(const std::string &value) {
  value_ = value;
  setParameter(std::string("Value"), value);
}

