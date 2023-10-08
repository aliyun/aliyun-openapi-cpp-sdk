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

#include <alibabacloud/nlb/model/GetListenerHealthStatusRequest.h>

using AlibabaCloud::Nlb::Model::GetListenerHealthStatusRequest;

GetListenerHealthStatusRequest::GetListenerHealthStatusRequest()
    : RpcServiceRequest("nlb", "2022-04-30", "GetListenerHealthStatus") {
  setMethod(HttpRequest::Method::Post);
}

GetListenerHealthStatusRequest::~GetListenerHealthStatusRequest() {}

std::string GetListenerHealthStatusRequest::getListenerId() const {
  return listenerId_;
}

void GetListenerHealthStatusRequest::setListenerId(const std::string &listenerId) {
  listenerId_ = listenerId;
  setParameter(std::string("ListenerId"), listenerId);
}

std::string GetListenerHealthStatusRequest::getNextToken() const {
  return nextToken_;
}

void GetListenerHealthStatusRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string GetListenerHealthStatusRequest::getRegionId() const {
  return regionId_;
}

void GetListenerHealthStatusRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int GetListenerHealthStatusRequest::getMaxResults() const {
  return maxResults_;
}

void GetListenerHealthStatusRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

