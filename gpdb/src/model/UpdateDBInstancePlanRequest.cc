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

#include <alibabacloud/gpdb/model/UpdateDBInstancePlanRequest.h>

using AlibabaCloud::Gpdb::Model::UpdateDBInstancePlanRequest;

UpdateDBInstancePlanRequest::UpdateDBInstancePlanRequest()
    : RpcServiceRequest("gpdb", "2016-05-03", "UpdateDBInstancePlan") {
  setMethod(HttpRequest::Method::Post);
}

UpdateDBInstancePlanRequest::~UpdateDBInstancePlanRequest() {}

std::string UpdateDBInstancePlanRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void UpdateDBInstancePlanRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string UpdateDBInstancePlanRequest::getPlanStartDate() const {
  return planStartDate_;
}

void UpdateDBInstancePlanRequest::setPlanStartDate(const std::string &planStartDate) {
  planStartDate_ = planStartDate;
  setParameter(std::string("PlanStartDate"), planStartDate);
}

std::string UpdateDBInstancePlanRequest::getPlanConfig() const {
  return planConfig_;
}

void UpdateDBInstancePlanRequest::setPlanConfig(const std::string &planConfig) {
  planConfig_ = planConfig;
  setParameter(std::string("PlanConfig"), planConfig);
}

std::string UpdateDBInstancePlanRequest::getPlanName() const {
  return planName_;
}

void UpdateDBInstancePlanRequest::setPlanName(const std::string &planName) {
  planName_ = planName;
  setParameter(std::string("PlanName"), planName);
}

std::string UpdateDBInstancePlanRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void UpdateDBInstancePlanRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string UpdateDBInstancePlanRequest::getPlanDesc() const {
  return planDesc_;
}

void UpdateDBInstancePlanRequest::setPlanDesc(const std::string &planDesc) {
  planDesc_ = planDesc;
  setParameter(std::string("PlanDesc"), planDesc);
}

long UpdateDBInstancePlanRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateDBInstancePlanRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UpdateDBInstancePlanRequest::getPlanEndDate() const {
  return planEndDate_;
}

void UpdateDBInstancePlanRequest::setPlanEndDate(const std::string &planEndDate) {
  planEndDate_ = planEndDate;
  setParameter(std::string("PlanEndDate"), planEndDate);
}

std::string UpdateDBInstancePlanRequest::getPlanId() const {
  return planId_;
}

void UpdateDBInstancePlanRequest::setPlanId(const std::string &planId) {
  planId_ = planId;
  setParameter(std::string("PlanId"), planId);
}

