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

#include <alibabacloud/linkvisual/model/QueryPictureSearchJobRequest.h>

using AlibabaCloud::Linkvisual::Model::QueryPictureSearchJobRequest;

QueryPictureSearchJobRequest::QueryPictureSearchJobRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "QueryPictureSearchJob") {
  setMethod(HttpRequest::Method::Post);
}

QueryPictureSearchJobRequest::~QueryPictureSearchJobRequest() {}

int QueryPictureSearchJobRequest::getJobStatus() const {
  return jobStatus_;
}

void QueryPictureSearchJobRequest::setJobStatus(int jobStatus) {
  jobStatus_ = jobStatus;
  setParameter(std::string("JobStatus"), std::to_string(jobStatus));
}

int QueryPictureSearchJobRequest::getPageSize() const {
  return pageSize_;
}

void QueryPictureSearchJobRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int QueryPictureSearchJobRequest::getCurrentPage() const {
  return currentPage_;
}

void QueryPictureSearchJobRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string QueryPictureSearchJobRequest::getApiProduct() const {
  return apiProduct_;
}

void QueryPictureSearchJobRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string QueryPictureSearchJobRequest::getApiRevision() const {
  return apiRevision_;
}

void QueryPictureSearchJobRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

std::string QueryPictureSearchJobRequest::getAppInstanceId() const {
  return appInstanceId_;
}

void QueryPictureSearchJobRequest::setAppInstanceId(const std::string &appInstanceId) {
  appInstanceId_ = appInstanceId;
  setParameter(std::string("AppInstanceId"), appInstanceId);
}

