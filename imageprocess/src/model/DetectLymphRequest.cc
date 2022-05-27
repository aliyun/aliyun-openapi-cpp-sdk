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

#include <alibabacloud/imageprocess/model/DetectLymphRequest.h>

using AlibabaCloud::Imageprocess::Model::DetectLymphRequest;

DetectLymphRequest::DetectLymphRequest()
    : RpcServiceRequest("imageprocess", "2020-03-20", "DetectLymph") {
  setMethod(HttpRequest::Method::Post);
}

DetectLymphRequest::~DetectLymphRequest() {}

std::string DetectLymphRequest::getDataSourceType() const {
  return dataSourceType_;
}

void DetectLymphRequest::setDataSourceType(const std::string &dataSourceType) {
  dataSourceType_ = dataSourceType;
  setBodyParameter(std::string("DataSourceType"), dataSourceType);
}

std::vector<DetectLymphRequest::URLList> DetectLymphRequest::getURLList() const {
  return uRLList_;
}

void DetectLymphRequest::setURLList(const std::vector<DetectLymphRequest::URLList> &uRLList) {
  uRLList_ = uRLList;
  for(int dep1 = 0; dep1 != uRLList.size(); dep1++) {
  auto uRLListObj = uRLList.at(dep1);
  std::string uRLListObjStr = std::string("URLList") + "." + std::to_string(dep1 + 1);
    setBodyParameter(uRLListObjStr + ".URL", uRLListObj.uRL);
  }
}

bool DetectLymphRequest::getAsync() const {
  return async_;
}

void DetectLymphRequest::setAsync(bool async) {
  async_ = async;
  setBodyParameter(std::string("Async"), async ? "true" : "false");
}

