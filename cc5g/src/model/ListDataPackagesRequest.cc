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

#include <alibabacloud/cc5g/model/ListDataPackagesRequest.h>

using AlibabaCloud::CC5G::Model::ListDataPackagesRequest;

ListDataPackagesRequest::ListDataPackagesRequest()
    : RpcServiceRequest("cc5g", "2022-03-14", "ListDataPackages") {
  setMethod(HttpRequest::Method::Get);
}

ListDataPackagesRequest::~ListDataPackagesRequest() {}

std::string ListDataPackagesRequest::getNextToken() const {
  return nextToken_;
}

void ListDataPackagesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::vector<ListDataPackagesRequest::std::string> ListDataPackagesRequest::getDataPackageIds() const {
  return dataPackageIds_;
}

void ListDataPackagesRequest::setDataPackageIds(const std::vector<ListDataPackagesRequest::std::string> &dataPackageIds) {
  dataPackageIds_ = dataPackageIds;
  for(int dep1 = 0; dep1 != dataPackageIds.size(); dep1++) {
    setParameter(std::string("DataPackageIds") + "." + std::to_string(dep1 + 1), dataPackageIds[dep1]);
  }
}

std::vector<ListDataPackagesRequest::std::string> ListDataPackagesRequest::getNames() const {
  return names_;
}

void ListDataPackagesRequest::setNames(const std::vector<ListDataPackagesRequest::std::string> &names) {
  names_ = names;
  for(int dep1 = 0; dep1 != names.size(); dep1++) {
    setParameter(std::string("Names") + "." + std::to_string(dep1 + 1), names[dep1]);
  }
}

std::string ListDataPackagesRequest::getWirelessCloudConnectorId() const {
  return wirelessCloudConnectorId_;
}

void ListDataPackagesRequest::setWirelessCloudConnectorId(const std::string &wirelessCloudConnectorId) {
  wirelessCloudConnectorId_ = wirelessCloudConnectorId;
  setParameter(std::string("WirelessCloudConnectorId"), wirelessCloudConnectorId);
}

long ListDataPackagesRequest::getMaxResults() const {
  return maxResults_;
}

void ListDataPackagesRequest::setMaxResults(long maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::vector<ListDataPackagesRequest::std::string> ListDataPackagesRequest::getStatuses() const {
  return statuses_;
}

void ListDataPackagesRequest::setStatuses(const std::vector<ListDataPackagesRequest::std::string> &statuses) {
  statuses_ = statuses;
  for(int dep1 = 0; dep1 != statuses.size(); dep1++) {
    setParameter(std::string("Statuses") + "." + std::to_string(dep1 + 1), statuses[dep1]);
  }
}

