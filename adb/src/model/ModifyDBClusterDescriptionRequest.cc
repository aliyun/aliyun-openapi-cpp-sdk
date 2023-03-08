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

#include <alibabacloud/adb/model/ModifyDBClusterDescriptionRequest.h>

using AlibabaCloud::Adb::Model::ModifyDBClusterDescriptionRequest;

ModifyDBClusterDescriptionRequest::ModifyDBClusterDescriptionRequest()
    : RpcServiceRequest("adb", "2021-12-01", "ModifyDBClusterDescription") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBClusterDescriptionRequest::~ModifyDBClusterDescriptionRequest() {}

std::string ModifyDBClusterDescriptionRequest::getDBClusterDescription() const {
  return dBClusterDescription_;
}

void ModifyDBClusterDescriptionRequest::setDBClusterDescription(const std::string &dBClusterDescription) {
  dBClusterDescription_ = dBClusterDescription;
  setParameter(std::string("DBClusterDescription"), dBClusterDescription);
}

std::string ModifyDBClusterDescriptionRequest::getDBClusterId() const {
  return dBClusterId_;
}

void ModifyDBClusterDescriptionRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string ModifyDBClusterDescriptionRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDBClusterDescriptionRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

