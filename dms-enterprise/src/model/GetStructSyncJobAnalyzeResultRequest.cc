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

#include <alibabacloud/dms-enterprise/model/GetStructSyncJobAnalyzeResultRequest.h>

using AlibabaCloud::Dms_enterprise::Model::GetStructSyncJobAnalyzeResultRequest;

GetStructSyncJobAnalyzeResultRequest::GetStructSyncJobAnalyzeResultRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "GetStructSyncJobAnalyzeResult") {
  setMethod(HttpRequest::Method::Post);
}

GetStructSyncJobAnalyzeResultRequest::~GetStructSyncJobAnalyzeResultRequest() {}

long GetStructSyncJobAnalyzeResultRequest::getPageNumber() const {
  return pageNumber_;
}

void GetStructSyncJobAnalyzeResultRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

long GetStructSyncJobAnalyzeResultRequest::getTid() const {
  return tid_;
}

void GetStructSyncJobAnalyzeResultRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

long GetStructSyncJobAnalyzeResultRequest::getPageSize() const {
  return pageSize_;
}

void GetStructSyncJobAnalyzeResultRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

long GetStructSyncJobAnalyzeResultRequest::getOrderId() const {
  return orderId_;
}

void GetStructSyncJobAnalyzeResultRequest::setOrderId(long orderId) {
  orderId_ = orderId;
  setParameter(std::string("OrderId"), std::to_string(orderId));
}

std::string GetStructSyncJobAnalyzeResultRequest::getCompareType() const {
  return compareType_;
}

void GetStructSyncJobAnalyzeResultRequest::setCompareType(const std::string &compareType) {
  compareType_ = compareType;
  setParameter(std::string("CompareType"), compareType);
}

