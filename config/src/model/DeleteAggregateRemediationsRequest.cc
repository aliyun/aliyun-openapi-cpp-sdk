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

#include <alibabacloud/config/model/DeleteAggregateRemediationsRequest.h>

using AlibabaCloud::Config::Model::DeleteAggregateRemediationsRequest;

DeleteAggregateRemediationsRequest::DeleteAggregateRemediationsRequest()
    : RpcServiceRequest("config", "2020-09-07", "DeleteAggregateRemediations") {
  setMethod(HttpRequest::Method::Post);
}

DeleteAggregateRemediationsRequest::~DeleteAggregateRemediationsRequest() {}

std::string DeleteAggregateRemediationsRequest::getRemediationIds() const {
  return remediationIds_;
}

void DeleteAggregateRemediationsRequest::setRemediationIds(const std::string &remediationIds) {
  remediationIds_ = remediationIds;
  setBodyParameter(std::string("RemediationIds"), remediationIds);
}

std::string DeleteAggregateRemediationsRequest::getAggregatorId() const {
  return aggregatorId_;
}

void DeleteAggregateRemediationsRequest::setAggregatorId(const std::string &aggregatorId) {
  aggregatorId_ = aggregatorId;
  setBodyParameter(std::string("AggregatorId"), aggregatorId);
}

