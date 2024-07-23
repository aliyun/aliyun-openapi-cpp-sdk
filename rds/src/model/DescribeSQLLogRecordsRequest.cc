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

#include <alibabacloud/rds/model/DescribeSQLLogRecordsRequest.h>

using AlibabaCloud::Rds::Model::DescribeSQLLogRecordsRequest;

DescribeSQLLogRecordsRequest::DescribeSQLLogRecordsRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeSQLLogRecords") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSQLLogRecordsRequest::~DescribeSQLLogRecordsRequest() {}

long DescribeSQLLogRecordsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeSQLLogRecordsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeSQLLogRecordsRequest::getClientToken() const {
  return clientToken_;
}

void DescribeSQLLogRecordsRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DescribeSQLLogRecordsRequest::getStartTime() const {
  return startTime_;
}

void DescribeSQLLogRecordsRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeSQLLogRecordsRequest::getQueryKeywords() const {
  return queryKeywords_;
}

void DescribeSQLLogRecordsRequest::setQueryKeywords(const std::string &queryKeywords) {
  queryKeywords_ = queryKeywords;
  setParameter(std::string("QueryKeywords"), queryKeywords);
}

int DescribeSQLLogRecordsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeSQLLogRecordsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeSQLLogRecordsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeSQLLogRecordsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeSQLLogRecordsRequest::getDatabase() const {
  return database_;
}

void DescribeSQLLogRecordsRequest::setDatabase(const std::string &database) {
  database_ = database;
  setParameter(std::string("Database"), database);
}

std::string DescribeSQLLogRecordsRequest::getRegionId() const {
  return regionId_;
}

void DescribeSQLLogRecordsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeSQLLogRecordsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeSQLLogRecordsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeSQLLogRecordsRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeSQLLogRecordsRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

long DescribeSQLLogRecordsRequest::getSQLId() const {
  return sQLId_;
}

void DescribeSQLLogRecordsRequest::setSQLId(long sQLId) {
  sQLId_ = sQLId;
  setParameter(std::string("SQLId"), std::to_string(sQLId));
}

std::string DescribeSQLLogRecordsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeSQLLogRecordsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeSQLLogRecordsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeSQLLogRecordsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DescribeSQLLogRecordsRequest::getEndTime() const {
  return endTime_;
}

void DescribeSQLLogRecordsRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeSQLLogRecordsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeSQLLogRecordsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeSQLLogRecordsRequest::getForm() const {
  return form_;
}

void DescribeSQLLogRecordsRequest::setForm(const std::string &form) {
  form_ = form;
  setParameter(std::string("Form"), form);
}

std::string DescribeSQLLogRecordsRequest::getUser() const {
  return user_;
}

void DescribeSQLLogRecordsRequest::setUser(const std::string &user) {
  user_ = user;
  setParameter(std::string("User"), user);
}

