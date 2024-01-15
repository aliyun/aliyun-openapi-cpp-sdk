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

#include <alibabacloud/linkvisual/model/QueryTimeTemplateRequest.h>

using AlibabaCloud::Linkvisual::Model::QueryTimeTemplateRequest;

QueryTimeTemplateRequest::QueryTimeTemplateRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "QueryTimeTemplate") {
  setMethod(HttpRequest::Method::Post);
}

QueryTimeTemplateRequest::~QueryTimeTemplateRequest() {}

int QueryTimeTemplateRequest::getPageSize() const {
  return pageSize_;
}

void QueryTimeTemplateRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int QueryTimeTemplateRequest::getCurrentPage() const {
  return currentPage_;
}

void QueryTimeTemplateRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string QueryTimeTemplateRequest::getApiProduct() const {
  return apiProduct_;
}

void QueryTimeTemplateRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string QueryTimeTemplateRequest::getApiRevision() const {
  return apiRevision_;
}

void QueryTimeTemplateRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

