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

#include <alibabacloud/ice/model/CreateLiveSnapshotTemplateRequest.h>

using AlibabaCloud::ICE::Model::CreateLiveSnapshotTemplateRequest;

CreateLiveSnapshotTemplateRequest::CreateLiveSnapshotTemplateRequest()
    : RpcServiceRequest("ice", "2020-11-09", "CreateLiveSnapshotTemplate") {
  setMethod(HttpRequest::Method::Post);
}

CreateLiveSnapshotTemplateRequest::~CreateLiveSnapshotTemplateRequest() {}

int CreateLiveSnapshotTemplateRequest::getTimeInterval() const {
  return timeInterval_;
}

void CreateLiveSnapshotTemplateRequest::setTimeInterval(int timeInterval) {
  timeInterval_ = timeInterval;
  setBodyParameter(std::string("TimeInterval"), std::to_string(timeInterval));
}

std::string CreateLiveSnapshotTemplateRequest::getSequenceFormat() const {
  return sequenceFormat_;
}

void CreateLiveSnapshotTemplateRequest::setSequenceFormat(const std::string &sequenceFormat) {
  sequenceFormat_ = sequenceFormat;
  setBodyParameter(std::string("SequenceFormat"), sequenceFormat);
}

std::string CreateLiveSnapshotTemplateRequest::getTemplateName() const {
  return templateName_;
}

void CreateLiveSnapshotTemplateRequest::setTemplateName(const std::string &templateName) {
  templateName_ = templateName;
  setBodyParameter(std::string("TemplateName"), templateName);
}

std::string CreateLiveSnapshotTemplateRequest::getOverwriteFormat() const {
  return overwriteFormat_;
}

void CreateLiveSnapshotTemplateRequest::setOverwriteFormat(const std::string &overwriteFormat) {
  overwriteFormat_ = overwriteFormat;
  setBodyParameter(std::string("OverwriteFormat"), overwriteFormat);
}

