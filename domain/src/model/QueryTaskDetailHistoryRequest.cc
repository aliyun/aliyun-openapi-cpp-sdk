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

#include <alibabacloud/domain/model/QueryTaskDetailHistoryRequest.h>

using AlibabaCloud::Domain::Model::QueryTaskDetailHistoryRequest;

QueryTaskDetailHistoryRequest::QueryTaskDetailHistoryRequest()
    : RpcServiceRequest("domain", "2018-01-29", "QueryTaskDetailHistory") {
  setMethod(HttpRequest::Method::Post);
}

QueryTaskDetailHistoryRequest::~QueryTaskDetailHistoryRequest() {}

std::string QueryTaskDetailHistoryRequest::getDomainName() const {
  return domainName_;
}

void QueryTaskDetailHistoryRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

int QueryTaskDetailHistoryRequest::getTaskStatus() const {
  return taskStatus_;
}

void QueryTaskDetailHistoryRequest::setTaskStatus(int taskStatus) {
  taskStatus_ = taskStatus;
  setParameter(std::string("TaskStatus"), std::to_string(taskStatus));
}

std::string QueryTaskDetailHistoryRequest::getUserClientIp() const {
  return userClientIp_;
}

void QueryTaskDetailHistoryRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string QueryTaskDetailHistoryRequest::getTaskNo() const {
  return taskNo_;
}

void QueryTaskDetailHistoryRequest::setTaskNo(const std::string &taskNo) {
  taskNo_ = taskNo;
  setParameter(std::string("TaskNo"), taskNo);
}

int QueryTaskDetailHistoryRequest::getPageSize() const {
  return pageSize_;
}

void QueryTaskDetailHistoryRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string QueryTaskDetailHistoryRequest::getTaskDetailNoCursor() const {
  return taskDetailNoCursor_;
}

void QueryTaskDetailHistoryRequest::setTaskDetailNoCursor(const std::string &taskDetailNoCursor) {
  taskDetailNoCursor_ = taskDetailNoCursor;
  setParameter(std::string("TaskDetailNoCursor"), taskDetailNoCursor);
}

std::string QueryTaskDetailHistoryRequest::getLang() const {
  return lang_;
}

void QueryTaskDetailHistoryRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string QueryTaskDetailHistoryRequest::getDomainNameCursor() const {
  return domainNameCursor_;
}

void QueryTaskDetailHistoryRequest::setDomainNameCursor(const std::string &domainNameCursor) {
  domainNameCursor_ = domainNameCursor;
  setParameter(std::string("DomainNameCursor"), domainNameCursor);
}

