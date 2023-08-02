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

#include <alibabacloud/gpdb/model/DescribeDBInstancePlansRequest.h>

using AlibabaCloud::Gpdb::Model::DescribeDBInstancePlansRequest;

DescribeDBInstancePlansRequest::DescribeDBInstancePlansRequest()
    : RpcServiceRequest("gpdb", "2016-05-03", "DescribeDBInstancePlans") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDBInstancePlansRequest::~DescribeDBInstancePlansRequest() {}

std::string DescribeDBInstancePlansRequest::getPlanType() const {
  return planType_;
}

void DescribeDBInstancePlansRequest::setPlanType(const std::string &planType) {
  planType_ = planType;
  setParameter(std::string("PlanType"), planType);
}

std::string DescribeDBInstancePlansRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDBInstancePlansRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDBInstancePlansRequest::getPlanCreateDate() const {
  return planCreateDate_;
}

void DescribeDBInstancePlansRequest::setPlanCreateDate(const std::string &planCreateDate) {
  planCreateDate_ = planCreateDate;
  setParameter(std::string("PlanCreateDate"), planCreateDate);
}

std::string DescribeDBInstancePlansRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeDBInstancePlansRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DescribeDBInstancePlansRequest::getPlanDesc() const {
  return planDesc_;
}

void DescribeDBInstancePlansRequest::setPlanDesc(const std::string &planDesc) {
  planDesc_ = planDesc;
  setParameter(std::string("PlanDesc"), planDesc);
}

long DescribeDBInstancePlansRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDBInstancePlansRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeDBInstancePlansRequest::getPlanScheduleType() const {
  return planScheduleType_;
}

void DescribeDBInstancePlansRequest::setPlanScheduleType(const std::string &planScheduleType) {
  planScheduleType_ = planScheduleType;
  setParameter(std::string("PlanScheduleType"), planScheduleType);
}

std::string DescribeDBInstancePlansRequest::getPlanId() const {
  return planId_;
}

void DescribeDBInstancePlansRequest::setPlanId(const std::string &planId) {
  planId_ = planId;
  setParameter(std::string("PlanId"), planId);
}

