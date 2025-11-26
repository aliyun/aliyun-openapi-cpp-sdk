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

#include <alibabacloud/outboundbot/model/GetJobDataUploadParamsRequest.h>

using AlibabaCloud::OutboundBot::Model::GetJobDataUploadParamsRequest;

GetJobDataUploadParamsRequest::GetJobDataUploadParamsRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "GetJobDataUploadParams") {
  setMethod(HttpRequest::Method::Post);
}

GetJobDataUploadParamsRequest::~GetJobDataUploadParamsRequest() {}

std::string GetJobDataUploadParamsRequest::getBusiType() const {
  return busiType_;
}

void GetJobDataUploadParamsRequest::setBusiType(const std::string &busiType) {
  busiType_ = busiType;
  setParameter(std::string("BusiType"), busiType);
}

std::string GetJobDataUploadParamsRequest::getPath() const {
  return path_;
}

void GetJobDataUploadParamsRequest::setPath(const std::string &path) {
  path_ = path;
  setParameter(std::string("Path"), path);
}

std::string GetJobDataUploadParamsRequest::getInstanceId() const {
  return instanceId_;
}

void GetJobDataUploadParamsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string GetJobDataUploadParamsRequest::getFileName() const {
  return fileName_;
}

void GetJobDataUploadParamsRequest::setFileName(const std::string &fileName) {
  fileName_ = fileName;
  setParameter(std::string("FileName"), fileName);
}

std::string GetJobDataUploadParamsRequest::getUniqueId() const {
  return uniqueId_;
}

void GetJobDataUploadParamsRequest::setUniqueId(const std::string &uniqueId) {
  uniqueId_ = uniqueId;
  setParameter(std::string("UniqueId"), uniqueId);
}

