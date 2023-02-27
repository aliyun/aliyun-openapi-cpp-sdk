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

#include <alibabacloud/ice/model/GetUrlUploadInfosRequest.h>

using AlibabaCloud::ICE::Model::GetUrlUploadInfosRequest;

GetUrlUploadInfosRequest::GetUrlUploadInfosRequest()
    : RpcServiceRequest("ice", "2020-11-09", "GetUrlUploadInfos") {
  setMethod(HttpRequest::Method::Post);
}

GetUrlUploadInfosRequest::~GetUrlUploadInfosRequest() {}

std::string GetUrlUploadInfosRequest::getJobIds() const {
  return jobIds_;
}

void GetUrlUploadInfosRequest::setJobIds(const std::string &jobIds) {
  jobIds_ = jobIds;
  setParameter(std::string("JobIds"), jobIds);
}

std::string GetUrlUploadInfosRequest::getUploadURLs() const {
  return uploadURLs_;
}

void GetUrlUploadInfosRequest::setUploadURLs(const std::string &uploadURLs) {
  uploadURLs_ = uploadURLs;
  setParameter(std::string("UploadURLs"), uploadURLs);
}

