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

#include <alibabacloud/linkvisual/model/QueryPictureSearchAppsRequest.h>

using AlibabaCloud::Linkvisual::Model::QueryPictureSearchAppsRequest;

QueryPictureSearchAppsRequest::QueryPictureSearchAppsRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "QueryPictureSearchApps") {
  setMethod(HttpRequest::Method::Post);
}

QueryPictureSearchAppsRequest::~QueryPictureSearchAppsRequest() {}

std::string QueryPictureSearchAppsRequest::getIotInstanceId() const {
  return iotInstanceId_;
}

void QueryPictureSearchAppsRequest::setIotInstanceId(const std::string &iotInstanceId) {
  iotInstanceId_ = iotInstanceId;
  setParameter(std::string("IotInstanceId"), iotInstanceId);
}

int QueryPictureSearchAppsRequest::getPageSize() const {
  return pageSize_;
}

void QueryPictureSearchAppsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int QueryPictureSearchAppsRequest::getCurrentPage() const {
  return currentPage_;
}

void QueryPictureSearchAppsRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string QueryPictureSearchAppsRequest::getApiProduct() const {
  return apiProduct_;
}

void QueryPictureSearchAppsRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string QueryPictureSearchAppsRequest::getApiRevision() const {
  return apiRevision_;
}

void QueryPictureSearchAppsRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

