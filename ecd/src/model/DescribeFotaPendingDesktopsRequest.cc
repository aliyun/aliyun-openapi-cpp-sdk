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

#include <alibabacloud/ecd/model/DescribeFotaPendingDesktopsRequest.h>

using AlibabaCloud::Ecd::Model::DescribeFotaPendingDesktopsRequest;

DescribeFotaPendingDesktopsRequest::DescribeFotaPendingDesktopsRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "DescribeFotaPendingDesktops") {
  setMethod(HttpRequest::Method::Get);
}

DescribeFotaPendingDesktopsRequest::~DescribeFotaPendingDesktopsRequest() {}

std::string DescribeFotaPendingDesktopsRequest::getTaskUid() const {
  return taskUid_;
}

void DescribeFotaPendingDesktopsRequest::setTaskUid(const std::string &taskUid) {
  taskUid_ = taskUid;
  setParameter(std::string("TaskUid"), taskUid);
}

std::string DescribeFotaPendingDesktopsRequest::getRegionId() const {
  return regionId_;
}

void DescribeFotaPendingDesktopsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeFotaPendingDesktopsRequest::getNextToken() const {
  return nextToken_;
}

void DescribeFotaPendingDesktopsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int DescribeFotaPendingDesktopsRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeFotaPendingDesktopsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

