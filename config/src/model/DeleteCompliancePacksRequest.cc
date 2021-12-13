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

#include <alibabacloud/config/model/DeleteCompliancePacksRequest.h>

using AlibabaCloud::Config::Model::DeleteCompliancePacksRequest;

DeleteCompliancePacksRequest::DeleteCompliancePacksRequest()
    : RpcServiceRequest("config", "2020-09-07", "DeleteCompliancePacks") {
  setMethod(HttpRequest::Method::Post);
}

DeleteCompliancePacksRequest::~DeleteCompliancePacksRequest() {}

std::string DeleteCompliancePacksRequest::getClientToken() const {
  return clientToken_;
}

void DeleteCompliancePacksRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setBodyParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteCompliancePacksRequest::getCompliancePackIds() const {
  return compliancePackIds_;
}

void DeleteCompliancePacksRequest::setCompliancePackIds(const std::string &compliancePackIds) {
  compliancePackIds_ = compliancePackIds;
  setBodyParameter(std::string("CompliancePackIds"), compliancePackIds);
}

bool DeleteCompliancePacksRequest::getDeleteRule() const {
  return deleteRule_;
}

void DeleteCompliancePacksRequest::setDeleteRule(bool deleteRule) {
  deleteRule_ = deleteRule;
  setBodyParameter(std::string("DeleteRule"), deleteRule ? "true" : "false");
}

