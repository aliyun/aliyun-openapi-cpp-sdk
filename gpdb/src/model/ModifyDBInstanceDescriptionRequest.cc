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

#include <alibabacloud/gpdb/model/ModifyDBInstanceDescriptionRequest.h>

using AlibabaCloud::Gpdb::Model::ModifyDBInstanceDescriptionRequest;

ModifyDBInstanceDescriptionRequest::ModifyDBInstanceDescriptionRequest()
    : RpcServiceRequest("gpdb", "2016-05-03", "ModifyDBInstanceDescription") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBInstanceDescriptionRequest::~ModifyDBInstanceDescriptionRequest() {}

std::string ModifyDBInstanceDescriptionRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDBInstanceDescriptionRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyDBInstanceDescriptionRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ModifyDBInstanceDescriptionRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ModifyDBInstanceDescriptionRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ModifyDBInstanceDescriptionRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string ModifyDBInstanceDescriptionRequest::getDBInstanceDescription() const {
  return dBInstanceDescription_;
}

void ModifyDBInstanceDescriptionRequest::setDBInstanceDescription(const std::string &dBInstanceDescription) {
  dBInstanceDescription_ = dBInstanceDescription;
  setParameter(std::string("DBInstanceDescription"), dBInstanceDescription);
}

