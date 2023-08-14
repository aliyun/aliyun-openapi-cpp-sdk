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

#include <alibabacloud/ft/model/RpcDataUploadAndDownloadRequest.h>

using AlibabaCloud::Ft::Model::RpcDataUploadAndDownloadRequest;

RpcDataUploadAndDownloadRequest::RpcDataUploadAndDownloadRequest()
    : RpcServiceRequest("ft", "2021-01-01", "RpcDataUploadAndDownload") {
  setMethod(HttpRequest::Method::Post);
}

RpcDataUploadAndDownloadRequest::~RpcDataUploadAndDownloadRequest() {}

std::string RpcDataUploadAndDownloadRequest::getQuery1() const {
  return query1_;
}

void RpcDataUploadAndDownloadRequest::setQuery1(const std::string &query1) {
  query1_ = query1;
  setParameter(std::string("query1"), query1);
}

