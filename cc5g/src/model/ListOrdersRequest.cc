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

#include <alibabacloud/cc5g/model/ListOrdersRequest.h>

using AlibabaCloud::CC5G::Model::ListOrdersRequest;

ListOrdersRequest::ListOrdersRequest()
    : RpcServiceRequest("cc5g", "2022-03-14", "ListOrders") {
  setMethod(HttpRequest::Method::Get);
}

ListOrdersRequest::~ListOrdersRequest() {}

std::string ListOrdersRequest::getNextToken() const {
  return nextToken_;
}

void ListOrdersRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListOrdersRequest::getOrderAction() const {
  return orderAction_;
}

void ListOrdersRequest::setOrderAction(const std::string &orderAction) {
  orderAction_ = orderAction;
  setParameter(std::string("OrderAction"), orderAction);
}

std::string ListOrdersRequest::getWirelessCloudConnectorId() const {
  return wirelessCloudConnectorId_;
}

void ListOrdersRequest::setWirelessCloudConnectorId(const std::string &wirelessCloudConnectorId) {
  wirelessCloudConnectorId_ = wirelessCloudConnectorId;
  setParameter(std::string("WirelessCloudConnectorId"), wirelessCloudConnectorId);
}

std::vector<ListOrdersRequest::std::string> ListOrdersRequest::getOrderIds() const {
  return orderIds_;
}

void ListOrdersRequest::setOrderIds(const std::vector<ListOrdersRequest::std::string> &orderIds) {
  orderIds_ = orderIds;
  for(int dep1 = 0; dep1 != orderIds.size(); dep1++) {
    setParameter(std::string("OrderIds") + "." + std::to_string(dep1 + 1), orderIds[dep1]);
  }
}

long ListOrdersRequest::getMaxResults() const {
  return maxResults_;
}

void ListOrdersRequest::setMaxResults(long maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::vector<ListOrdersRequest::std::string> ListOrdersRequest::getStatuses() const {
  return statuses_;
}

void ListOrdersRequest::setStatuses(const std::vector<ListOrdersRequest::std::string> &statuses) {
  statuses_ = statuses;
  for(int dep1 = 0; dep1 != statuses.size(); dep1++) {
    setParameter(std::string("Statuses") + "." + std::to_string(dep1 + 1), statuses[dep1]);
  }
}

