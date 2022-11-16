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

#include <alibabacloud/dataworks-public/model/TestDataServiceApiRequest.h>

using AlibabaCloud::Dataworks_public::Model::TestDataServiceApiRequest;

TestDataServiceApiRequest::TestDataServiceApiRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "TestDataServiceApi") {
  setMethod(HttpRequest::Method::Post);
}

TestDataServiceApiRequest::~TestDataServiceApiRequest() {}

std::vector<TestDataServiceApiRequest::PathParams> TestDataServiceApiRequest::getPathParams() const {
  return pathParams_;
}

void TestDataServiceApiRequest::setPathParams(const std::vector<TestDataServiceApiRequest::PathParams> &pathParams) {
  pathParams_ = pathParams;
  for(int dep1 = 0; dep1 != pathParams.size(); dep1++) {
  auto pathParamsObj = pathParams.at(dep1);
  std::string pathParamsObjStr = std::string("PathParams") + "." + std::to_string(dep1 + 1);
    setBodyParameter(pathParamsObjStr + ".ParamKey", pathParamsObj.paramKey);
    setBodyParameter(pathParamsObjStr + ".ParamValue", pathParamsObj.paramValue);
  }
}

std::vector<TestDataServiceApiRequest::QueryParam> TestDataServiceApiRequest::getQueryParam() const {
  return queryParam_;
}

void TestDataServiceApiRequest::setQueryParam(const std::vector<TestDataServiceApiRequest::QueryParam> &queryParam) {
  queryParam_ = queryParam;
  for(int dep1 = 0; dep1 != queryParam.size(); dep1++) {
  auto queryParamObj = queryParam.at(dep1);
  std::string queryParamObjStr = std::string("QueryParam") + "." + std::to_string(dep1 + 1);
    setBodyParameter(queryParamObjStr + ".ParamKey", queryParamObj.paramKey);
    setBodyParameter(queryParamObjStr + ".ParamValue", queryParamObj.paramValue);
  }
}

std::vector<TestDataServiceApiRequest::HeadParams> TestDataServiceApiRequest::getHeadParams() const {
  return headParams_;
}

void TestDataServiceApiRequest::setHeadParams(const std::vector<TestDataServiceApiRequest::HeadParams> &headParams) {
  headParams_ = headParams;
  for(int dep1 = 0; dep1 != headParams.size(); dep1++) {
  auto headParamsObj = headParams.at(dep1);
  std::string headParamsObjStr = std::string("HeadParams") + "." + std::to_string(dep1 + 1);
    setBodyParameter(headParamsObjStr + ".ParamKey", headParamsObj.paramKey);
    setBodyParameter(headParamsObjStr + ".ParamValue", headParamsObj.paramValue);
  }
}

std::string TestDataServiceApiRequest::getBodyContent() const {
  return bodyContent_;
}

void TestDataServiceApiRequest::setBodyContent(const std::string &bodyContent) {
  bodyContent_ = bodyContent;
  setBodyParameter(std::string("BodyContent"), bodyContent);
}

std::vector<TestDataServiceApiRequest::BodyParams> TestDataServiceApiRequest::getBodyParams() const {
  return bodyParams_;
}

void TestDataServiceApiRequest::setBodyParams(const std::vector<TestDataServiceApiRequest::BodyParams> &bodyParams) {
  bodyParams_ = bodyParams;
  for(int dep1 = 0; dep1 != bodyParams.size(); dep1++) {
  auto bodyParamsObj = bodyParams.at(dep1);
  std::string bodyParamsObjStr = std::string("BodyParams") + "." + std::to_string(dep1 + 1);
    setBodyParameter(bodyParamsObjStr + ".ParamKey", bodyParamsObj.paramKey);
    setBodyParameter(bodyParamsObjStr + ".ParamValue", bodyParamsObj.paramValue);
  }
}

long TestDataServiceApiRequest::getApiId() const {
  return apiId_;
}

void TestDataServiceApiRequest::setApiId(long apiId) {
  apiId_ = apiId;
  setParameter(std::string("ApiId"), std::to_string(apiId));
}

