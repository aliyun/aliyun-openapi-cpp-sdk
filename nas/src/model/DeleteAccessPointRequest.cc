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

#include <alibabacloud/nas/model/DeleteAccessPointRequest.h>

using AlibabaCloud::NAS::Model::DeleteAccessPointRequest;

DeleteAccessPointRequest::DeleteAccessPointRequest()
    : RpcServiceRequest("nas", "2017-06-26", "DeleteAccessPoint") {
  setMethod(HttpRequest::Method::Post);
}

DeleteAccessPointRequest::~DeleteAccessPointRequest() {}

std::string DeleteAccessPointRequest::getAccessPointId() const {
  return accessPointId_;
}

void DeleteAccessPointRequest::setAccessPointId(const std::string &accessPointId) {
  accessPointId_ = accessPointId;
  setParameter(std::string("AccessPointId"), accessPointId);
}

std::string DeleteAccessPointRequest::getFileSystemId() const {
  return fileSystemId_;
}

void DeleteAccessPointRequest::setFileSystemId(const std::string &fileSystemId) {
  fileSystemId_ = fileSystemId;
  setParameter(std::string("FileSystemId"), fileSystemId);
}

