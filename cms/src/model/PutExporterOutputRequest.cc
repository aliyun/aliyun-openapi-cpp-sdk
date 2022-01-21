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

#include <alibabacloud/cms/model/PutExporterOutputRequest.h>

using AlibabaCloud::Cms::Model::PutExporterOutputRequest;

PutExporterOutputRequest::PutExporterOutputRequest()
    : RpcServiceRequest("cms", "2019-01-01", "PutExporterOutput") {
  setMethod(HttpRequest::Method::Post);
}

PutExporterOutputRequest::~PutExporterOutputRequest() {}

std::string PutExporterOutputRequest::getDestName() const {
  return destName_;
}

void PutExporterOutputRequest::setDestName(const std::string &destName) {
  destName_ = destName;
  setParameter(std::string("DestName"), destName);
}

std::string PutExporterOutputRequest::getConfigJson() const {
  return configJson_;
}

void PutExporterOutputRequest::setConfigJson(const std::string &configJson) {
  configJson_ = configJson;
  setParameter(std::string("ConfigJson"), configJson);
}

std::string PutExporterOutputRequest::getDestType() const {
  return destType_;
}

void PutExporterOutputRequest::setDestType(const std::string &destType) {
  destType_ = destType;
  setParameter(std::string("DestType"), destType);
}

std::string PutExporterOutputRequest::getDesc() const {
  return desc_;
}

void PutExporterOutputRequest::setDesc(const std::string &desc) {
  desc_ = desc;
  setParameter(std::string("Desc"), desc);
}

