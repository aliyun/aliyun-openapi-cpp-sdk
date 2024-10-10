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

#include <alibabacloud/push/model/QueryPushRecordsRequest.h>

using AlibabaCloud::Push::Model::QueryPushRecordsRequest;

QueryPushRecordsRequest::QueryPushRecordsRequest()
    : RpcServiceRequest("push", "2016-08-01", "QueryPushRecords") {
  setMethod(HttpRequest::Method::Post);
}

QueryPushRecordsRequest::~QueryPushRecordsRequest() {}

std::string QueryPushRecordsRequest::getStartTime() const {
  return startTime_;
}

void QueryPushRecordsRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string QueryPushRecordsRequest::getSource() const {
  return source_;
}

void QueryPushRecordsRequest::setSource(const std::string &source) {
  source_ = source;
  setParameter(std::string("Source"), source);
}

std::string QueryPushRecordsRequest::getNextToken() const {
  return nextToken_;
}

void QueryPushRecordsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int QueryPushRecordsRequest::getPageSize() const {
  return pageSize_;
}

void QueryPushRecordsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string QueryPushRecordsRequest::getKeyword() const {
  return keyword_;
}

void QueryPushRecordsRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setParameter(std::string("Keyword"), keyword);
}

std::string QueryPushRecordsRequest::getEndTime() const {
  return endTime_;
}

void QueryPushRecordsRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string QueryPushRecordsRequest::getTarget() const {
  return target_;
}

void QueryPushRecordsRequest::setTarget(const std::string &target) {
  target_ = target;
  setParameter(std::string("Target"), target);
}

long QueryPushRecordsRequest::getAppKey() const {
  return appKey_;
}

void QueryPushRecordsRequest::setAppKey(long appKey) {
  appKey_ = appKey;
  setParameter(std::string("AppKey"), std::to_string(appKey));
}

int QueryPushRecordsRequest::getPage() const {
  return page_;
}

void QueryPushRecordsRequest::setPage(int page) {
  page_ = page;
  setParameter(std::string("Page"), std::to_string(page));
}

std::string QueryPushRecordsRequest::getPushType() const {
  return pushType_;
}

void QueryPushRecordsRequest::setPushType(const std::string &pushType) {
  pushType_ = pushType;
  setParameter(std::string("PushType"), pushType);
}

