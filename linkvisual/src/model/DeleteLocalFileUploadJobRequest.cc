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

#include <alibabacloud/linkvisual/model/DeleteLocalFileUploadJobRequest.h>

using AlibabaCloud::Linkvisual::Model::DeleteLocalFileUploadJobRequest;

DeleteLocalFileUploadJobRequest::DeleteLocalFileUploadJobRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "DeleteLocalFileUploadJob") {
  setMethod(HttpRequest::Method::Post);
}

DeleteLocalFileUploadJobRequest::~DeleteLocalFileUploadJobRequest() {}

std::string DeleteLocalFileUploadJobRequest::getJobId() const {
  return jobId_;
}

void DeleteLocalFileUploadJobRequest::setJobId(const std::string &jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), jobId);
}

std::string DeleteLocalFileUploadJobRequest::getIotInstanceId() const {
  return iotInstanceId_;
}

void DeleteLocalFileUploadJobRequest::setIotInstanceId(const std::string &iotInstanceId) {
  iotInstanceId_ = iotInstanceId;
  setParameter(std::string("IotInstanceId"), iotInstanceId);
}

std::string DeleteLocalFileUploadJobRequest::getApiProduct() const {
  return apiProduct_;
}

void DeleteLocalFileUploadJobRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string DeleteLocalFileUploadJobRequest::getApiRevision() const {
  return apiRevision_;
}

void DeleteLocalFileUploadJobRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

