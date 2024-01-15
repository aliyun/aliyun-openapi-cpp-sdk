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

#include <alibabacloud/linkvisual/model/QueryEventRecordPlanDetailRequest.h>

using AlibabaCloud::Linkvisual::Model::QueryEventRecordPlanDetailRequest;

QueryEventRecordPlanDetailRequest::QueryEventRecordPlanDetailRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "QueryEventRecordPlanDetail") {
  setMethod(HttpRequest::Method::Post);
}

QueryEventRecordPlanDetailRequest::~QueryEventRecordPlanDetailRequest() {}

std::string QueryEventRecordPlanDetailRequest::getApiProduct() const {
  return apiProduct_;
}

void QueryEventRecordPlanDetailRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string QueryEventRecordPlanDetailRequest::getApiRevision() const {
  return apiRevision_;
}

void QueryEventRecordPlanDetailRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

std::string QueryEventRecordPlanDetailRequest::getPlanId() const {
  return planId_;
}

void QueryEventRecordPlanDetailRequest::setPlanId(const std::string &planId) {
  planId_ = planId;
  setParameter(std::string("PlanId"), planId);
}

