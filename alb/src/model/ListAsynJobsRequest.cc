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

#include <alibabacloud/alb/model/ListAsynJobsRequest.h>

using AlibabaCloud::Alb::Model::ListAsynJobsRequest;

ListAsynJobsRequest::ListAsynJobsRequest()
    : RpcServiceRequest("alb", "2020-06-16", "ListAsynJobs") {
  setMethod(HttpRequest::Method::Post);
}

ListAsynJobsRequest::~ListAsynJobsRequest() {}

std::string ListAsynJobsRequest::getNextToken() const {
  return nextToken_;
}

void ListAsynJobsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

long ListAsynJobsRequest::getEndTime() const {
  return endTime_;
}

void ListAsynJobsRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

long ListAsynJobsRequest::getBeginTime() const {
  return beginTime_;
}

void ListAsynJobsRequest::setBeginTime(long beginTime) {
  beginTime_ = beginTime;
  setParameter(std::string("BeginTime"), std::to_string(beginTime));
}

std::string ListAsynJobsRequest::getResourceType() const {
  return resourceType_;
}

void ListAsynJobsRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string ListAsynJobsRequest::getApiName() const {
  return apiName_;
}

void ListAsynJobsRequest::setApiName(const std::string &apiName) {
  apiName_ = apiName;
  setParameter(std::string("ApiName"), apiName);
}

std::vector<ListAsynJobsRequest::std::string> ListAsynJobsRequest::getJobIds() const {
  return jobIds_;
}

void ListAsynJobsRequest::setJobIds(const std::vector<ListAsynJobsRequest::std::string> &jobIds) {
  jobIds_ = jobIds;
  for(int dep1 = 0; dep1 != jobIds.size(); dep1++) {
    setParameter(std::string("JobIds") + "." + std::to_string(dep1 + 1), jobIds[dep1]);
  }
}

long ListAsynJobsRequest::getMaxResults() const {
  return maxResults_;
}

void ListAsynJobsRequest::setMaxResults(long maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::vector<ListAsynJobsRequest::std::string> ListAsynJobsRequest::getResourceIds() const {
  return resourceIds_;
}

void ListAsynJobsRequest::setResourceIds(const std::vector<ListAsynJobsRequest::std::string> &resourceIds) {
  resourceIds_ = resourceIds;
  for(int dep1 = 0; dep1 != resourceIds.size(); dep1++) {
    setParameter(std::string("ResourceIds") + "." + std::to_string(dep1 + 1), resourceIds[dep1]);
  }
}

