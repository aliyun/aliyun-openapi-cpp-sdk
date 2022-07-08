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

#include <alibabacloud/actiontrail/model/ListDeliveryHistoryJobsRequest.h>

using AlibabaCloud::Actiontrail::Model::ListDeliveryHistoryJobsRequest;

ListDeliveryHistoryJobsRequest::ListDeliveryHistoryJobsRequest()
    : RpcServiceRequest("actiontrail", "2020-07-06", "ListDeliveryHistoryJobs") {
  setMethod(HttpRequest::Method::Post);
}

ListDeliveryHistoryJobsRequest::~ListDeliveryHistoryJobsRequest() {}

int ListDeliveryHistoryJobsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListDeliveryHistoryJobsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int ListDeliveryHistoryJobsRequest::getPageSize() const {
  return pageSize_;
}

void ListDeliveryHistoryJobsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

