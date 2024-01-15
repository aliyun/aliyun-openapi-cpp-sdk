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

#include <alibabacloud/linkvisual/model/QueryRecordDownloadJobByIdRequest.h>

using AlibabaCloud::Linkvisual::Model::QueryRecordDownloadJobByIdRequest;

QueryRecordDownloadJobByIdRequest::QueryRecordDownloadJobByIdRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "QueryRecordDownloadJobById") {
  setMethod(HttpRequest::Method::Post);
}

QueryRecordDownloadJobByIdRequest::~QueryRecordDownloadJobByIdRequest() {}

std::string QueryRecordDownloadJobByIdRequest::getJobId() const {
  return jobId_;
}

void QueryRecordDownloadJobByIdRequest::setJobId(const std::string &jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), jobId);
}

std::string QueryRecordDownloadJobByIdRequest::getIotInstanceId() const {
  return iotInstanceId_;
}

void QueryRecordDownloadJobByIdRequest::setIotInstanceId(const std::string &iotInstanceId) {
  iotInstanceId_ = iotInstanceId;
  setParameter(std::string("IotInstanceId"), iotInstanceId);
}

std::string QueryRecordDownloadJobByIdRequest::getApiProduct() const {
  return apiProduct_;
}

void QueryRecordDownloadJobByIdRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string QueryRecordDownloadJobByIdRequest::getApiRevision() const {
  return apiRevision_;
}

void QueryRecordDownloadJobByIdRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

