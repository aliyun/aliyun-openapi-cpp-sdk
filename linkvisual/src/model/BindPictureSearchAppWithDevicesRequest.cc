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

#include <alibabacloud/linkvisual/model/BindPictureSearchAppWithDevicesRequest.h>

using AlibabaCloud::Linkvisual::Model::BindPictureSearchAppWithDevicesRequest;

BindPictureSearchAppWithDevicesRequest::BindPictureSearchAppWithDevicesRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "BindPictureSearchAppWithDevices") {
  setMethod(HttpRequest::Method::Post);
}

BindPictureSearchAppWithDevicesRequest::~BindPictureSearchAppWithDevicesRequest() {}

std::string BindPictureSearchAppWithDevicesRequest::getIotInstanceId() const {
  return iotInstanceId_;
}

void BindPictureSearchAppWithDevicesRequest::setIotInstanceId(const std::string &iotInstanceId) {
  iotInstanceId_ = iotInstanceId;
  setParameter(std::string("IotInstanceId"), iotInstanceId);
}

std::vector<std::string> BindPictureSearchAppWithDevicesRequest::getDeviceIotIds() const {
  return deviceIotIds_;
}

void BindPictureSearchAppWithDevicesRequest::setDeviceIotIds(const std::vector<std::string> &deviceIotIds) {
  deviceIotIds_ = deviceIotIds;
}

std::string BindPictureSearchAppWithDevicesRequest::getApiProduct() const {
  return apiProduct_;
}

void BindPictureSearchAppWithDevicesRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string BindPictureSearchAppWithDevicesRequest::getApiRevision() const {
  return apiRevision_;
}

void BindPictureSearchAppWithDevicesRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

std::string BindPictureSearchAppWithDevicesRequest::getAppInstanceId() const {
  return appInstanceId_;
}

void BindPictureSearchAppWithDevicesRequest::setAppInstanceId(const std::string &appInstanceId) {
  appInstanceId_ = appInstanceId;
  setParameter(std::string("AppInstanceId"), appInstanceId);
}

