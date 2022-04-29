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

#include <alibabacloud/nas/model/RemoveClientFromBlackListRequest.h>

using AlibabaCloud::NAS::Model::RemoveClientFromBlackListRequest;

RemoveClientFromBlackListRequest::RemoveClientFromBlackListRequest()
    : RpcServiceRequest("nas", "2017-06-26", "RemoveClientFromBlackList") {
  setMethod(HttpRequest::Method::Post);
}

RemoveClientFromBlackListRequest::~RemoveClientFromBlackListRequest() {}

std::string RemoveClientFromBlackListRequest::getClientToken() const {
  return clientToken_;
}

void RemoveClientFromBlackListRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string RemoveClientFromBlackListRequest::getRegionId() const {
  return regionId_;
}

void RemoveClientFromBlackListRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string RemoveClientFromBlackListRequest::getClientIP() const {
  return clientIP_;
}

void RemoveClientFromBlackListRequest::setClientIP(const std::string &clientIP) {
  clientIP_ = clientIP;
  setParameter(std::string("ClientIP"), clientIP);
}

std::string RemoveClientFromBlackListRequest::getFileSystemId() const {
  return fileSystemId_;
}

void RemoveClientFromBlackListRequest::setFileSystemId(const std::string &fileSystemId) {
  fileSystemId_ = fileSystemId;
  setParameter(std::string("FileSystemId"), fileSystemId);
}

