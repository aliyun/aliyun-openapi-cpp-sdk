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

#include <alibabacloud/ens/model/DeleteDiskRequest.h>

using AlibabaCloud::Ens::Model::DeleteDiskRequest;

DeleteDiskRequest::DeleteDiskRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DeleteDisk") {
  setMethod(HttpRequest::Method::Post);
}

DeleteDiskRequest::~DeleteDiskRequest() {}

std::string DeleteDiskRequest::getDiskId() const {
  return diskId_;
}

void DeleteDiskRequest::setDiskId(const std::string &diskId) {
  diskId_ = diskId;
  setParameter(std::string("DiskId"), diskId);
}

