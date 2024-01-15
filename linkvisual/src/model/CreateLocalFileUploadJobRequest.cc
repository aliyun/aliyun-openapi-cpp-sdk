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

#include <alibabacloud/linkvisual/model/CreateLocalFileUploadJobRequest.h>

using AlibabaCloud::Linkvisual::Model::CreateLocalFileUploadJobRequest;

CreateLocalFileUploadJobRequest::CreateLocalFileUploadJobRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "CreateLocalFileUploadJob") {
  setMethod(HttpRequest::Method::Post);
}

CreateLocalFileUploadJobRequest::~CreateLocalFileUploadJobRequest() {}

std::string CreateLocalFileUploadJobRequest::getIotInstanceId() const {
  return iotInstanceId_;
}

void CreateLocalFileUploadJobRequest::setIotInstanceId(const std::string &iotInstanceId) {
  iotInstanceId_ = iotInstanceId;
  setParameter(std::string("IotInstanceId"), iotInstanceId);
}

std::vector<CreateLocalFileUploadJobRequest::TimeSlot> CreateLocalFileUploadJobRequest::getTimeSlot() const {
  return timeSlot_;
}

void CreateLocalFileUploadJobRequest::setTimeSlot(const std::vector<CreateLocalFileUploadJobRequest::TimeSlot> &timeSlot) {
  timeSlot_ = timeSlot;
  for(int dep1 = 0; dep1 != timeSlot.size(); dep1++) {
  auto timeSlotObj = timeSlot.at(dep1);
  std::string timeSlotObjStr = std::string("TimeSlot") + "." + std::to_string(dep1 + 1);
    setParameter(timeSlotObjStr + ".EndTime", std::to_string(timeSlotObj.endTime));
    setParameter(timeSlotObjStr + ".StartTime", std::to_string(timeSlotObj.startTime));
    setParameter(timeSlotObjStr + ".ProductKey", timeSlotObj.productKey);
    setParameter(timeSlotObjStr + ".DeviceName", timeSlotObj.deviceName);
    setParameter(timeSlotObjStr + ".IotId", timeSlotObj.iotId);
  }
}

std::string CreateLocalFileUploadJobRequest::getApiProduct() const {
  return apiProduct_;
}

void CreateLocalFileUploadJobRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string CreateLocalFileUploadJobRequest::getApiRevision() const {
  return apiRevision_;
}

void CreateLocalFileUploadJobRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

