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

#include <alibabacloud/gpdb/model/ModifyVectorConfigurationRequest.h>

using AlibabaCloud::Gpdb::Model::ModifyVectorConfigurationRequest;

ModifyVectorConfigurationRequest::ModifyVectorConfigurationRequest()
    : RpcServiceRequest("gpdb", "2016-05-03", "ModifyVectorConfiguration") {
  setMethod(HttpRequest::Method::Post);
}

ModifyVectorConfigurationRequest::~ModifyVectorConfigurationRequest() {}

std::string ModifyVectorConfigurationRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyVectorConfigurationRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyVectorConfigurationRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ModifyVectorConfigurationRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string ModifyVectorConfigurationRequest::getVectorConfigurationStatus() const {
  return vectorConfigurationStatus_;
}

void ModifyVectorConfigurationRequest::setVectorConfigurationStatus(const std::string &vectorConfigurationStatus) {
  vectorConfigurationStatus_ = vectorConfigurationStatus;
  setParameter(std::string("VectorConfigurationStatus"), vectorConfigurationStatus);
}

long ModifyVectorConfigurationRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyVectorConfigurationRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

