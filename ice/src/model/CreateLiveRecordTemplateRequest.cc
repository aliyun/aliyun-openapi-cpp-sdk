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

#include <alibabacloud/ice/model/CreateLiveRecordTemplateRequest.h>

using AlibabaCloud::ICE::Model::CreateLiveRecordTemplateRequest;

CreateLiveRecordTemplateRequest::CreateLiveRecordTemplateRequest()
    : RpcServiceRequest("ice", "2020-11-09", "CreateLiveRecordTemplate") {
  setMethod(HttpRequest::Method::Post);
}

CreateLiveRecordTemplateRequest::~CreateLiveRecordTemplateRequest() {}

std::vector<CreateLiveRecordTemplateRequest::RecordFormat> CreateLiveRecordTemplateRequest::getRecordFormat() const {
  return recordFormat_;
}

void CreateLiveRecordTemplateRequest::setRecordFormat(const std::vector<CreateLiveRecordTemplateRequest::RecordFormat> &recordFormat) {
  recordFormat_ = recordFormat;
  for(int dep1 = 0; dep1 != recordFormat.size(); dep1++) {
    setBodyParameter(std::string("RecordFormat") + "." + std::to_string(dep1 + 1) + ".SliceOssObjectPrefix", recordFormat[dep1].sliceOssObjectPrefix);
    setBodyParameter(std::string("RecordFormat") + "." + std::to_string(dep1 + 1) + ".SliceDuration", std::to_string(recordFormat[dep1].sliceDuration));
    setBodyParameter(std::string("RecordFormat") + "." + std::to_string(dep1 + 1) + ".Format", recordFormat[dep1].format);
    setBodyParameter(std::string("RecordFormat") + "." + std::to_string(dep1 + 1) + ".OssObjectPrefix", recordFormat[dep1].ossObjectPrefix);
    setBodyParameter(std::string("RecordFormat") + "." + std::to_string(dep1 + 1) + ".CycleDuration", std::to_string(recordFormat[dep1].cycleDuration));
  }
}

std::string CreateLiveRecordTemplateRequest::getName() const {
  return name_;
}

void CreateLiveRecordTemplateRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("Name"), name);
}

