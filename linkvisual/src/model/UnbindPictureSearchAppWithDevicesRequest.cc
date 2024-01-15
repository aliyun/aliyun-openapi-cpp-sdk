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

#include <alibabacloud/linkvisual/model/UnbindPictureSearchAppWithDevicesRequest.h>

using AlibabaCloud::Linkvisual::Model::UnbindPictureSearchAppWithDevicesRequest;

UnbindPictureSearchAppWithDevicesRequest::UnbindPictureSearchAppWithDevicesRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "UnbindPictureSearchAppWithDevices") {
  setMethod(HttpRequest::Method::Post);
}

UnbindPictureSearchAppWithDevicesRequest::~UnbindPictureSearchAppWithDevicesRequest() {}

std::string UnbindPictureSearchAppWithDevicesRequest::getIotInstanceId() const {
  return iotInstanceId_;
}

void UnbindPictureSearchAppWithDevicesRequest::setIotInstanceId(const std::string &iotInstanceId) {
  iotInstanceId_ = iotInstanceId;
  setParameter(std::string("IotInstanceId"), iotInstanceId);
}

std::vector<std::string> UnbindPictureSearchAppWithDevicesRequest::getDeviceIotIds() const {
  return deviceIotIds_;
}

void UnbindPictureSearchAppWithDevicesRequest::setDeviceIotIds(const std::vector<std::string> &deviceIotIds) {
  deviceIotIds_ = deviceIotIds;
}

std::string UnbindPictureSearchAppWithDevicesRequest::getApiProduct() const {
  return apiProduct_;
}

void UnbindPictureSearchAppWithDevicesRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string UnbindPictureSearchAppWithDevicesRequest::getApiRevision() const {
  return apiRevision_;
}

void UnbindPictureSearchAppWithDevicesRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

std::string UnbindPictureSearchAppWithDevicesRequest::getAppInstanceId() const {
  return appInstanceId_;
}

void UnbindPictureSearchAppWithDevicesRequest::setAppInstanceId(const std::string &appInstanceId) {
  appInstanceId_ = appInstanceId;
  setParameter(std::string("AppInstanceId"), appInstanceId);
}

