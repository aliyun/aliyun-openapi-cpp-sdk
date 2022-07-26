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

#include <alibabacloud/oos/model/GetInventorySchemaRequest.h>

using AlibabaCloud::Oos::Model::GetInventorySchemaRequest;

GetInventorySchemaRequest::GetInventorySchemaRequest()
    : RpcServiceRequest("oos", "2019-06-01", "GetInventorySchema") {
  setMethod(HttpRequest::Method::Post);
}

GetInventorySchemaRequest::~GetInventorySchemaRequest() {}

bool GetInventorySchemaRequest::getAggregator() const {
  return aggregator_;
}

void GetInventorySchemaRequest::setAggregator(bool aggregator) {
  aggregator_ = aggregator;
  setParameter(std::string("Aggregator"), aggregator ? "true" : "false");
}

std::string GetInventorySchemaRequest::getRegionId() const {
  return regionId_;
}

void GetInventorySchemaRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string GetInventorySchemaRequest::getNextToken() const {
  return nextToken_;
}

void GetInventorySchemaRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int GetInventorySchemaRequest::getMaxResults() const {
  return maxResults_;
}

void GetInventorySchemaRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string GetInventorySchemaRequest::getTypeName() const {
  return typeName_;
}

void GetInventorySchemaRequest::setTypeName(const std::string &typeName) {
  typeName_ = typeName;
  setParameter(std::string("TypeName"), typeName);
}

