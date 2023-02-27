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

#include <alibabacloud/ice/model/DeleteLiveSnapshotFilesRequest.h>

using AlibabaCloud::ICE::Model::DeleteLiveSnapshotFilesRequest;

DeleteLiveSnapshotFilesRequest::DeleteLiveSnapshotFilesRequest()
    : RpcServiceRequest("ice", "2020-11-09", "DeleteLiveSnapshotFiles") {
  setMethod(HttpRequest::Method::Post);
}

DeleteLiveSnapshotFilesRequest::~DeleteLiveSnapshotFilesRequest() {}

std::string DeleteLiveSnapshotFilesRequest::getJobId() const {
  return jobId_;
}

void DeleteLiveSnapshotFilesRequest::setJobId(const std::string &jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), jobId);
}

bool DeleteLiveSnapshotFilesRequest::getDeleteOriginalFile() const {
  return deleteOriginalFile_;
}

void DeleteLiveSnapshotFilesRequest::setDeleteOriginalFile(bool deleteOriginalFile) {
  deleteOriginalFile_ = deleteOriginalFile;
  setParameter(std::string("DeleteOriginalFile"), deleteOriginalFile ? "true" : "false");
}

std::vector<DeleteLiveSnapshotFilesRequest::long> DeleteLiveSnapshotFilesRequest::getCreateTimestampList() const {
  return createTimestampList_;
}

void DeleteLiveSnapshotFilesRequest::setCreateTimestampList(const std::vector<DeleteLiveSnapshotFilesRequest::long> &createTimestampList) {
  createTimestampList_ = createTimestampList;
  for(int dep1 = 0; dep1 != createTimestampList.size(); dep1++) {
    setParameter(std::string("CreateTimestampList") + "." + std::to_string(dep1 + 1), std::to_string(createTimestampList[dep1]));
  }
}

