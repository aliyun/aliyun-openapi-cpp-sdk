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

#include <alibabacloud/linkvisual/model/QueryRecordDownloadJobListRequest.h>

using AlibabaCloud::Linkvisual::Model::QueryRecordDownloadJobListRequest;

QueryRecordDownloadJobListRequest::QueryRecordDownloadJobListRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "QueryRecordDownloadJobList") {
  setMethod(HttpRequest::Method::Post);
}

QueryRecordDownloadJobListRequest::~QueryRecordDownloadJobListRequest() {}

std::string QueryRecordDownloadJobListRequest::getIotId() const {
  return iotId_;
}

void QueryRecordDownloadJobListRequest::setIotId(const std::string &iotId) {
  iotId_ = iotId;
  setParameter(std::string("IotId"), iotId);
}

std::string QueryRecordDownloadJobListRequest::getIotInstanceId() const {
  return iotInstanceId_;
}

void QueryRecordDownloadJobListRequest::setIotInstanceId(const std::string &iotInstanceId) {
  iotInstanceId_ = iotInstanceId;
  setParameter(std::string("IotInstanceId"), iotInstanceId);
}

int QueryRecordDownloadJobListRequest::getPageSize() const {
  return pageSize_;
}

void QueryRecordDownloadJobListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int QueryRecordDownloadJobListRequest::getCurrentPage() const {
  return currentPage_;
}

void QueryRecordDownloadJobListRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string QueryRecordDownloadJobListRequest::getProductKey() const {
  return productKey_;
}

void QueryRecordDownloadJobListRequest::setProductKey(const std::string &productKey) {
  productKey_ = productKey;
  setParameter(std::string("ProductKey"), productKey);
}

std::string QueryRecordDownloadJobListRequest::getApiProduct() const {
  return apiProduct_;
}

void QueryRecordDownloadJobListRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string QueryRecordDownloadJobListRequest::getApiRevision() const {
  return apiRevision_;
}

void QueryRecordDownloadJobListRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

std::string QueryRecordDownloadJobListRequest::getDeviceName() const {
  return deviceName_;
}

void QueryRecordDownloadJobListRequest::setDeviceName(const std::string &deviceName) {
  deviceName_ = deviceName;
  setParameter(std::string("DeviceName"), deviceName);
}

