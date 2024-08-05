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

#include <alibabacloud/arms/model/GetRumExceptionStackRequest.h>

using AlibabaCloud::ARMS::Model::GetRumExceptionStackRequest;

GetRumExceptionStackRequest::GetRumExceptionStackRequest()
    : RpcServiceRequest("arms", "2019-08-08", "GetRumExceptionStack") {
  setMethod(HttpRequest::Method::Post);
}

GetRumExceptionStackRequest::~GetRumExceptionStackRequest() {}

std::string GetRumExceptionStackRequest::getSourcemapType() const {
  return sourcemapType_;
}

void GetRumExceptionStackRequest::setSourcemapType(const std::string &sourcemapType) {
  sourcemapType_ = sourcemapType;
  setParameter(std::string("SourcemapType"), sourcemapType);
}

std::string GetRumExceptionStackRequest::getExceptionThreadId() const {
  return exceptionThreadId_;
}

void GetRumExceptionStackRequest::setExceptionThreadId(const std::string &exceptionThreadId) {
  exceptionThreadId_ = exceptionThreadId;
  setParameter(std::string("ExceptionThreadId"), exceptionThreadId);
}

std::string GetRumExceptionStackRequest::getPid() const {
  return pid_;
}

void GetRumExceptionStackRequest::setPid(const std::string &pid) {
  pid_ = pid;
  setParameter(std::string("Pid"), pid);
}

std::string GetRumExceptionStackRequest::getExceptionBinaryImages() const {
  return exceptionBinaryImages_;
}

void GetRumExceptionStackRequest::setExceptionBinaryImages(const std::string &exceptionBinaryImages) {
  exceptionBinaryImages_ = exceptionBinaryImages;
  setParameter(std::string("ExceptionBinaryImages"), exceptionBinaryImages);
}

std::string GetRumExceptionStackRequest::getExceptionStack() const {
  return exceptionStack_;
}

void GetRumExceptionStackRequest::setExceptionStack(const std::string &exceptionStack) {
  exceptionStack_ = exceptionStack;
  setParameter(std::string("ExceptionStack"), exceptionStack);
}

std::string GetRumExceptionStackRequest::getRegionId() const {
  return regionId_;
}

void GetRumExceptionStackRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

