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

#include <alibabacloud/linkvisual/model/QueryLocalFileUploadJobRequest.h>

using AlibabaCloud::Linkvisual::Model::QueryLocalFileUploadJobRequest;

QueryLocalFileUploadJobRequest::QueryLocalFileUploadJobRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "QueryLocalFileUploadJob") {
  setMethod(HttpRequest::Method::Post);
}

QueryLocalFileUploadJobRequest::~QueryLocalFileUploadJobRequest() {}

std::string QueryLocalFileUploadJobRequest::getJobId() const {
  return jobId_;
}

void QueryLocalFileUploadJobRequest::setJobId(const std::string &jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), jobId);
}

std::string QueryLocalFileUploadJobRequest::getIotInstanceId() const {
  return iotInstanceId_;
}

void QueryLocalFileUploadJobRequest::setIotInstanceId(const std::string &iotInstanceId) {
  iotInstanceId_ = iotInstanceId;
  setParameter(std::string("IotInstanceId"), iotInstanceId);
}

std::string QueryLocalFileUploadJobRequest::getApiProduct() const {
  return apiProduct_;
}

void QueryLocalFileUploadJobRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string QueryLocalFileUploadJobRequest::getApiRevision() const {
  return apiRevision_;
}

void QueryLocalFileUploadJobRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

