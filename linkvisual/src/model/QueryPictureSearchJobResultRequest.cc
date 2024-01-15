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

#include <alibabacloud/linkvisual/model/QueryPictureSearchJobResultRequest.h>

using AlibabaCloud::Linkvisual::Model::QueryPictureSearchJobResultRequest;

QueryPictureSearchJobResultRequest::QueryPictureSearchJobResultRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "QueryPictureSearchJobResult") {
  setMethod(HttpRequest::Method::Post);
}

QueryPictureSearchJobResultRequest::~QueryPictureSearchJobResultRequest() {}

std::string QueryPictureSearchJobResultRequest::getJobId() const {
  return jobId_;
}

void QueryPictureSearchJobResultRequest::setJobId(const std::string &jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), jobId);
}

int QueryPictureSearchJobResultRequest::getPageSize() const {
  return pageSize_;
}

void QueryPictureSearchJobResultRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int QueryPictureSearchJobResultRequest::getCurrentPage() const {
  return currentPage_;
}

void QueryPictureSearchJobResultRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string QueryPictureSearchJobResultRequest::getApiProduct() const {
  return apiProduct_;
}

void QueryPictureSearchJobResultRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string QueryPictureSearchJobResultRequest::getApiRevision() const {
  return apiRevision_;
}

void QueryPictureSearchJobResultRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

std::string QueryPictureSearchJobResultRequest::getAppInstanceId() const {
  return appInstanceId_;
}

void QueryPictureSearchJobResultRequest::setAppInstanceId(const std::string &appInstanceId) {
  appInstanceId_ = appInstanceId;
  setParameter(std::string("AppInstanceId"), appInstanceId);
}

