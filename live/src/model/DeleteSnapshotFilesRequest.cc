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

#include <alibabacloud/live/model/DeleteSnapshotFilesRequest.h>

using AlibabaCloud::Live::Model::DeleteSnapshotFilesRequest;

DeleteSnapshotFilesRequest::DeleteSnapshotFilesRequest()
    : RpcServiceRequest("live", "2016-11-01", "DeleteSnapshotFiles") {
  setMethod(HttpRequest::Method::Post);
}

DeleteSnapshotFilesRequest::~DeleteSnapshotFilesRequest() {}

bool DeleteSnapshotFilesRequest::getRemoveFile() const {
  return removeFile_;
}

void DeleteSnapshotFilesRequest::setRemoveFile(bool removeFile) {
  removeFile_ = removeFile;
  setParameter(std::string("RemoveFile"), removeFile ? "true" : "false");
}

std::string DeleteSnapshotFilesRequest::getAppName() const {
  return appName_;
}

void DeleteSnapshotFilesRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string DeleteSnapshotFilesRequest::getRegionId() const {
  return regionId_;
}

void DeleteSnapshotFilesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteSnapshotFilesRequest::getStreamName() const {
  return streamName_;
}

void DeleteSnapshotFilesRequest::setStreamName(const std::string &streamName) {
  streamName_ = streamName;
  setParameter(std::string("StreamName"), streamName);
}

std::string DeleteSnapshotFilesRequest::getDomainName() const {
  return domainName_;
}

void DeleteSnapshotFilesRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long DeleteSnapshotFilesRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteSnapshotFilesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<long> DeleteSnapshotFilesRequest::getCreateTimestampList() const {
  return createTimestampList_;
}

void DeleteSnapshotFilesRequest::setCreateTimestampList(const std::vector<long> &createTimestampList) {
  createTimestampList_ = createTimestampList;
}

