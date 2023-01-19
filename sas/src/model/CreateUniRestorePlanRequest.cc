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

#include <alibabacloud/sas/model/CreateUniRestorePlanRequest.h>

using AlibabaCloud::Sas::Model::CreateUniRestorePlanRequest;

CreateUniRestorePlanRequest::CreateUniRestorePlanRequest()
    : RpcServiceRequest("sas", "2018-12-03", "CreateUniRestorePlan") {
  setMethod(HttpRequest::Method::Post);
}

CreateUniRestorePlanRequest::~CreateUniRestorePlanRequest() {}

long CreateUniRestorePlanRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateUniRestorePlanRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateUniRestorePlanRequest::getInstanceUuid() const {
  return instanceUuid_;
}

void CreateUniRestorePlanRequest::setInstanceUuid(const std::string &instanceUuid) {
  instanceUuid_ = instanceUuid;
  setParameter(std::string("InstanceUuid"), instanceUuid);
}

std::string CreateUniRestorePlanRequest::getRestoreInfo() const {
  return restoreInfo_;
}

void CreateUniRestorePlanRequest::setRestoreInfo(const std::string &restoreInfo) {
  restoreInfo_ = restoreInfo;
  setParameter(std::string("RestoreInfo"), restoreInfo);
}

std::string CreateUniRestorePlanRequest::getDatabase() const {
  return database_;
}

void CreateUniRestorePlanRequest::setDatabase(const std::string &database) {
  database_ = database;
  setParameter(std::string("Database"), database);
}

std::string CreateUniRestorePlanRequest::getSourceIp() const {
  return sourceIp_;
}

void CreateUniRestorePlanRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

long CreateUniRestorePlanRequest::getPolicyId() const {
  return policyId_;
}

void CreateUniRestorePlanRequest::setPolicyId(long policyId) {
  policyId_ = policyId;
  setParameter(std::string("PolicyId"), std::to_string(policyId));
}

std::string CreateUniRestorePlanRequest::getResetScn() const {
  return resetScn_;
}

void CreateUniRestorePlanRequest::setResetScn(const std::string &resetScn) {
  resetScn_ = resetScn;
  setParameter(std::string("ResetScn"), resetScn);
}

std::string CreateUniRestorePlanRequest::getResetTime() const {
  return resetTime_;
}

void CreateUniRestorePlanRequest::setResetTime(const std::string &resetTime) {
  resetTime_ = resetTime;
  setParameter(std::string("ResetTime"), resetTime);
}

long CreateUniRestorePlanRequest::getTimePoint() const {
  return timePoint_;
}

void CreateUniRestorePlanRequest::setTimePoint(long timePoint) {
  timePoint_ = timePoint;
  setParameter(std::string("TimePoint"), std::to_string(timePoint));
}

