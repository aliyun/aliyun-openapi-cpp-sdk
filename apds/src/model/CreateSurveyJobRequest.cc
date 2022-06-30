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

#include <alibabacloud/apds/model/CreateSurveyJobRequest.h>

using AlibabaCloud::Apds::Model::CreateSurveyJobRequest;

CreateSurveyJobRequest::CreateSurveyJobRequest()
    : RoaServiceRequest("apds", "2022-03-31") {
  setResourcePath("/okss-services/winback/add-survey-job"};
  setMethod(HttpRequest::Method::Post);
}

CreateSurveyJobRequest::~CreateSurveyJobRequest() {}

std::string CreateSurveyJobRequest::getBody() const {
  return body_;
}

void CreateSurveyJobRequest::setBody(const std::string &body) {
  body_ = body;
  setBodyParameter(std::string("body"), body);
}

string CreateSurveyJobRequest::getRegionId() const {
  return regionId_;
}

void CreateSurveyJobRequest::setRegionId(string regionId) {
  regionId_ = regionId;
  setParameter(std::string("regionId"), std::to_string(regionId));
}

