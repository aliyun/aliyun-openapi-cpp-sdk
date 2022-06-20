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

#include <alibabacloud/sas/model/ModifyInstanceAntiBruteForceRuleRequest.h>

using AlibabaCloud::Sas::Model::ModifyInstanceAntiBruteForceRuleRequest;

ModifyInstanceAntiBruteForceRuleRequest::ModifyInstanceAntiBruteForceRuleRequest()
    : RpcServiceRequest("sas", "2018-12-03", "ModifyInstanceAntiBruteForceRule") {
  setMethod(HttpRequest::Method::Post);
}

ModifyInstanceAntiBruteForceRuleRequest::~ModifyInstanceAntiBruteForceRuleRequest() {}

long ModifyInstanceAntiBruteForceRuleRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyInstanceAntiBruteForceRuleRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyInstanceAntiBruteForceRuleRequest::getUuid() const {
  return uuid_;
}

void ModifyInstanceAntiBruteForceRuleRequest::setUuid(const std::string &uuid) {
  uuid_ = uuid;
  setParameter(std::string("Uuid"), uuid);
}

std::string ModifyInstanceAntiBruteForceRuleRequest::getSourceIp() const {
  return sourceIp_;
}

void ModifyInstanceAntiBruteForceRuleRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

long ModifyInstanceAntiBruteForceRuleRequest::getNewRuleId() const {
  return newRuleId_;
}

void ModifyInstanceAntiBruteForceRuleRequest::setNewRuleId(long newRuleId) {
  newRuleId_ = newRuleId;
  setParameter(std::string("NewRuleId"), std::to_string(newRuleId));
}

