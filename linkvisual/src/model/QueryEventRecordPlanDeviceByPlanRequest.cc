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

#include <alibabacloud/linkvisual/model/QueryEventRecordPlanDeviceByPlanRequest.h>

using AlibabaCloud::Linkvisual::Model::QueryEventRecordPlanDeviceByPlanRequest;

QueryEventRecordPlanDeviceByPlanRequest::QueryEventRecordPlanDeviceByPlanRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "QueryEventRecordPlanDeviceByPlan") {
  setMethod(HttpRequest::Method::Post);
}

QueryEventRecordPlanDeviceByPlanRequest::~QueryEventRecordPlanDeviceByPlanRequest() {}

int QueryEventRecordPlanDeviceByPlanRequest::getPageSize() const {
  return pageSize_;
}

void QueryEventRecordPlanDeviceByPlanRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int QueryEventRecordPlanDeviceByPlanRequest::getCurrentPage() const {
  return currentPage_;
}

void QueryEventRecordPlanDeviceByPlanRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string QueryEventRecordPlanDeviceByPlanRequest::getApiProduct() const {
  return apiProduct_;
}

void QueryEventRecordPlanDeviceByPlanRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string QueryEventRecordPlanDeviceByPlanRequest::getApiRevision() const {
  return apiRevision_;
}

void QueryEventRecordPlanDeviceByPlanRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

std::string QueryEventRecordPlanDeviceByPlanRequest::getPlanId() const {
  return planId_;
}

void QueryEventRecordPlanDeviceByPlanRequest::setPlanId(const std::string &planId) {
  planId_ = planId;
  setParameter(std::string("PlanId"), planId);
}

