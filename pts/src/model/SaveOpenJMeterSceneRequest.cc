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

#include <alibabacloud/pts/model/SaveOpenJMeterSceneRequest.h>

using AlibabaCloud::PTS::Model::SaveOpenJMeterSceneRequest;

SaveOpenJMeterSceneRequest::SaveOpenJMeterSceneRequest()
    : RpcServiceRequest("pts", "2020-10-20", "SaveOpenJMeterScene") {
  setMethod(HttpRequest::Method::Post);
}

SaveOpenJMeterSceneRequest::~SaveOpenJMeterSceneRequest() {}

SaveOpenJMeterSceneRequest::OpenJMeterScene SaveOpenJMeterSceneRequest::getOpenJMeterScene() const {
  return openJMeterScene_;
}

void SaveOpenJMeterSceneRequest::setOpenJMeterScene(const SaveOpenJMeterSceneRequest::OpenJMeterScene &openJMeterScene) {
  openJMeterScene_ = openJMeterScene;
  setParameter(std::string("OpenJMeterScene") + ".StartConcurrency", std::to_string(openJMeterScene.startConcurrency));
  setParameter(std::string("OpenJMeterScene") + ".TestFile", openJMeterScene.testFile);
  setParameter(std::string("OpenJMeterScene") + ".ConstantThroughputTimerType", openJMeterScene.constantThroughputTimerType);
  setParameter(std::string("OpenJMeterScene") + ".SceneName", openJMeterScene.sceneName);
  setParameter(std::string("OpenJMeterScene") + ".SecurityGroupId", openJMeterScene.securityGroupId);
  for(int dep1 = 0; dep1 != openJMeterScene.fileList.size(); dep1++) {
    setParameter(std::string("OpenJMeterScene") + ".FileList." + std::to_string(dep1 + 1) + ".FileName", openJMeterScene.fileList[dep1].fileName);
    setParameter(std::string("OpenJMeterScene") + ".FileList." + std::to_string(dep1 + 1) + ".SplitCsv", openJMeterScene.fileList[dep1].splitCsv ? "true" : "false");
    setParameter(std::string("OpenJMeterScene") + ".FileList." + std::to_string(dep1 + 1) + ".FileSize", std::to_string(openJMeterScene.fileList[dep1].fileSize));
    setParameter(std::string("OpenJMeterScene") + ".FileList." + std::to_string(dep1 + 1) + ".FileOssAddress", openJMeterScene.fileList[dep1].fileOssAddress);
    setParameter(std::string("OpenJMeterScene") + ".FileList." + std::to_string(dep1 + 1) + ".Md5", openJMeterScene.fileList[dep1].md5);
    setParameter(std::string("OpenJMeterScene") + ".FileList." + std::to_string(dep1 + 1) + ".FileId", std::to_string(openJMeterScene.fileList[dep1].fileId));
    setParameter(std::string("OpenJMeterScene") + ".FileList." + std::to_string(dep1 + 1) + ".Tags", openJMeterScene.fileList[dep1].tags);
  }
  setParameter(std::string("OpenJMeterScene") + ".Steps", std::to_string(openJMeterScene.steps));
  setParameter(std::string("OpenJMeterScene") + ".StartRps", std::to_string(openJMeterScene.startRps));
  setParameter(std::string("OpenJMeterScene") + ".Concurrency", std::to_string(openJMeterScene.concurrency));
  setParameter(std::string("OpenJMeterScene") + ".Duration", std::to_string(openJMeterScene.duration));
  setParameter(std::string("OpenJMeterScene") + ".AgentCount", std::to_string(openJMeterScene.agentCount));
  setParameter(std::string("OpenJMeterScene") + ".VSwitchId", openJMeterScene.vSwitchId);
  setParameter(std::string("OpenJMeterScene") + ".Mode", openJMeterScene.mode);
  setParameter(std::string("OpenJMeterScene") + ".IsVpcTest", openJMeterScene.isVpcTest ? "true" : "false");
  setParameter(std::string("OpenJMeterScene") + ".EnvironmentId", openJMeterScene.environmentId);
  setParameter(std::string("OpenJMeterScene") + ".RegionId", openJMeterScene.regionId);
  setParameter(std::string("OpenJMeterScene") + ".VpcId", openJMeterScene.vpcId);
  setParameter(std::string("OpenJMeterScene") + ".SceneId", openJMeterScene.sceneId);
  setParameter(std::string("OpenJMeterScene") + ".JmeterPluginLabel", openJMeterScene.jmeterPluginLabel);
  setParameter(std::string("OpenJMeterScene") + ".DnsCacheConfig.ClearCacheEachIteration", openJMeterScene.dnsCacheConfig.clearCacheEachIteration ? "true" : "false");
  for(int dep1 = 0; dep1 != openJMeterScene.dnsCacheConfig.dnsServers.size(); dep1++) {
    setParameter(std::string("OpenJMeterScene") + ".DnsCacheConfig.DnsServers." + std::to_string(dep1 + 1), openJMeterScene.dnsCacheConfig.dnsServers[dep1]);
  }
  for(auto const &iter1 : openJMeterScene.dnsCacheConfig.hostTable) {
    setParameter(std::string("OpenJMeterScene") + ".DnsCacheConfig.HostTable." + iter1.first, iter1.second);
  }
  for(int dep1 = 0; dep1 != openJMeterScene.jMeterProperties.size(); dep1++) {
    setParameter(std::string("OpenJMeterScene") + ".JMeterProperties." + std::to_string(dep1 + 1) + ".Name", openJMeterScene.jMeterProperties[dep1].name);
    setParameter(std::string("OpenJMeterScene") + ".JMeterProperties." + std::to_string(dep1 + 1) + ".Value", openJMeterScene.jMeterProperties[dep1].value);
  }
  setParameter(std::string("OpenJMeterScene") + ".SyncTimerType", openJMeterScene.syncTimerType);
  setParameter(std::string("OpenJMeterScene") + ".MaxRps", std::to_string(openJMeterScene.maxRps));
  setParameter(std::string("OpenJMeterScene") + ".RampUp", std::to_string(openJMeterScene.rampUp));
}

