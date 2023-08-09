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

#include <alibabacloud/config/model/DeleteAggregatorsRequest.h>

using AlibabaCloud::Config::Model::DeleteAggregatorsRequest;

DeleteAggregatorsRequest::DeleteAggregatorsRequest()
    : RpcServiceRequest("config", "2020-09-07", "DeleteAggregators") {
  setMethod(HttpRequest::Method::Post);
}

DeleteAggregatorsRequest::~DeleteAggregatorsRequest() {}

std::string DeleteAggregatorsRequest::getClientToken() const {
  return clientToken_;
}

void DeleteAggregatorsRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setBodyParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteAggregatorsRequest::getAggregatorIds() const {
  return aggregatorIds_;
}

void DeleteAggregatorsRequest::setAggregatorIds(const std::string &aggregatorIds) {
  aggregatorIds_ = aggregatorIds;
  setBodyParameter(std::string("AggregatorIds"), aggregatorIds);
}

