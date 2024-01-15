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

#include <alibabacloud/linkvisual/model/QueryPictureFilesRequest.h>

using AlibabaCloud::Linkvisual::Model::QueryPictureFilesRequest;

QueryPictureFilesRequest::QueryPictureFilesRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "QueryPictureFiles") {
  setMethod(HttpRequest::Method::Post);
}

QueryPictureFilesRequest::~QueryPictureFilesRequest() {}

int QueryPictureFilesRequest::getPictureSource() const {
  return pictureSource_;
}

void QueryPictureFilesRequest::setPictureSource(int pictureSource) {
  pictureSource_ = pictureSource;
  setParameter(std::string("PictureSource"), std::to_string(pictureSource));
}

int QueryPictureFilesRequest::getPictureType() const {
  return pictureType_;
}

void QueryPictureFilesRequest::setPictureType(int pictureType) {
  pictureType_ = pictureType;
  setParameter(std::string("PictureType"), std::to_string(pictureType));
}

std::string QueryPictureFilesRequest::getIotId() const {
  return iotId_;
}

void QueryPictureFilesRequest::setIotId(const std::string &iotId) {
  iotId_ = iotId;
  setParameter(std::string("IotId"), iotId);
}

std::string QueryPictureFilesRequest::getIotInstanceId() const {
  return iotInstanceId_;
}

void QueryPictureFilesRequest::setIotInstanceId(const std::string &iotInstanceId) {
  iotInstanceId_ = iotInstanceId;
  setParameter(std::string("IotInstanceId"), iotInstanceId);
}

int QueryPictureFilesRequest::getPageSize() const {
  return pageSize_;
}

void QueryPictureFilesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

long QueryPictureFilesRequest::getEndTime() const {
  return endTime_;
}

void QueryPictureFilesRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

long QueryPictureFilesRequest::getBeginTime() const {
  return beginTime_;
}

void QueryPictureFilesRequest::setBeginTime(long beginTime) {
  beginTime_ = beginTime;
  setParameter(std::string("BeginTime"), std::to_string(beginTime));
}

int QueryPictureFilesRequest::getCurrentPage() const {
  return currentPage_;
}

void QueryPictureFilesRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string QueryPictureFilesRequest::getProductKey() const {
  return productKey_;
}

void QueryPictureFilesRequest::setProductKey(const std::string &productKey) {
  productKey_ = productKey;
  setParameter(std::string("ProductKey"), productKey);
}

std::string QueryPictureFilesRequest::getApiProduct() const {
  return apiProduct_;
}

void QueryPictureFilesRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string QueryPictureFilesRequest::getApiRevision() const {
  return apiRevision_;
}

void QueryPictureFilesRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

std::string QueryPictureFilesRequest::getDeviceName() const {
  return deviceName_;
}

void QueryPictureFilesRequest::setDeviceName(const std::string &deviceName) {
  deviceName_ = deviceName;
  setParameter(std::string("DeviceName"), deviceName);
}

