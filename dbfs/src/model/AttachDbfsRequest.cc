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

#include <alibabacloud/dbfs/model/AttachDbfsRequest.h>

using AlibabaCloud::DBFS::Model::AttachDbfsRequest;

AttachDbfsRequest::AttachDbfsRequest()
    : RpcServiceRequest("dbfs", "2020-04-18", "AttachDbfs") {
  setMethod(HttpRequest::Method::Post);
}

AttachDbfsRequest::~AttachDbfsRequest() {}

std::string AttachDbfsRequest::getECSInstanceId() const {
  return eCSInstanceId_;
}

void AttachDbfsRequest::setECSInstanceId(const std::string &eCSInstanceId) {
  eCSInstanceId_ = eCSInstanceId;
  setParameter(std::string("ECSInstanceId"), eCSInstanceId);
}

std::string AttachDbfsRequest::getAttachPoint() const {
  return attachPoint_;
}

void AttachDbfsRequest::setAttachPoint(const std::string &attachPoint) {
  attachPoint_ = attachPoint;
  setParameter(std::string("AttachPoint"), attachPoint);
}

std::string AttachDbfsRequest::getRegionId() const {
  return regionId_;
}

void AttachDbfsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AttachDbfsRequest::getServerUrl() const {
  return serverUrl_;
}

void AttachDbfsRequest::setServerUrl(const std::string &serverUrl) {
  serverUrl_ = serverUrl;
  setParameter(std::string("ServerUrl"), serverUrl);
}

std::string AttachDbfsRequest::getFsId() const {
  return fsId_;
}

void AttachDbfsRequest::setFsId(const std::string &fsId) {
  fsId_ = fsId;
  setParameter(std::string("FsId"), fsId);
}

std::string AttachDbfsRequest::getAttachMode() const {
  return attachMode_;
}

void AttachDbfsRequest::setAttachMode(const std::string &attachMode) {
  attachMode_ = attachMode;
  setParameter(std::string("AttachMode"), attachMode);
}

