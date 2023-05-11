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

#include <alibabacloud/alidns/model/DescribeBatchResultCountRequest.h>

using AlibabaCloud::Alidns::Model::DescribeBatchResultCountRequest;

DescribeBatchResultCountRequest::DescribeBatchResultCountRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "DescribeBatchResultCount") {
  setMethod(HttpRequest::Method::Post);
}

DescribeBatchResultCountRequest::~DescribeBatchResultCountRequest() {}

std::string DescribeBatchResultCountRequest::getBatchType() const {
  return batchType_;
}

void DescribeBatchResultCountRequest::setBatchType(const std::string &batchType) {
  batchType_ = batchType;
  setParameter(std::string("BatchType"), batchType);
}

std::string DescribeBatchResultCountRequest::getUserClientIp() const {
  return userClientIp_;
}

void DescribeBatchResultCountRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string DescribeBatchResultCountRequest::getLang() const {
  return lang_;
}

void DescribeBatchResultCountRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

long DescribeBatchResultCountRequest::getTaskId() const {
  return taskId_;
}

void DescribeBatchResultCountRequest::setTaskId(long taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), std::to_string(taskId));
}

