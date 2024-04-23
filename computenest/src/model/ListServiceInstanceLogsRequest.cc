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

#include <alibabacloud/computenest/model/ListServiceInstanceLogsRequest.h>

using AlibabaCloud::ComputeNest::Model::ListServiceInstanceLogsRequest;

ListServiceInstanceLogsRequest::ListServiceInstanceLogsRequest()
    : RpcServiceRequest("computenest", "2021-06-01", "ListServiceInstanceLogs") {
  setMethod(HttpRequest::Method::Post);
}

ListServiceInstanceLogsRequest::~ListServiceInstanceLogsRequest() {}

std::string ListServiceInstanceLogsRequest::getRegionId() const {
  return regionId_;
}

void ListServiceInstanceLogsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListServiceInstanceLogsRequest::getNextToken() const {
  return nextToken_;
}

void ListServiceInstanceLogsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListServiceInstanceLogsRequest::getServiceInstanceId() const {
  return serviceInstanceId_;
}

void ListServiceInstanceLogsRequest::setServiceInstanceId(const std::string &serviceInstanceId) {
  serviceInstanceId_ = serviceInstanceId;
  setParameter(std::string("ServiceInstanceId"), serviceInstanceId);
}

std::string ListServiceInstanceLogsRequest::getLogSource() const {
  return logSource_;
}

void ListServiceInstanceLogsRequest::setLogSource(const std::string &logSource) {
  logSource_ = logSource;
  setParameter(std::string("LogSource"), logSource);
}

int ListServiceInstanceLogsRequest::getMaxResults() const {
  return maxResults_;
}

void ListServiceInstanceLogsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string ListServiceInstanceLogsRequest::getLogstore() const {
  return logstore_;
}

void ListServiceInstanceLogsRequest::setLogstore(const std::string &logstore) {
  logstore_ = logstore;
  setParameter(std::string("Logstore"), logstore);
}

