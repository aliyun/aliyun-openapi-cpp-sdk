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

#ifndef ALIBABACLOUD_EMR_MODEL_UPDATEETLJOBREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_UPDATEETLJOBREQUEST_H_

#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/emr/EmrExport.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace Emr {
namespace Model {
class ALIBABACLOUD_EMR_EXPORT UpdateETLJobRequest : public RpcServiceRequest {
  struct TriggerRule {
    std::string cronExpr;
    long endTime;
    long startTime;
    bool enabled;
  };
  struct StageConnection {
    std::string port;
    std::string from;
    std::string to;
  };
  struct Stage {
    std::string stageName;
    std::string stageConf;
    std::string stageType;
    std::string stagePlugin;
  };

public:
  UpdateETLJobRequest();
  ~UpdateETLJobRequest();

  long getResourceOwnerId() const;
  void setResourceOwnerId(long resourceOwnerId);
  std::string getClusterConfig() const;
  void setClusterConfig(const std::string &clusterConfig);
  std::vector<TriggerRule> getTriggerRule() const;
  void setTriggerRule(const std::vector<TriggerRule> &triggerRule);
  std::string getAlertConfig() const;
  void setAlertConfig(const std::string &alertConfig);
  std::string getDescription() const;
  void setDescription(const std::string &description);
  bool getCheck() const;
  void setCheck(bool check);
  std::string getAccessKeyId() const;
  void setAccessKeyId(const std::string &accessKeyId);
  std::vector<StageConnection> getStageConnection() const;
  void setStageConnection(const std::vector<StageConnection> &stageConnection);
  std::vector<Stage> getStage() const;
  void setStage(const std::vector<Stage> &stage);
  std::string getRegionId() const;
  void setRegionId(const std::string &regionId);
  std::string getName() const;
  void setName(const std::string &name);
  std::string getId() const;
  void setId(const std::string &id);

private:
  long resourceOwnerId_;
  std::string clusterConfig_;
  std::vector<TriggerRule> triggerRule_;
  std::string alertConfig_;
  std::string description_;
  bool check_;
  std::string accessKeyId_;
  std::vector<StageConnection> stageConnection_;
  std::vector<Stage> stage_;
  std::string regionId_;
  std::string name_;
  std::string id_;
};
} // namespace Model
} // namespace Emr
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EMR_MODEL_UPDATEETLJOBREQUEST_H_