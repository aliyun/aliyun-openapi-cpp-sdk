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

#include <alibabacloud/idaas-doraemon/model/ListCostUnitOrdersRequest.h>

using AlibabaCloud::Idaas_doraemon::Model::ListCostUnitOrdersRequest;

ListCostUnitOrdersRequest::ListCostUnitOrdersRequest()
    : RpcServiceRequest("idaas-doraemon", "2021-05-20", "ListCostUnitOrders") {
  setMethod(HttpRequest::Method::Post);
}

ListCostUnitOrdersRequest::~ListCostUnitOrdersRequest() {}

std::string ListCostUnitOrdersRequest::getBeginDate() const {
  return beginDate_;
}

void ListCostUnitOrdersRequest::setBeginDate(const std::string &beginDate) {
  beginDate_ = beginDate;
  setParameter(std::string("BeginDate"), beginDate);
}

int ListCostUnitOrdersRequest::getPageNumber() const {
  return pageNumber_;
}

void ListCostUnitOrdersRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListCostUnitOrdersRequest::getFinalDate() const {
  return finalDate_;
}

void ListCostUnitOrdersRequest::setFinalDate(const std::string &finalDate) {
  finalDate_ = finalDate;
  setParameter(std::string("FinalDate"), finalDate);
}

int ListCostUnitOrdersRequest::getPageSize() const {
  return pageSize_;
}

void ListCostUnitOrdersRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

