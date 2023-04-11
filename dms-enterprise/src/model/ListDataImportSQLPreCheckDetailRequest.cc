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

#include <alibabacloud/dms-enterprise/model/ListDataImportSQLPreCheckDetailRequest.h>

using AlibabaCloud::Dms_enterprise::Model::ListDataImportSQLPreCheckDetailRequest;

ListDataImportSQLPreCheckDetailRequest::ListDataImportSQLPreCheckDetailRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "ListDataImportSQLPreCheckDetail") {
  setMethod(HttpRequest::Method::Post);
}

ListDataImportSQLPreCheckDetailRequest::~ListDataImportSQLPreCheckDetailRequest() {}

long ListDataImportSQLPreCheckDetailRequest::getPageNumer() const {
  return pageNumer_;
}

void ListDataImportSQLPreCheckDetailRequest::setPageNumer(long pageNumer) {
  pageNumer_ = pageNumer;
  setParameter(std::string("PageNumer"), std::to_string(pageNumer));
}

long ListDataImportSQLPreCheckDetailRequest::getTid() const {
  return tid_;
}

void ListDataImportSQLPreCheckDetailRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

std::string ListDataImportSQLPreCheckDetailRequest::getStatusCode() const {
  return statusCode_;
}

void ListDataImportSQLPreCheckDetailRequest::setStatusCode(const std::string &statusCode) {
  statusCode_ = statusCode;
  setParameter(std::string("StatusCode"), statusCode);
}

long ListDataImportSQLPreCheckDetailRequest::getPageSize() const {
  return pageSize_;
}

void ListDataImportSQLPreCheckDetailRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListDataImportSQLPreCheckDetailRequest::getSqlType() const {
  return sqlType_;
}

void ListDataImportSQLPreCheckDetailRequest::setSqlType(const std::string &sqlType) {
  sqlType_ = sqlType;
  setParameter(std::string("SqlType"), sqlType);
}

long ListDataImportSQLPreCheckDetailRequest::getOrderId() const {
  return orderId_;
}

void ListDataImportSQLPreCheckDetailRequest::setOrderId(long orderId) {
  orderId_ = orderId;
  setParameter(std::string("OrderId"), std::to_string(orderId));
}

