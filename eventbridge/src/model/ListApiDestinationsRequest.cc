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

#include <alibabacloud/eventbridge/model/ListApiDestinationsRequest.h>

using AlibabaCloud::Eventbridge::Model::ListApiDestinationsRequest;

ListApiDestinationsRequest::ListApiDestinationsRequest()
    : RpcServiceRequest("eventbridge", "2020-04-01", "ListApiDestinations") {
  setMethod(HttpRequest::Method::Post);
}

ListApiDestinationsRequest::~ListApiDestinationsRequest() {}

std::string ListApiDestinationsRequest::getClientToken() const {
  return clientToken_;
}

void ListApiDestinationsRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ListApiDestinationsRequest::getDescription() const {
  return description_;
}

void ListApiDestinationsRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string ListApiDestinationsRequest::getNextToken() const {
  return nextToken_;
}

void ListApiDestinationsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListApiDestinationsRequest::getConnectionName() const {
  return connectionName_;
}

void ListApiDestinationsRequest::setConnectionName(const std::string &connectionName) {
  connectionName_ = connectionName;
  setParameter(std::string("ConnectionName"), connectionName);
}

long ListApiDestinationsRequest::getMaxResults() const {
  return maxResults_;
}

void ListApiDestinationsRequest::setMaxResults(long maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string ListApiDestinationsRequest::getApiDestinationNamePrefix() const {
  return apiDestinationNamePrefix_;
}

void ListApiDestinationsRequest::setApiDestinationNamePrefix(const std::string &apiDestinationNamePrefix) {
  apiDestinationNamePrefix_ = apiDestinationNamePrefix;
  setParameter(std::string("ApiDestinationNamePrefix"), apiDestinationNamePrefix);
}

