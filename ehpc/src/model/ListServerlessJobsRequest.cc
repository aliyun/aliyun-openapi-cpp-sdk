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

#include <alibabacloud/ehpc/model/ListServerlessJobsRequest.h>

using AlibabaCloud::EHPC::Model::ListServerlessJobsRequest;

ListServerlessJobsRequest::ListServerlessJobsRequest()
    : RpcServiceRequest("ehpc", "2018-04-12", "ListServerlessJobs") {
  setMethod(HttpRequest::Method::Post);
}

ListServerlessJobsRequest::~ListServerlessJobsRequest() {}

std::string ListServerlessJobsRequest::getSubmitTimeStart() const {
  return submitTimeStart_;
}

void ListServerlessJobsRequest::setSubmitTimeStart(const std::string &submitTimeStart) {
  submitTimeStart_ = submitTimeStart;
  setParameter(std::string("SubmitTimeStart"), submitTimeStart);
}

long ListServerlessJobsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListServerlessJobsRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListServerlessJobsRequest::getRegionId() const {
  return regionId_;
}

void ListServerlessJobsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

long ListServerlessJobsRequest::getPageSize() const {
  return pageSize_;
}

void ListServerlessJobsRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListServerlessJobsRequest::getState() const {
  return state_;
}

void ListServerlessJobsRequest::setState(const std::string &state) {
  state_ = state;
  setParameter(std::string("State"), state);
}

std::string ListServerlessJobsRequest::getSubmitOrder() const {
  return submitOrder_;
}

void ListServerlessJobsRequest::setSubmitOrder(const std::string &submitOrder) {
  submitOrder_ = submitOrder;
  setParameter(std::string("SubmitOrder"), submitOrder);
}

std::string ListServerlessJobsRequest::getClusterId() const {
  return clusterId_;
}

void ListServerlessJobsRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::vector<ListServerlessJobsRequest::std::string> ListServerlessJobsRequest::getJobNames() const {
  return jobNames_;
}

void ListServerlessJobsRequest::setJobNames(const std::vector<ListServerlessJobsRequest::std::string> &jobNames) {
  jobNames_ = jobNames;
  for(int dep1 = 0; dep1 != jobNames.size(); dep1++) {
    setParameter(std::string("JobNames") + "." + std::to_string(dep1 + 1), jobNames[dep1]);
  }
}

std::vector<ListServerlessJobsRequest::std::string> ListServerlessJobsRequest::getUsers() const {
  return users_;
}

void ListServerlessJobsRequest::setUsers(const std::vector<ListServerlessJobsRequest::std::string> &users) {
  users_ = users;
  for(int dep1 = 0; dep1 != users.size(); dep1++) {
    setParameter(std::string("Users") + "." + std::to_string(dep1 + 1), users[dep1]);
  }
}

std::string ListServerlessJobsRequest::getStartOrder() const {
  return startOrder_;
}

void ListServerlessJobsRequest::setStartOrder(const std::string &startOrder) {
  startOrder_ = startOrder;
  setParameter(std::string("StartOrder"), startOrder);
}

std::string ListServerlessJobsRequest::getSubmitTimeEnd() const {
  return submitTimeEnd_;
}

void ListServerlessJobsRequest::setSubmitTimeEnd(const std::string &submitTimeEnd) {
  submitTimeEnd_ = submitTimeEnd;
  setParameter(std::string("SubmitTimeEnd"), submitTimeEnd);
}

std::vector<ListServerlessJobsRequest::std::string> ListServerlessJobsRequest::getQueues() const {
  return queues_;
}

void ListServerlessJobsRequest::setQueues(const std::vector<ListServerlessJobsRequest::std::string> &queues) {
  queues_ = queues;
  for(int dep1 = 0; dep1 != queues.size(); dep1++) {
    setParameter(std::string("Queues") + "." + std::to_string(dep1 + 1), queues[dep1]);
  }
}

std::vector<ListServerlessJobsRequest::std::string> ListServerlessJobsRequest::getJobIds() const {
  return jobIds_;
}

void ListServerlessJobsRequest::setJobIds(const std::vector<ListServerlessJobsRequest::std::string> &jobIds) {
  jobIds_ = jobIds;
  for(int dep1 = 0; dep1 != jobIds.size(); dep1++) {
    setParameter(std::string("JobIds") + "." + std::to_string(dep1 + 1), jobIds[dep1]);
  }
}

