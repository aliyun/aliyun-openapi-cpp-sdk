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

#include <alibabacloud/alidns/model/DescribeBatchResultDetailRequest.h>

using AlibabaCloud::Alidns::Model::DescribeBatchResultDetailRequest;

DescribeBatchResultDetailRequest::DescribeBatchResultDetailRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "DescribeBatchResultDetail") {
  setMethod(HttpRequest::Method::Post);
}

DescribeBatchResultDetailRequest::~DescribeBatchResultDetailRequest() {}

std::string DescribeBatchResultDetailRequest::getBatchType() const {
  return batchType_;
}

void DescribeBatchResultDetailRequest::setBatchType(const std::string &batchType) {
  batchType_ = batchType;
  setParameter(std::string("BatchType"), batchType);
}

int DescribeBatchResultDetailRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeBatchResultDetailRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeBatchResultDetailRequest::getUserClientIp() const {
  return userClientIp_;
}

void DescribeBatchResultDetailRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

int DescribeBatchResultDetailRequest::getPageSize() const {
  return pageSize_;
}

void DescribeBatchResultDetailRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeBatchResultDetailRequest::getLang() const {
  return lang_;
}

void DescribeBatchResultDetailRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

long DescribeBatchResultDetailRequest::getTaskId() const {
  return taskId_;
}

void DescribeBatchResultDetailRequest::setTaskId(long taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), std::to_string(taskId));
}

std::string DescribeBatchResultDetailRequest::getStatus() const {
  return status_;
}

void DescribeBatchResultDetailRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

