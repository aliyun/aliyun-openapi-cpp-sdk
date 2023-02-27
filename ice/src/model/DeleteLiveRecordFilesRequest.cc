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

#include <alibabacloud/ice/model/DeleteLiveRecordFilesRequest.h>

using AlibabaCloud::ICE::Model::DeleteLiveRecordFilesRequest;

DeleteLiveRecordFilesRequest::DeleteLiveRecordFilesRequest()
    : RpcServiceRequest("ice", "2020-11-09", "DeleteLiveRecordFiles") {
  setMethod(HttpRequest::Method::Post);
}

DeleteLiveRecordFilesRequest::~DeleteLiveRecordFilesRequest() {}

bool DeleteLiveRecordFilesRequest::getRemoveFile() const {
  return removeFile_;
}

void DeleteLiveRecordFilesRequest::setRemoveFile(bool removeFile) {
  removeFile_ = removeFile;
  setParameter(std::string("RemoveFile"), removeFile ? "true" : "false");
}

std::vector<std::string> DeleteLiveRecordFilesRequest::getRecordIds() const {
  return recordIds_;
}

void DeleteLiveRecordFilesRequest::setRecordIds(const std::vector<std::string> &recordIds) {
  recordIds_ = recordIds;
}

