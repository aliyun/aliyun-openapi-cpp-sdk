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

#ifndef ALIBABACLOUD_EMR_MODEL_MODIFYEXECUTIONPLANCLUSTERINFOREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_MODIFYEXECUTIONPLANCLUSTERINFOREQUEST_H_

#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/emr/EmrExport.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace Emr {
namespace Model {
class ALIBABACLOUD_EMR_EXPORT ModifyExecutionPlanClusterInfoRequest
    : public RpcServiceRequest {
  struct BootstrapAction {
    std::string path;
    std::string arg;
    std::string name;
  };
  struct EcsOrder {
    std::string nodeType;
    int diskCount;
    int nodeCount;
    int diskCapacity;
    int index;
    std::string instanceType;
    std::string diskType;
  };

public:
  ModifyExecutionPlanClusterInfoRequest();
  ~ModifyExecutionPlanClusterInfoRequest();

  long getResourceOwnerId() const;
  void setResourceOwnerId(long resourceOwnerId);
  std::string getLogPath() const;
  void setLogPath(const std::string &logPath);
  std::string getClusterName() const;
  void setClusterName(const std::string &clusterName);
  std::string getConfigurations() const;
  void setConfigurations(const std::string &configurations);
  bool getIoOptimized() const;
  void setIoOptimized(bool ioOptimized);
  std::string getSecurityGroupId() const;
  void setSecurityGroupId(const std::string &securityGroupId);
  bool getEasEnable() const;
  void setEasEnable(bool easEnable);
  bool getCreateClusterOnDemand() const;
  void setCreateClusterOnDemand(bool createClusterOnDemand);
  std::string getAccessKeyId() const;
  void setAccessKeyId(const std::string &accessKeyId);
  std::vector<BootstrapAction> getBootstrapAction() const;
  void setBootstrapAction(const std::vector<BootstrapAction> &bootstrapAction);
  std::string getRegionId() const;
  void setRegionId(const std::string &regionId);
  bool getUseLocalMetaDb() const;
  void setUseLocalMetaDb(bool useLocalMetaDb);
  std::string getEmrVer() const;
  void setEmrVer(const std::string &emrVer);
  std::string getId() const;
  void setId(const std::string &id);
  bool getIsOpenPublicIp() const;
  void setIsOpenPublicIp(bool isOpenPublicIp);
  std::string getClusterId() const;
  void setClusterId(const std::string &clusterId);
  std::string getInstanceGeneration() const;
  void setInstanceGeneration(const std::string &instanceGeneration);
  std::string getClusterType() const;
  void setClusterType(const std::string &clusterType);
  std::string getVSwitchId() const;
  void setVSwitchId(const std::string &vSwitchId);
  std::vector<std::string> getOptionSoftWareList() const;
  void
  setOptionSoftWareList(const std::vector<std::string> &optionSoftWareList);
  std::string getVpcId() const;
  void setVpcId(const std::string &vpcId);
  std::string getNetType() const;
  void setNetType(const std::string &netType);
  std::vector<EcsOrder> getEcsOrder() const;
  void setEcsOrder(const std::vector<EcsOrder> &ecsOrder);
  std::string getZoneId() const;
  void setZoneId(const std::string &zoneId);
  bool getHighAvailabilityEnable() const;
  void setHighAvailabilityEnable(bool highAvailabilityEnable);
  bool getLogEnable() const;
  void setLogEnable(bool logEnable);

private:
  long resourceOwnerId_;
  std::string logPath_;
  std::string clusterName_;
  std::string configurations_;
  bool ioOptimized_;
  std::string securityGroupId_;
  bool easEnable_;
  bool createClusterOnDemand_;
  std::string accessKeyId_;
  std::vector<BootstrapAction> bootstrapAction_;
  std::string regionId_;
  bool useLocalMetaDb_;
  std::string emrVer_;
  std::string id_;
  bool isOpenPublicIp_;
  std::string clusterId_;
  std::string instanceGeneration_;
  std::string clusterType_;
  std::string vSwitchId_;
  std::vector<std::string> optionSoftWareList_;
  std::string vpcId_;
  std::string netType_;
  std::vector<EcsOrder> ecsOrder_;
  std::string zoneId_;
  bool highAvailabilityEnable_;
  bool logEnable_;
};
} // namespace Model
} // namespace Emr
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EMR_MODEL_MODIFYEXECUTIONPLANCLUSTERINFOREQUEST_H_