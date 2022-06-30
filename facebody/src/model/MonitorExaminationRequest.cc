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

#include <alibabacloud/facebody/model/MonitorExaminationRequest.h>

using AlibabaCloud::Facebody::Model::MonitorExaminationRequest;

MonitorExaminationRequest::MonitorExaminationRequest()
    : RpcServiceRequest("facebody", "2019-12-30", "MonitorExamination") {
  setMethod(HttpRequest::Method::Post);
}

MonitorExaminationRequest::~MonitorExaminationRequest() {}

bool MonitorExaminationRequest::getFormatResultToJson() const {
  return formatResultToJson_;
}

void MonitorExaminationRequest::setFormatResultToJson(bool formatResultToJson) {
  formatResultToJson_ = formatResultToJson;
  setParameter(std::string("FormatResultToJson"), formatResultToJson ? "true" : "false");
}

long MonitorExaminationRequest::getType() const {
  return type_;
}

void MonitorExaminationRequest::setType(long type) {
  type_ = type;
  setBodyParameter(std::string("Type"), std::to_string(type));
}

std::string MonitorExaminationRequest::getOssFile() const {
  return ossFile_;
}

void MonitorExaminationRequest::setOssFile(const std::string &ossFile) {
  ossFile_ = ossFile;
  setParameter(std::string("OssFile"), ossFile);
}

std::string MonitorExaminationRequest::getRequestProxyBy() const {
  return requestProxyBy_;
}

void MonitorExaminationRequest::setRequestProxyBy(const std::string &requestProxyBy) {
  requestProxyBy_ = requestProxyBy;
  setParameter(std::string("RequestProxyBy"), requestProxyBy);
}

std::string MonitorExaminationRequest::getImageURL() const {
  return imageURL_;
}

void MonitorExaminationRequest::setImageURL(const std::string &imageURL) {
  imageURL_ = imageURL;
  setBodyParameter(std::string("ImageURL"), imageURL);
}

