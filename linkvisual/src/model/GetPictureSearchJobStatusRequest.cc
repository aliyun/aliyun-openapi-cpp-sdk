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

#include <alibabacloud/linkvisual/model/GetPictureSearchJobStatusRequest.h>

using AlibabaCloud::Linkvisual::Model::GetPictureSearchJobStatusRequest;

GetPictureSearchJobStatusRequest::GetPictureSearchJobStatusRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "GetPictureSearchJobStatus") {
  setMethod(HttpRequest::Method::Post);
}

GetPictureSearchJobStatusRequest::~GetPictureSearchJobStatusRequest() {}

std::string GetPictureSearchJobStatusRequest::getJobId() const {
  return jobId_;
}

void GetPictureSearchJobStatusRequest::setJobId(const std::string &jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), jobId);
}

std::string GetPictureSearchJobStatusRequest::getApiProduct() const {
  return apiProduct_;
}

void GetPictureSearchJobStatusRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string GetPictureSearchJobStatusRequest::getApiRevision() const {
  return apiRevision_;
}

void GetPictureSearchJobStatusRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

std::string GetPictureSearchJobStatusRequest::getAppInstanceId() const {
  return appInstanceId_;
}

void GetPictureSearchJobStatusRequest::setAppInstanceId(const std::string &appInstanceId) {
  appInstanceId_ = appInstanceId;
  setParameter(std::string("AppInstanceId"), appInstanceId);
}

