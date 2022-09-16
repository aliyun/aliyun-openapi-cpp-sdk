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

#include <alibabacloud/ecd/model/RunCommandRequest.h>

using AlibabaCloud::Ecd::Model::RunCommandRequest;

RunCommandRequest::RunCommandRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "RunCommand") {
  setMethod(HttpRequest::Method::Post);
}

RunCommandRequest::~RunCommandRequest() {}

std::string RunCommandRequest::getType() const {
  return type_;
}

void RunCommandRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string RunCommandRequest::getCommandContent() const {
  return commandContent_;
}

void RunCommandRequest::setCommandContent(const std::string &commandContent) {
  commandContent_ = commandContent;
  setParameter(std::string("CommandContent"), commandContent);
}

long RunCommandRequest::getTimeout() const {
  return timeout_;
}

void RunCommandRequest::setTimeout(long timeout) {
  timeout_ = timeout;
  setParameter(std::string("Timeout"), std::to_string(timeout));
}

std::string RunCommandRequest::getRegionId() const {
  return regionId_;
}

void RunCommandRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string RunCommandRequest::getContentEncoding() const {
  return contentEncoding_;
}

void RunCommandRequest::setContentEncoding(const std::string &contentEncoding) {
  contentEncoding_ = contentEncoding;
  setParameter(std::string("ContentEncoding"), contentEncoding);
}

std::string RunCommandRequest::getEndUserId() const {
  return endUserId_;
}

void RunCommandRequest::setEndUserId(const std::string &endUserId) {
  endUserId_ = endUserId;
  setParameter(std::string("EndUserId"), endUserId);
}

std::vector<std::string> RunCommandRequest::getDesktopId() const {
  return desktopId_;
}

void RunCommandRequest::setDesktopId(const std::vector<std::string> &desktopId) {
  desktopId_ = desktopId;
}

