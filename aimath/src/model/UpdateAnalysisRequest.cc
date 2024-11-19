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

#include <alibabacloud/aimath/model/UpdateAnalysisRequest.h>

using AlibabaCloud::AIMath::Model::UpdateAnalysisRequest;

UpdateAnalysisRequest::UpdateAnalysisRequest()
    : RpcServiceRequest("aimath", "2024-11-14", "UpdateAnalysis") {
  setMethod(HttpRequest::Method::Post);
}

UpdateAnalysisRequest::~UpdateAnalysisRequest() {}

std::string UpdateAnalysisRequest::getContent() const {
  return content_;
}

void UpdateAnalysisRequest::setContent(const std::string &content) {
  content_ = content;
  setBodyParameter(std::string("Content"), content);
}

std::string UpdateAnalysisRequest::getContentCode() const {
  return contentCode_;
}

void UpdateAnalysisRequest::setContentCode(const std::string &contentCode) {
  contentCode_ = contentCode;
  setBodyParameter(std::string("ContentCode"), contentCode);
}

std::string UpdateAnalysisRequest::getExerciseCode() const {
  return exerciseCode_;
}

void UpdateAnalysisRequest::setExerciseCode(const std::string &exerciseCode) {
  exerciseCode_ = exerciseCode;
  setBodyParameter(std::string("ExerciseCode"), exerciseCode);
}

