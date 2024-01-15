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

#include <alibabacloud/linkvisual/model/QueryPictureSearchAiboxesRequest.h>

using AlibabaCloud::Linkvisual::Model::QueryPictureSearchAiboxesRequest;

QueryPictureSearchAiboxesRequest::QueryPictureSearchAiboxesRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "QueryPictureSearchAiboxes") {
  setMethod(HttpRequest::Method::Post);
}

QueryPictureSearchAiboxesRequest::~QueryPictureSearchAiboxesRequest() {}

std::string QueryPictureSearchAiboxesRequest::getIotInstanceId() const {
  return iotInstanceId_;
}

void QueryPictureSearchAiboxesRequest::setIotInstanceId(const std::string &iotInstanceId) {
  iotInstanceId_ = iotInstanceId;
  setParameter(std::string("IotInstanceId"), iotInstanceId);
}

int QueryPictureSearchAiboxesRequest::getPageSize() const {
  return pageSize_;
}

void QueryPictureSearchAiboxesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int QueryPictureSearchAiboxesRequest::getCurrentPage() const {
  return currentPage_;
}

void QueryPictureSearchAiboxesRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string QueryPictureSearchAiboxesRequest::getApiProduct() const {
  return apiProduct_;
}

void QueryPictureSearchAiboxesRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string QueryPictureSearchAiboxesRequest::getApiRevision() const {
  return apiRevision_;
}

void QueryPictureSearchAiboxesRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

std::string QueryPictureSearchAiboxesRequest::getAppInstanceId() const {
  return appInstanceId_;
}

void QueryPictureSearchAiboxesRequest::setAppInstanceId(const std::string &appInstanceId) {
  appInstanceId_ = appInstanceId;
  setParameter(std::string("AppInstanceId"), appInstanceId);
}

