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

#include <alibabacloud/ehpc/model/ListJobsWithFiltersRequest.h>

using AlibabaCloud::EHPC::Model::ListJobsWithFiltersRequest;

ListJobsWithFiltersRequest::ListJobsWithFiltersRequest()
    : RpcServiceRequest("ehpc", "2018-04-12", "ListJobsWithFilters") {
  setMethod(HttpRequest::Method::Get);
}

ListJobsWithFiltersRequest::~ListJobsWithFiltersRequest() {}

std::string ListJobsWithFiltersRequest::getJobStatus() const {
  return jobStatus_;
}

void ListJobsWithFiltersRequest::setJobStatus(const std::string &jobStatus) {
  jobStatus_ = jobStatus;
  setParameter(std::string("JobStatus"), jobStatus);
}

long ListJobsWithFiltersRequest::getPageNumber() const {
  return pageNumber_;
}

void ListJobsWithFiltersRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListJobsWithFiltersRequest::getRegionId() const {
  return regionId_;
}

void ListJobsWithFiltersRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

long ListJobsWithFiltersRequest::getPageSize() const {
  return pageSize_;
}

void ListJobsWithFiltersRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListJobsWithFiltersRequest::getExecuteOrder() const {
  return executeOrder_;
}

void ListJobsWithFiltersRequest::setExecuteOrder(const std::string &executeOrder) {
  executeOrder_ = executeOrder;
  setParameter(std::string("ExecuteOrder"), executeOrder);
}

std::string ListJobsWithFiltersRequest::getJobName() const {
  return jobName_;
}

void ListJobsWithFiltersRequest::setJobName(const std::string &jobName) {
  jobName_ = jobName;
  setParameter(std::string("JobName"), jobName);
}

std::string ListJobsWithFiltersRequest::getSubmitOrder() const {
  return submitOrder_;
}

void ListJobsWithFiltersRequest::setSubmitOrder(const std::string &submitOrder) {
  submitOrder_ = submitOrder;
  setParameter(std::string("SubmitOrder"), submitOrder);
}

std::string ListJobsWithFiltersRequest::getPendOrder() const {
  return pendOrder_;
}

void ListJobsWithFiltersRequest::setPendOrder(const std::string &pendOrder) {
  pendOrder_ = pendOrder;
  setParameter(std::string("PendOrder"), pendOrder);
}

std::string ListJobsWithFiltersRequest::getClusterId() const {
  return clusterId_;
}

void ListJobsWithFiltersRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::vector<ListJobsWithFiltersRequest::std::string> ListJobsWithFiltersRequest::getUsers() const {
  return users_;
}

void ListJobsWithFiltersRequest::setUsers(const std::vector<ListJobsWithFiltersRequest::std::string> &users) {
  users_ = users;
  for(int dep1 = 0; dep1 != users.size(); dep1++) {
    setParameter(std::string("Users") + "." + std::to_string(dep1 + 1), users[dep1]);
  }
}

std::string ListJobsWithFiltersRequest::getCreateTimeEnd() const {
  return createTimeEnd_;
}

void ListJobsWithFiltersRequest::setCreateTimeEnd(const std::string &createTimeEnd) {
  createTimeEnd_ = createTimeEnd;
  setParameter(std::string("CreateTimeEnd"), createTimeEnd);
}

bool ListJobsWithFiltersRequest::getAsync() const {
  return async_;
}

void ListJobsWithFiltersRequest::setAsync(bool async) {
  async_ = async;
  setParameter(std::string("Async"), async ? "true" : "false");
}

std::vector<ListJobsWithFiltersRequest::std::string> ListJobsWithFiltersRequest::getNodes() const {
  return nodes_;
}

void ListJobsWithFiltersRequest::setNodes(const std::vector<ListJobsWithFiltersRequest::std::string> &nodes) {
  nodes_ = nodes;
  for(int dep1 = 0; dep1 != nodes.size(); dep1++) {
    setParameter(std::string("Nodes") + "." + std::to_string(dep1 + 1), nodes[dep1]);
  }
}

std::vector<ListJobsWithFiltersRequest::std::string> ListJobsWithFiltersRequest::getQueues() const {
  return queues_;
}

void ListJobsWithFiltersRequest::setQueues(const std::vector<ListJobsWithFiltersRequest::std::string> &queues) {
  queues_ = queues;
  for(int dep1 = 0; dep1 != queues.size(); dep1++) {
    setParameter(std::string("Queues") + "." + std::to_string(dep1 + 1), queues[dep1]);
  }
}

std::string ListJobsWithFiltersRequest::getCreateTimeStart() const {
  return createTimeStart_;
}

void ListJobsWithFiltersRequest::setCreateTimeStart(const std::string &createTimeStart) {
  createTimeStart_ = createTimeStart;
  setParameter(std::string("CreateTimeStart"), createTimeStart);
}

