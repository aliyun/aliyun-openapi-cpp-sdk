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

#include <alibabacloud/dcdn/model/UpdateDcdnUserRealTimeDeliveryFieldRequest.h>

using AlibabaCloud::Dcdn::Model::UpdateDcdnUserRealTimeDeliveryFieldRequest;

UpdateDcdnUserRealTimeDeliveryFieldRequest::UpdateDcdnUserRealTimeDeliveryFieldRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "UpdateDcdnUserRealTimeDeliveryField") {
  setMethod(HttpRequest::Method::Post);
}

UpdateDcdnUserRealTimeDeliveryFieldRequest::~UpdateDcdnUserRealTimeDeliveryFieldRequest() {}

std::string UpdateDcdnUserRealTimeDeliveryFieldRequest::getFields() const {
  return fields_;
}

void UpdateDcdnUserRealTimeDeliveryFieldRequest::setFields(const std::string &fields) {
  fields_ = fields;
  setParameter(std::string("Fields"), fields);
}

std::string UpdateDcdnUserRealTimeDeliveryFieldRequest::getBusinessType() const {
  return businessType_;
}

void UpdateDcdnUserRealTimeDeliveryFieldRequest::setBusinessType(const std::string &businessType) {
  businessType_ = businessType;
  setParameter(std::string("BusinessType"), businessType);
}

