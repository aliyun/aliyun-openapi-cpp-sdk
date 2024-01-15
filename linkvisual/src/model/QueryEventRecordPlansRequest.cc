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

#include <alibabacloud/linkvisual/model/QueryEventRecordPlansRequest.h>

using AlibabaCloud::Linkvisual::Model::QueryEventRecordPlansRequest;

QueryEventRecordPlansRequest::QueryEventRecordPlansRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "QueryEventRecordPlans") {
  setMethod(HttpRequest::Method::Post);
}

QueryEventRecordPlansRequest::~QueryEventRecordPlansRequest() {}

int QueryEventRecordPlansRequest::getPageSize() const {
  return pageSize_;
}

void QueryEventRecordPlansRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int QueryEventRecordPlansRequest::getCurrentPage() const {
  return currentPage_;
}

void QueryEventRecordPlansRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string QueryEventRecordPlansRequest::getApiProduct() const {
  return apiProduct_;
}

void QueryEventRecordPlansRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string QueryEventRecordPlansRequest::getApiRevision() const {
  return apiRevision_;
}

void QueryEventRecordPlansRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

