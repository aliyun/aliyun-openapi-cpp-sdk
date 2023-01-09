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

#include <alibabacloud/pts/model/SaveEnvRequest.h>

using AlibabaCloud::PTS::Model::SaveEnvRequest;

SaveEnvRequest::SaveEnvRequest()
    : RpcServiceRequest("pts", "2020-10-20", "SaveEnv") {
  setMethod(HttpRequest::Method::Post);
}

SaveEnvRequest::~SaveEnvRequest() {}

SaveEnvRequest::Env SaveEnvRequest::getEnv() const {
  return env_;
}

void SaveEnvRequest::setEnv(const SaveEnvRequest::Env &env) {
  env_ = env;
  setParameter(std::string("Env") + ".EnvName", env.envName);
  for(int dep1 = 0; dep1 != env.files.size(); dep1++) {
    setParameter(std::string("Env") + ".Files." + std::to_string(dep1 + 1) + ".FileName", env.files[dep1].fileName);
    setParameter(std::string("Env") + ".Files." + std::to_string(dep1 + 1) + ".FileOssAddress", env.files[dep1].fileOssAddress);
  }
  setParameter(std::string("Env") + ".JmeterPluginLabel", env.jmeterPluginLabel);
  setParameter(std::string("Env") + ".EnvId", env.envId);
  for(int dep1 = 0; dep1 != env.properties.size(); dep1++) {
    setParameter(std::string("Env") + ".Properties." + std::to_string(dep1 + 1) + ".Name", env.properties[dep1].name);
    setParameter(std::string("Env") + ".Properties." + std::to_string(dep1 + 1) + ".Description", env.properties[dep1].description);
    setParameter(std::string("Env") + ".Properties." + std::to_string(dep1 + 1) + ".Value", env.properties[dep1].value);
  }
}

