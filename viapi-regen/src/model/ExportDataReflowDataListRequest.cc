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

#include <alibabacloud/viapi-regen/model/ExportDataReflowDataListRequest.h>

using AlibabaCloud::Viapi_regen::Model::ExportDataReflowDataListRequest;

ExportDataReflowDataListRequest::ExportDataReflowDataListRequest()
    : RpcServiceRequest("viapi-regen", "2021-11-19", "ExportDataReflowDataList") {
  setMethod(HttpRequest::Method::Post);
}

ExportDataReflowDataListRequest::~ExportDataReflowDataListRequest() {}

std::string ExportDataReflowDataListRequest::getFileType() const {
  return fileType_;
}

void ExportDataReflowDataListRequest::setFileType(const std::string &fileType) {
  fileType_ = fileType;
  setBodyParameter(std::string("FileType"), fileType);
}

long ExportDataReflowDataListRequest::getStartTime() const {
  return startTime_;
}

void ExportDataReflowDataListRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setBodyParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string ExportDataReflowDataListRequest::getImageName() const {
  return imageName_;
}

void ExportDataReflowDataListRequest::setImageName(const std::string &imageName) {
  imageName_ = imageName;
  setBodyParameter(std::string("ImageName"), imageName);
}

long ExportDataReflowDataListRequest::getEndTime() const {
  return endTime_;
}

void ExportDataReflowDataListRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setBodyParameter(std::string("EndTime"), std::to_string(endTime));
}

long ExportDataReflowDataListRequest::getServiceId() const {
  return serviceId_;
}

void ExportDataReflowDataListRequest::setServiceId(long serviceId) {
  serviceId_ = serviceId;
  setBodyParameter(std::string("ServiceId"), std::to_string(serviceId));
}

std::string ExportDataReflowDataListRequest::getCategory() const {
  return category_;
}

void ExportDataReflowDataListRequest::setCategory(const std::string &category) {
  category_ = category;
  setBodyParameter(std::string("Category"), category);
}

