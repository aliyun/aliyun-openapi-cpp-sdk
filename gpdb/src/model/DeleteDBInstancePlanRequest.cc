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

#include <alibabacloud/gpdb/model/DeleteDBInstancePlanRequest.h>

using AlibabaCloud::Gpdb::Model::DeleteDBInstancePlanRequest;

DeleteDBInstancePlanRequest::DeleteDBInstancePlanRequest()
    : RpcServiceRequest("gpdb", "2016-05-03", "DeleteDBInstancePlan") {
  setMethod(HttpRequest::Method::Post);
}

DeleteDBInstancePlanRequest::~DeleteDBInstancePlanRequest() {}

std::string DeleteDBInstancePlanRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DeleteDBInstancePlanRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DeleteDBInstancePlanRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DeleteDBInstancePlanRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

long DeleteDBInstancePlanRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteDBInstancePlanRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteDBInstancePlanRequest::getPlanId() const {
  return planId_;
}

void DeleteDBInstancePlanRequest::setPlanId(const std::string &planId) {
  planId_ = planId;
  setParameter(std::string("PlanId"), planId);
}

