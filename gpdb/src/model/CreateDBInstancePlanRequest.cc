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

#include <alibabacloud/gpdb/model/CreateDBInstancePlanRequest.h>

using AlibabaCloud::Gpdb::Model::CreateDBInstancePlanRequest;

CreateDBInstancePlanRequest::CreateDBInstancePlanRequest()
    : RpcServiceRequest("gpdb", "2016-05-03", "CreateDBInstancePlan") {
  setMethod(HttpRequest::Method::Post);
}

CreateDBInstancePlanRequest::~CreateDBInstancePlanRequest() {}

std::string CreateDBInstancePlanRequest::getPlanType() const {
  return planType_;
}

void CreateDBInstancePlanRequest::setPlanType(const std::string &planType) {
  planType_ = planType;
  setParameter(std::string("PlanType"), planType);
}

std::string CreateDBInstancePlanRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateDBInstancePlanRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateDBInstancePlanRequest::getPlanStartDate() const {
  return planStartDate_;
}

void CreateDBInstancePlanRequest::setPlanStartDate(const std::string &planStartDate) {
  planStartDate_ = planStartDate;
  setParameter(std::string("PlanStartDate"), planStartDate);
}

std::string CreateDBInstancePlanRequest::getPlanConfig() const {
  return planConfig_;
}

void CreateDBInstancePlanRequest::setPlanConfig(const std::string &planConfig) {
  planConfig_ = planConfig;
  setParameter(std::string("PlanConfig"), planConfig);
}

std::string CreateDBInstancePlanRequest::getPlanName() const {
  return planName_;
}

void CreateDBInstancePlanRequest::setPlanName(const std::string &planName) {
  planName_ = planName;
  setParameter(std::string("PlanName"), planName);
}

std::string CreateDBInstancePlanRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void CreateDBInstancePlanRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string CreateDBInstancePlanRequest::getPlanDesc() const {
  return planDesc_;
}

void CreateDBInstancePlanRequest::setPlanDesc(const std::string &planDesc) {
  planDesc_ = planDesc;
  setParameter(std::string("PlanDesc"), planDesc);
}

long CreateDBInstancePlanRequest::getOwnerId() const {
  return ownerId_;
}

void CreateDBInstancePlanRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateDBInstancePlanRequest::getPlanEndDate() const {
  return planEndDate_;
}

void CreateDBInstancePlanRequest::setPlanEndDate(const std::string &planEndDate) {
  planEndDate_ = planEndDate;
  setParameter(std::string("PlanEndDate"), planEndDate);
}

std::string CreateDBInstancePlanRequest::getPlanScheduleType() const {
  return planScheduleType_;
}

void CreateDBInstancePlanRequest::setPlanScheduleType(const std::string &planScheduleType) {
  planScheduleType_ = planScheduleType;
  setParameter(std::string("PlanScheduleType"), planScheduleType);
}

