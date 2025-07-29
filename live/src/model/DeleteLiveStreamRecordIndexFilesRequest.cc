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

#include <alibabacloud/live/model/DeleteLiveStreamRecordIndexFilesRequest.h>

using AlibabaCloud::Live::Model::DeleteLiveStreamRecordIndexFilesRequest;

DeleteLiveStreamRecordIndexFilesRequest::DeleteLiveStreamRecordIndexFilesRequest()
    : RpcServiceRequest("live", "2016-11-01", "DeleteLiveStreamRecordIndexFiles") {
  setMethod(HttpRequest::Method::Post);
}

DeleteLiveStreamRecordIndexFilesRequest::~DeleteLiveStreamRecordIndexFilesRequest() {}

std::string DeleteLiveStreamRecordIndexFilesRequest::getRemoveFile() const {
  return removeFile_;
}

void DeleteLiveStreamRecordIndexFilesRequest::setRemoveFile(const std::string &removeFile) {
  removeFile_ = removeFile;
  setParameter(std::string("RemoveFile"), removeFile);
}

std::string DeleteLiveStreamRecordIndexFilesRequest::getAppName() const {
  return appName_;
}

void DeleteLiveStreamRecordIndexFilesRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string DeleteLiveStreamRecordIndexFilesRequest::getRegionId() const {
  return regionId_;
}

void DeleteLiveStreamRecordIndexFilesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteLiveStreamRecordIndexFilesRequest::getStreamName() const {
  return streamName_;
}

void DeleteLiveStreamRecordIndexFilesRequest::setStreamName(const std::string &streamName) {
  streamName_ = streamName;
  setParameter(std::string("StreamName"), streamName);
}

std::string DeleteLiveStreamRecordIndexFilesRequest::getDomainName() const {
  return domainName_;
}

void DeleteLiveStreamRecordIndexFilesRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long DeleteLiveStreamRecordIndexFilesRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteLiveStreamRecordIndexFilesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<std::string> DeleteLiveStreamRecordIndexFilesRequest::getRecordId() const {
  return recordId_;
}

void DeleteLiveStreamRecordIndexFilesRequest::setRecordId(const std::vector<std::string> &recordId) {
  recordId_ = recordId;
}

