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

#include <alibabacloud/linkvisual/model/TriggerCapturePictureRequest.h>

using AlibabaCloud::Linkvisual::Model::TriggerCapturePictureRequest;

TriggerCapturePictureRequest::TriggerCapturePictureRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "TriggerCapturePicture") {
  setMethod(HttpRequest::Method::Post);
}

TriggerCapturePictureRequest::~TriggerCapturePictureRequest() {}

std::string TriggerCapturePictureRequest::getIotId() const {
  return iotId_;
}

void TriggerCapturePictureRequest::setIotId(const std::string &iotId) {
  iotId_ = iotId;
  setParameter(std::string("IotId"), iotId);
}

std::string TriggerCapturePictureRequest::getIotInstanceId() const {
  return iotInstanceId_;
}

void TriggerCapturePictureRequest::setIotInstanceId(const std::string &iotInstanceId) {
  iotInstanceId_ = iotInstanceId;
  setParameter(std::string("IotInstanceId"), iotInstanceId);
}

std::string TriggerCapturePictureRequest::getProductKey() const {
  return productKey_;
}

void TriggerCapturePictureRequest::setProductKey(const std::string &productKey) {
  productKey_ = productKey;
  setParameter(std::string("ProductKey"), productKey);
}

std::string TriggerCapturePictureRequest::getApiProduct() const {
  return apiProduct_;
}

void TriggerCapturePictureRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string TriggerCapturePictureRequest::getApiRevision() const {
  return apiRevision_;
}

void TriggerCapturePictureRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

std::string TriggerCapturePictureRequest::getDeviceName() const {
  return deviceName_;
}

void TriggerCapturePictureRequest::setDeviceName(const std::string &deviceName) {
  deviceName_ = deviceName;
  setParameter(std::string("DeviceName"), deviceName);
}

