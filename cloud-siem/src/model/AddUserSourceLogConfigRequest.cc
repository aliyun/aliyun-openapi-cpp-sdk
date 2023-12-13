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

#include <alibabacloud/cloud-siem/model/AddUserSourceLogConfigRequest.h>

using AlibabaCloud::Cloud_siem::Model::AddUserSourceLogConfigRequest;

AddUserSourceLogConfigRequest::AddUserSourceLogConfigRequest()
    : RpcServiceRequest("cloud-siem", "2022-06-16", "AddUserSourceLogConfig") {
  setMethod(HttpRequest::Method::Post);
}

AddUserSourceLogConfigRequest::~AddUserSourceLogConfigRequest() {}

std::string AddUserSourceLogConfigRequest::getDisPlayLine() const {
  return disPlayLine_;
}

void AddUserSourceLogConfigRequest::setDisPlayLine(const std::string &disPlayLine) {
  disPlayLine_ = disPlayLine;
  setBodyParameter(std::string("DisPlayLine"), disPlayLine);
}

long AddUserSourceLogConfigRequest::getSubUserId() const {
  return subUserId_;
}

void AddUserSourceLogConfigRequest::setSubUserId(long subUserId) {
  subUserId_ = subUserId;
  setBodyParameter(std::string("SubUserId"), std::to_string(subUserId));
}

std::string AddUserSourceLogConfigRequest::getRegionId() const {
  return regionId_;
}

void AddUserSourceLogConfigRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::string AddUserSourceLogConfigRequest::getSourceProdCode() const {
  return sourceProdCode_;
}

void AddUserSourceLogConfigRequest::setSourceProdCode(const std::string &sourceProdCode) {
  sourceProdCode_ = sourceProdCode;
  setBodyParameter(std::string("SourceProdCode"), sourceProdCode);
}

std::string AddUserSourceLogConfigRequest::getSourceLogInfo() const {
  return sourceLogInfo_;
}

void AddUserSourceLogConfigRequest::setSourceLogInfo(const std::string &sourceLogInfo) {
  sourceLogInfo_ = sourceLogInfo;
  setBodyParameter(std::string("SourceLogInfo"), sourceLogInfo);
}

int AddUserSourceLogConfigRequest::getDeleted() const {
  return deleted_;
}

void AddUserSourceLogConfigRequest::setDeleted(int deleted) {
  deleted_ = deleted;
  setBodyParameter(std::string("Deleted"), std::to_string(deleted));
}

std::string AddUserSourceLogConfigRequest::getSourceLogCode() const {
  return sourceLogCode_;
}

void AddUserSourceLogConfigRequest::setSourceLogCode(const std::string &sourceLogCode) {
  sourceLogCode_ = sourceLogCode;
  setBodyParameter(std::string("SourceLogCode"), sourceLogCode);
}

