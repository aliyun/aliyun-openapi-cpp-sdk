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

#include <alibabacloud/sas/model/DeleteAntiBruteForceRuleRequest.h>

using AlibabaCloud::Sas::Model::DeleteAntiBruteForceRuleRequest;

DeleteAntiBruteForceRuleRequest::DeleteAntiBruteForceRuleRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DeleteAntiBruteForceRule") {
  setMethod(HttpRequest::Method::Post);
}

DeleteAntiBruteForceRuleRequest::~DeleteAntiBruteForceRuleRequest() {}

long DeleteAntiBruteForceRuleRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteAntiBruteForceRuleRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteAntiBruteForceRuleRequest::getSourceIp() const {
  return sourceIp_;
}

void DeleteAntiBruteForceRuleRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::vector<long> DeleteAntiBruteForceRuleRequest::getIds() const {
  return ids_;
}

void DeleteAntiBruteForceRuleRequest::setIds(const std::vector<long> &ids) {
  ids_ = ids;
}

