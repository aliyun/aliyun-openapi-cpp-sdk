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

#include <alibabacloud/nas/model/AddClientToBlackListRequest.h>

using AlibabaCloud::NAS::Model::AddClientToBlackListRequest;

AddClientToBlackListRequest::AddClientToBlackListRequest()
    : RpcServiceRequest("nas", "2017-06-26", "AddClientToBlackList") {
  setMethod(HttpRequest::Method::Post);
}

AddClientToBlackListRequest::~AddClientToBlackListRequest() {}

std::string AddClientToBlackListRequest::getClientToken() const {
  return clientToken_;
}

void AddClientToBlackListRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string AddClientToBlackListRequest::getRegionId() const {
  return regionId_;
}

void AddClientToBlackListRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AddClientToBlackListRequest::getClientIP() const {
  return clientIP_;
}

void AddClientToBlackListRequest::setClientIP(const std::string &clientIP) {
  clientIP_ = clientIP;
  setParameter(std::string("ClientIP"), clientIP);
}

std::string AddClientToBlackListRequest::getFileSystemId() const {
  return fileSystemId_;
}

void AddClientToBlackListRequest::setFileSystemId(const std::string &fileSystemId) {
  fileSystemId_ = fileSystemId;
  setParameter(std::string("FileSystemId"), fileSystemId);
}

