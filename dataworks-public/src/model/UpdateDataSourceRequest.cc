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

#include <alibabacloud/dataworks-public/model/UpdateDataSourceRequest.h>

using AlibabaCloud::Dataworks_public::Model::UpdateDataSourceRequest;

UpdateDataSourceRequest::UpdateDataSourceRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "UpdateDataSource") {
  setMethod(HttpRequest::Method::Put);
}

UpdateDataSourceRequest::~UpdateDataSourceRequest() {}

std::string UpdateDataSourceRequest::getDescription() const {
  return description_;
}

void UpdateDataSourceRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string UpdateDataSourceRequest::getContent() const {
  return content_;
}

void UpdateDataSourceRequest::setContent(const std::string &content) {
  content_ = content;
  setParameter(std::string("Content"), content);
}

int UpdateDataSourceRequest::getEnvType() const {
  return envType_;
}

void UpdateDataSourceRequest::setEnvType(int envType) {
  envType_ = envType;
  setParameter(std::string("EnvType"), std::to_string(envType));
}

long UpdateDataSourceRequest::getDataSourceId() const {
  return dataSourceId_;
}

void UpdateDataSourceRequest::setDataSourceId(long dataSourceId) {
  dataSourceId_ = dataSourceId;
  setParameter(std::string("DataSourceId"), std::to_string(dataSourceId));
}

std::string UpdateDataSourceRequest::getStatus() const {
  return status_;
}

void UpdateDataSourceRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

