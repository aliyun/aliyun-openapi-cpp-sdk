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

#include <alibabacloud/linkvisual/model/DeletePictureRequest.h>

using AlibabaCloud::Linkvisual::Model::DeletePictureRequest;

DeletePictureRequest::DeletePictureRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "DeletePicture") {
  setMethod(HttpRequest::Method::Post);
}

DeletePictureRequest::~DeletePictureRequest() {}

std::string DeletePictureRequest::getIotId() const {
  return iotId_;
}

void DeletePictureRequest::setIotId(const std::string &iotId) {
  iotId_ = iotId;
  setParameter(std::string("IotId"), iotId);
}

std::string DeletePictureRequest::getIotInstanceId() const {
  return iotInstanceId_;
}

void DeletePictureRequest::setIotInstanceId(const std::string &iotInstanceId) {
  iotInstanceId_ = iotInstanceId;
  setParameter(std::string("IotInstanceId"), iotInstanceId);
}

std::vector<std::string> DeletePictureRequest::getPictureIdList() const {
  return pictureIdList_;
}

void DeletePictureRequest::setPictureIdList(const std::vector<std::string> &pictureIdList) {
  pictureIdList_ = pictureIdList;
}

std::string DeletePictureRequest::getProductKey() const {
  return productKey_;
}

void DeletePictureRequest::setProductKey(const std::string &productKey) {
  productKey_ = productKey;
  setParameter(std::string("ProductKey"), productKey);
}

std::string DeletePictureRequest::getApiProduct() const {
  return apiProduct_;
}

void DeletePictureRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string DeletePictureRequest::getApiRevision() const {
  return apiRevision_;
}

void DeletePictureRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

std::string DeletePictureRequest::getDeviceName() const {
  return deviceName_;
}

void DeletePictureRequest::setDeviceName(const std::string &deviceName) {
  deviceName_ = deviceName;
  setParameter(std::string("DeviceName"), deviceName);
}

