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

#ifndef ALIBABACLOUD_EMR_MODEL_CREATECLUSTERWITHHOSTPOOLREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_CREATECLUSTERWITHHOSTPOOLREQUEST_H_

#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/emr/EmrExport.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace Emr {
namespace Model {
class ALIBABACLOUD_EMR_EXPORT CreateClusterWithHostPoolRequest
    : public RpcServiceRequest {
  struct HostInfo {
    std::string hpHostBizId;
    std::string hostName;
    std::string role;
    long groupId;
    std::string privateIp;
    RepeatList serviceComponentInfo;
    std::string hostGroupName;
  };
  struct HostGroup {
    std::string groupType;
    long groupId;
    std::string groupName;
  };
  struct ServiceInfo {
    std::string serviceEcmVersion;
    std::string serviceVersion;
    std::string serviceName;
  };
  struct Config {
    std::string configKey;
    std::string fileName;
    std::string configValue;
    std::string serviceName;
  };

public:
  CreateClusterWithHostPoolRequest();
  ~CreateClusterWithHostPoolRequest();

  long getResourceOwnerId() const;
  void setResourceOwnerId(long resourceOwnerId);
  std::string getClusterName() const;
  void setClusterName(const std::string &clusterName);
  bool getEasEnable() const;
  void setEasEnable(bool easEnable);
  std::vector<HostInfo> getHostInfo() const;
  void setHostInfo(const std::vector<HostInfo> &hostInfo);
  std::string getRelatedClusterId() const;
  void setRelatedClusterId(const std::string &relatedClusterId);
  std::string getAccessKeyId() const;
  void setAccessKeyId(const std::string &accessKeyId);
  std::string getClusterType() const;
  void setClusterType(const std::string &clusterType);
  std::string getRegionId() const;
  void setRegionId(const std::string &regionId);
  std::vector<HostGroup> getHostGroup() const;
  void setHostGroup(const std::vector<HostGroup> &hostGroup);
  std::string getStackName() const;
  void setStackName(const std::string &stackName);
  std::string getStackVersion() const;
  void setStackVersion(const std::string &stackVersion);
  std::vector<ServiceInfo> getServiceInfo() const;
  void setServiceInfo(const std::vector<ServiceInfo> &serviceInfo);
  std::vector<Config> getConfig() const;
  void setConfig(const std::vector<Config> &config);

private:
  long resourceOwnerId_;
  std::string clusterName_;
  bool easEnable_;
  std::vector<HostInfo> hostInfo_;
  std::string relatedClusterId_;
  std::string accessKeyId_;
  std::string clusterType_;
  std::string regionId_;
  std::vector<HostGroup> hostGroup_;
  std::string stackName_;
  std::string stackVersion_;
  std::vector<ServiceInfo> serviceInfo_;
  std::vector<Config> config_;
};
} // namespace Model
} // namespace Emr
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EMR_MODEL_CREATECLUSTERWITHHOSTPOOLREQUEST_H_