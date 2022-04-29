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

#include <alibabacloud/nas/model/UpdateRecycleBinAttributeRequest.h>

using AlibabaCloud::NAS::Model::UpdateRecycleBinAttributeRequest;

UpdateRecycleBinAttributeRequest::UpdateRecycleBinAttributeRequest()
    : RpcServiceRequest("nas", "2017-06-26", "UpdateRecycleBinAttribute") {
  setMethod(HttpRequest::Method::Get);
}

UpdateRecycleBinAttributeRequest::~UpdateRecycleBinAttributeRequest() {}

std::string UpdateRecycleBinAttributeRequest::getFileSystemId() const {
  return fileSystemId_;
}

void UpdateRecycleBinAttributeRequest::setFileSystemId(const std::string &fileSystemId) {
  fileSystemId_ = fileSystemId;
  setParameter(std::string("FileSystemId"), fileSystemId);
}

long UpdateRecycleBinAttributeRequest::getReservedDays() const {
  return reservedDays_;
}

void UpdateRecycleBinAttributeRequest::setReservedDays(long reservedDays) {
  reservedDays_ = reservedDays;
  setParameter(std::string("ReservedDays"), std::to_string(reservedDays));
}

