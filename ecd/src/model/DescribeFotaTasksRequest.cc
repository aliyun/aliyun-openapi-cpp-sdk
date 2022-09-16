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

#include <alibabacloud/ecd/model/DescribeFotaTasksRequest.h>

using AlibabaCloud::Ecd::Model::DescribeFotaTasksRequest;

DescribeFotaTasksRequest::DescribeFotaTasksRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "DescribeFotaTasks") {
  setMethod(HttpRequest::Method::Post);
}

DescribeFotaTasksRequest::~DescribeFotaTasksRequest() {}

std::string DescribeFotaTasksRequest::getUserStatus() const {
  return userStatus_;
}

void DescribeFotaTasksRequest::setUserStatus(const std::string &userStatus) {
  userStatus_ = userStatus;
  setParameter(std::string("UserStatus"), userStatus);
}

std::string DescribeFotaTasksRequest::getFotaStatus() const {
  return fotaStatus_;
}

void DescribeFotaTasksRequest::setFotaStatus(const std::string &fotaStatus) {
  fotaStatus_ = fotaStatus;
  setParameter(std::string("FotaStatus"), fotaStatus);
}

std::vector<std::string> DescribeFotaTasksRequest::getTaskUid() const {
  return taskUid_;
}

void DescribeFotaTasksRequest::setTaskUid(const std::vector<std::string> &taskUid) {
  taskUid_ = taskUid;
}

std::string DescribeFotaTasksRequest::getRegionId() const {
  return regionId_;
}

void DescribeFotaTasksRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeFotaTasksRequest::getNextToken() const {
  return nextToken_;
}

void DescribeFotaTasksRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int DescribeFotaTasksRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeFotaTasksRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

