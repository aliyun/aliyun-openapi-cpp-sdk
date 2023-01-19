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

#include <alibabacloud/sas/model/DeleteSecurityEventMarkMissListRequest.h>

using AlibabaCloud::Sas::Model::DeleteSecurityEventMarkMissListRequest;

DeleteSecurityEventMarkMissListRequest::DeleteSecurityEventMarkMissListRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DeleteSecurityEventMarkMissList") {
  setMethod(HttpRequest::Method::Post);
}

DeleteSecurityEventMarkMissListRequest::~DeleteSecurityEventMarkMissListRequest() {}

long DeleteSecurityEventMarkMissListRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteSecurityEventMarkMissListRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteSecurityEventMarkMissListRequest::getSourceIp() const {
  return sourceIp_;
}

void DeleteSecurityEventMarkMissListRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::vector<long> DeleteSecurityEventMarkMissListRequest::getIds() const {
  return ids_;
}

void DeleteSecurityEventMarkMissListRequest::setIds(const std::vector<long> &ids) {
  ids_ = ids;
}

