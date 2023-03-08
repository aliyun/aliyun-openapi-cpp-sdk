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

#include <alibabacloud/adb/model/SetSparkAppLogRootPathRequest.h>

using AlibabaCloud::Adb::Model::SetSparkAppLogRootPathRequest;

SetSparkAppLogRootPathRequest::SetSparkAppLogRootPathRequest()
    : RpcServiceRequest("adb", "2021-12-01", "SetSparkAppLogRootPath") {
  setMethod(HttpRequest::Method::Post);
}

SetSparkAppLogRootPathRequest::~SetSparkAppLogRootPathRequest() {}

std::string SetSparkAppLogRootPathRequest::getDBClusterId() const {
  return dBClusterId_;
}

void SetSparkAppLogRootPathRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setBodyParameter(std::string("DBClusterId"), dBClusterId);
}

bool SetSparkAppLogRootPathRequest::getUseDefaultOss() const {
  return useDefaultOss_;
}

void SetSparkAppLogRootPathRequest::setUseDefaultOss(bool useDefaultOss) {
  useDefaultOss_ = useDefaultOss;
  setBodyParameter(std::string("UseDefaultOss"), useDefaultOss ? "true" : "false");
}

std::string SetSparkAppLogRootPathRequest::getOssLogPath() const {
  return ossLogPath_;
}

void SetSparkAppLogRootPathRequest::setOssLogPath(const std::string &ossLogPath) {
  ossLogPath_ = ossLogPath;
  setBodyParameter(std::string("OssLogPath"), ossLogPath);
}

