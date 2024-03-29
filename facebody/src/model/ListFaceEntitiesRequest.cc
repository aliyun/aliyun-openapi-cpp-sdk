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

#include <alibabacloud/facebody/model/ListFaceEntitiesRequest.h>

using AlibabaCloud::Facebody::Model::ListFaceEntitiesRequest;

ListFaceEntitiesRequest::ListFaceEntitiesRequest()
    : RpcServiceRequest("facebody", "2019-12-30", "ListFaceEntities") {
  setMethod(HttpRequest::Method::Post);
}

ListFaceEntitiesRequest::~ListFaceEntitiesRequest() {}

std::string ListFaceEntitiesRequest::getEntityIdPrefix() const {
  return entityIdPrefix_;
}

void ListFaceEntitiesRequest::setEntityIdPrefix(const std::string &entityIdPrefix) {
  entityIdPrefix_ = entityIdPrefix;
  setBodyParameter(std::string("EntityIdPrefix"), entityIdPrefix);
}

bool ListFaceEntitiesRequest::getFormatResultToJson() const {
  return formatResultToJson_;
}

void ListFaceEntitiesRequest::setFormatResultToJson(bool formatResultToJson) {
  formatResultToJson_ = formatResultToJson;
  setParameter(std::string("FormatResultToJson"), formatResultToJson ? "true" : "false");
}

int ListFaceEntitiesRequest::getLimit() const {
  return limit_;
}

void ListFaceEntitiesRequest::setLimit(int limit) {
  limit_ = limit;
  setBodyParameter(std::string("Limit"), std::to_string(limit));
}

std::string ListFaceEntitiesRequest::getOssFile() const {
  return ossFile_;
}

void ListFaceEntitiesRequest::setOssFile(const std::string &ossFile) {
  ossFile_ = ossFile;
  setParameter(std::string("OssFile"), ossFile);
}

std::string ListFaceEntitiesRequest::getOrder() const {
  return order_;
}

void ListFaceEntitiesRequest::setOrder(const std::string &order) {
  order_ = order;
  setBodyParameter(std::string("Order"), order);
}

int ListFaceEntitiesRequest::getOffset() const {
  return offset_;
}

void ListFaceEntitiesRequest::setOffset(int offset) {
  offset_ = offset;
  setBodyParameter(std::string("Offset"), std::to_string(offset));
}

std::string ListFaceEntitiesRequest::getRequestProxyBy() const {
  return requestProxyBy_;
}

void ListFaceEntitiesRequest::setRequestProxyBy(const std::string &requestProxyBy) {
  requestProxyBy_ = requestProxyBy;
  setParameter(std::string("RequestProxyBy"), requestProxyBy);
}

std::string ListFaceEntitiesRequest::getToken() const {
  return token_;
}

void ListFaceEntitiesRequest::setToken(const std::string &token) {
  token_ = token;
  setBodyParameter(std::string("Token"), token);
}

std::string ListFaceEntitiesRequest::getLabels() const {
  return labels_;
}

void ListFaceEntitiesRequest::setLabels(const std::string &labels) {
  labels_ = labels;
  setBodyParameter(std::string("Labels"), labels);
}

std::string ListFaceEntitiesRequest::getDbName() const {
  return dbName_;
}

void ListFaceEntitiesRequest::setDbName(const std::string &dbName) {
  dbName_ = dbName;
  setBodyParameter(std::string("DbName"), dbName);
}

