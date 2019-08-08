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

#ifndef ALIBABACLOUD_EMR_MODEL_CREATEFLOWFORWEBREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_CREATEFLOWFORWEBREQUEST_H_

#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/emr/EmrExport.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace Emr {
namespace Model {
class ALIBABACLOUD_EMR_EXPORT CreateFlowForWebRequest
    : public RpcServiceRequest {

public:
  CreateFlowForWebRequest();
  ~CreateFlowForWebRequest();

  std::string getCronExpr() const;
  void setCronExpr(const std::string &cronExpr);
  std::string getParentFlowList() const;
  void setParentFlowList(const std::string &parentFlowList);
  std::string getAlertDingDingGroupBizId() const;
  void setAlertDingDingGroupBizId(const std::string &alertDingDingGroupBizId);
  long getStartSchedule() const;
  void setStartSchedule(long startSchedule);
  std::string getDescription() const;
  void setDescription(const std::string &description);
  std::string getClusterId() const;
  void setClusterId(const std::string &clusterId);
  std::string getAlertUserGroupBizId() const;
  void setAlertUserGroupBizId(const std::string &alertUserGroupBizId);
  std::string getGraph() const;
  void setGraph(const std::string &graph);
  std::string getHostName() const;
  void setHostName(const std::string &hostName);
  std::string getRegionId() const;
  void setRegionId(const std::string &regionId);
  bool getCreateCluster() const;
  void setCreateCluster(bool createCluster);
  std::string getName() const;
  void setName(const std::string &name);
  long getEndSchedule() const;
  void setEndSchedule(long endSchedule);
  std::string getAlertConf() const;
  void setAlertConf(const std::string &alertConf);
  std::string getProjectId() const;
  void setProjectId(const std::string &projectId);
  std::string getParentCategory() const;
  void setParentCategory(const std::string &parentCategory);

private:
  std::string cronExpr_;
  std::string parentFlowList_;
  std::string alertDingDingGroupBizId_;
  long startSchedule_;
  std::string description_;
  std::string clusterId_;
  std::string alertUserGroupBizId_;
  std::string graph_;
  std::string hostName_;
  std::string regionId_;
  bool createCluster_;
  std::string name_;
  long endSchedule_;
  std::string alertConf_;
  std::string projectId_;
  std::string parentCategory_;
};
} // namespace Model
} // namespace Emr
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EMR_MODEL_CREATEFLOWFORWEBREQUEST_H_