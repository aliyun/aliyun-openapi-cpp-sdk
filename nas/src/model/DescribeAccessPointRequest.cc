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

#include <alibabacloud/nas/model/DescribeAccessPointRequest.h>

using AlibabaCloud::NAS::Model::DescribeAccessPointRequest;

DescribeAccessPointRequest::DescribeAccessPointRequest()
    : RpcServiceRequest("nas", "2017-06-26", "DescribeAccessPoint") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAccessPointRequest::~DescribeAccessPointRequest() {}

std::string DescribeAccessPointRequest::getAccessPointId() const {
  return accessPointId_;
}

void DescribeAccessPointRequest::setAccessPointId(const std::string &accessPointId) {
  accessPointId_ = accessPointId;
  setParameter(std::string("AccessPointId"), accessPointId);
}

std::string DescribeAccessPointRequest::getFileSystemId() const {
  return fileSystemId_;
}

void DescribeAccessPointRequest::setFileSystemId(const std::string &fileSystemId) {
  fileSystemId_ = fileSystemId;
  setParameter(std::string("FileSystemId"), fileSystemId);
}

