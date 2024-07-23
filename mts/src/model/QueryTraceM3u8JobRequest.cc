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

#include <alibabacloud/mts/model/QueryTraceM3u8JobRequest.h>

using AlibabaCloud::Mts::Model::QueryTraceM3u8JobRequest;

QueryTraceM3u8JobRequest::QueryTraceM3u8JobRequest()
    : RpcServiceRequest("mts", "2014-06-18", "QueryTraceM3u8Job") {
  setMethod(HttpRequest::Method::Post);
}

QueryTraceM3u8JobRequest::~QueryTraceM3u8JobRequest() {}

long QueryTraceM3u8JobRequest::getLevel() const {
  return level_;
}

void QueryTraceM3u8JobRequest::setLevel(long level) {
  level_ = level;
  setParameter(std::string("Level"), std::to_string(level));
}

long QueryTraceM3u8JobRequest::getMessageId() const {
  return messageId_;
}

void QueryTraceM3u8JobRequest::setMessageId(long messageId) {
  messageId_ = messageId;
  setParameter(std::string("MessageId"), std::to_string(messageId));
}

long QueryTraceM3u8JobRequest::getPageNumber() const {
  return pageNumber_;
}

void QueryTraceM3u8JobRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

long QueryTraceM3u8JobRequest::getCreateTimeEnd() const {
  return createTimeEnd_;
}

void QueryTraceM3u8JobRequest::setCreateTimeEnd(long createTimeEnd) {
  createTimeEnd_ = createTimeEnd;
  setParameter(std::string("CreateTimeEnd"), std::to_string(createTimeEnd));
}

std::string QueryTraceM3u8JobRequest::getJobId() const {
  return jobId_;
}

void QueryTraceM3u8JobRequest::setJobId(const std::string &jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), jobId);
}

long QueryTraceM3u8JobRequest::getPageSize() const {
  return pageSize_;
}

void QueryTraceM3u8JobRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

long QueryTraceM3u8JobRequest::getCreateTimeStart() const {
  return createTimeStart_;
}

void QueryTraceM3u8JobRequest::setCreateTimeStart(long createTimeStart) {
  createTimeStart_ = createTimeStart;
  setParameter(std::string("CreateTimeStart"), std::to_string(createTimeStart));
}

