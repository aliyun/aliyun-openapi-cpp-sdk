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

#include <alibabacloud/adb/model/DeleteProcessInstanceRequest.h>

using AlibabaCloud::Adb::Model::DeleteProcessInstanceRequest;

DeleteProcessInstanceRequest::DeleteProcessInstanceRequest()
    : RpcServiceRequest("adb", "2021-12-01", "DeleteProcessInstance") {
  setMethod(HttpRequest::Method::Post);
}

DeleteProcessInstanceRequest::~DeleteProcessInstanceRequest() {}

long DeleteProcessInstanceRequest::getProjectCode() const {
  return projectCode_;
}

void DeleteProcessInstanceRequest::setProjectCode(long projectCode) {
  projectCode_ = projectCode;
  setParameter(std::string("ProjectCode"), std::to_string(projectCode));
}

std::string DeleteProcessInstanceRequest::getRegionId() const {
  return regionId_;
}

void DeleteProcessInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteProcessInstanceRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DeleteProcessInstanceRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

long DeleteProcessInstanceRequest::getProcessInstanceId() const {
  return processInstanceId_;
}

void DeleteProcessInstanceRequest::setProcessInstanceId(long processInstanceId) {
  processInstanceId_ = processInstanceId;
  setParameter(std::string("ProcessInstanceId"), std::to_string(processInstanceId));
}

