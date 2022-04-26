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

#include <alibabacloud/ccc/model/ImportDoNotCallNumbersRequest.h>

using AlibabaCloud::CCC::Model::ImportDoNotCallNumbersRequest;

ImportDoNotCallNumbersRequest::ImportDoNotCallNumbersRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "ImportDoNotCallNumbers") {
  setMethod(HttpRequest::Method::Post);
}

ImportDoNotCallNumbersRequest::~ImportDoNotCallNumbersRequest() {}

std::string ImportDoNotCallNumbersRequest::getRemark() const {
  return remark_;
}

void ImportDoNotCallNumbersRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setParameter(std::string("Remark"), remark);
}

std::string ImportDoNotCallNumbersRequest::getNumberList() const {
  return numberList_;
}

void ImportDoNotCallNumbersRequest::setNumberList(const std::string &numberList) {
  numberList_ = numberList;
  setParameter(std::string("NumberList"), numberList);
}

std::string ImportDoNotCallNumbersRequest::getInstanceId() const {
  return instanceId_;
}

void ImportDoNotCallNumbersRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ImportDoNotCallNumbersRequest::getFilePath() const {
  return filePath_;
}

void ImportDoNotCallNumbersRequest::setFilePath(const std::string &filePath) {
  filePath_ = filePath;
  setParameter(std::string("FilePath"), filePath);
}

