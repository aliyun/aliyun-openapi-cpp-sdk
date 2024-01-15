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

#include <alibabacloud/linkvisual/model/QueryRecordPlanDeviceByPlanRequest.h>

using AlibabaCloud::Linkvisual::Model::QueryRecordPlanDeviceByPlanRequest;

QueryRecordPlanDeviceByPlanRequest::QueryRecordPlanDeviceByPlanRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "QueryRecordPlanDeviceByPlan") {
  setMethod(HttpRequest::Method::Post);
}

QueryRecordPlanDeviceByPlanRequest::~QueryRecordPlanDeviceByPlanRequest() {}

int QueryRecordPlanDeviceByPlanRequest::getPageSize() const {
  return pageSize_;
}

void QueryRecordPlanDeviceByPlanRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int QueryRecordPlanDeviceByPlanRequest::getCurrentPage() const {
  return currentPage_;
}

void QueryRecordPlanDeviceByPlanRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string QueryRecordPlanDeviceByPlanRequest::getApiProduct() const {
  return apiProduct_;
}

void QueryRecordPlanDeviceByPlanRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string QueryRecordPlanDeviceByPlanRequest::getApiRevision() const {
  return apiRevision_;
}

void QueryRecordPlanDeviceByPlanRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

std::string QueryRecordPlanDeviceByPlanRequest::getPlanId() const {
  return planId_;
}

void QueryRecordPlanDeviceByPlanRequest::setPlanId(const std::string &planId) {
  planId_ = planId;
  setParameter(std::string("PlanId"), planId);
}

