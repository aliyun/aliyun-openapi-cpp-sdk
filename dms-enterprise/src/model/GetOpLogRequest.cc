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

#include <alibabacloud/dms-enterprise/model/GetOpLogRequest.h>

using AlibabaCloud::Dms_enterprise::Model::GetOpLogRequest;

GetOpLogRequest::GetOpLogRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "GetOpLog") {
  setMethod(HttpRequest::Method::Post);
}

GetOpLogRequest::~GetOpLogRequest() {}

std::string GetOpLogRequest::getUserNick() const {
  return userNick_;
}

void GetOpLogRequest::setUserNick(const std::string &userNick) {
  userNick_ = userNick;
  setParameter(std::string("UserNick"), userNick);
}

std::string GetOpLogRequest::getStartTime() const {
  return startTime_;
}

void GetOpLogRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

long GetOpLogRequest::getTid() const {
  return tid_;
}

void GetOpLogRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

int GetOpLogRequest::getPageNumber() const {
  return pageNumber_;
}

void GetOpLogRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int GetOpLogRequest::getPageSize() const {
  return pageSize_;
}

void GetOpLogRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string GetOpLogRequest::getModule() const {
  return module_;
}

void GetOpLogRequest::setModule(const std::string &module) {
  module_ = module;
  setParameter(std::string("Module"), module);
}

std::string GetOpLogRequest::getEndTime() const {
  return endTime_;
}

void GetOpLogRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string GetOpLogRequest::getDatabaseName() const {
  return databaseName_;
}

void GetOpLogRequest::setDatabaseName(const std::string &databaseName) {
  databaseName_ = databaseName;
  setParameter(std::string("DatabaseName"), databaseName);
}

