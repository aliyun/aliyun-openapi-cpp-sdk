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

#include <alibabacloud/viapi/model/QueryAsyncJobListRequest.h>

using AlibabaCloud::Viapi::Model::QueryAsyncJobListRequest;

QueryAsyncJobListRequest::QueryAsyncJobListRequest()
    : RpcServiceRequest("viapi", "2023-01-17", "QueryAsyncJobList") {
  setMethod(HttpRequest::Method::Post);
}

QueryAsyncJobListRequest::~QueryAsyncJobListRequest() {}

std::string QueryAsyncJobListRequest::getStartTime() const {
  return startTime_;
}

void QueryAsyncJobListRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setBodyParameter(std::string("StartTime"), startTime);
}

std::string QueryAsyncJobListRequest::getPageNum() const {
  return pageNum_;
}

void QueryAsyncJobListRequest::setPageNum(const std::string &pageNum) {
  pageNum_ = pageNum;
  setBodyParameter(std::string("PageNum"), pageNum);
}

std::string QueryAsyncJobListRequest::getJobId() const {
  return jobId_;
}

void QueryAsyncJobListRequest::setJobId(const std::string &jobId) {
  jobId_ = jobId;
  setBodyParameter(std::string("JobId"), jobId);
}

std::string QueryAsyncJobListRequest::getPopApiName() const {
  return popApiName_;
}

void QueryAsyncJobListRequest::setPopApiName(const std::string &popApiName) {
  popApiName_ = popApiName;
  setBodyParameter(std::string("PopApiName"), popApiName);
}

std::string QueryAsyncJobListRequest::getPageSize() const {
  return pageSize_;
}

void QueryAsyncJobListRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), pageSize);
}

std::string QueryAsyncJobListRequest::getPopProduct() const {
  return popProduct_;
}

void QueryAsyncJobListRequest::setPopProduct(const std::string &popProduct) {
  popProduct_ = popProduct;
  setBodyParameter(std::string("PopProduct"), popProduct);
}

std::string QueryAsyncJobListRequest::getEndTime() const {
  return endTime_;
}

void QueryAsyncJobListRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setBodyParameter(std::string("EndTime"), endTime);
}

std::string QueryAsyncJobListRequest::getStatus() const {
  return status_;
}

void QueryAsyncJobListRequest::setStatus(const std::string &status) {
  status_ = status;
  setBodyParameter(std::string("Status"), status);
}

