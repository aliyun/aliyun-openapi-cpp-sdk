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

#ifndef ALIBABACLOUD_ARMS_MODEL_CREATEPROMETHEUSINSTANCEREQUEST_H_
#define ALIBABACLOUD_ARMS_MODEL_CREATEPROMETHEUSINSTANCEREQUEST_H_

#include <alibabacloud/arms/ARMSExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ARMS {
namespace Model {
class ALIBABACLOUD_ARMS_EXPORT CreatePrometheusInstanceRequest : public RpcServiceRequest {
public:
	struct Tags {
		std::string value;
		std::string key;
	};
	CreatePrometheusInstanceRequest();
	~CreatePrometheusInstanceRequest();
	std::string getGrafanaInstanceId() const;
	void setGrafanaInstanceId(const std::string &grafanaInstanceId);
	std::string getClusterName() const;
	void setClusterName(const std::string &clusterName);
	std::string getSecurityGroupId() const;
	void setSecurityGroupId(const std::string &securityGroupId);
	std::string getStsToken() const;
	void setStsToken(const std::string &stsToken);
	int getDuration() const;
	void setDuration(int duration);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getSubClustersJson() const;
	void setSubClustersJson(const std::string &subClustersJson);
	bool getAllSubClustersSuccess() const;
	void setAllSubClustersSuccess(bool allSubClustersSuccess);
	std::string getClusterId() const;
	void setClusterId(const std::string &clusterId);
	std::vector<Tags> getTags() const;
	void setTags(const std::vector<Tags> &tags);
	std::string getClusterType() const;
	void setClusterType(const std::string &clusterType);
	std::string getVSwitchId() const;
	void setVSwitchId(const std::string &vSwitchId);
	std::string getParamJson() const;
	void setParamJson(const std::string &paramJson);
	std::string getVpcId() const;
	void setVpcId(const std::string &vpcId);
	int getArchiveDuration() const;
	void setArchiveDuration(int archiveDuration);

private:
	std::string grafanaInstanceId_;
	std::string clusterName_;
	std::string securityGroupId_;
	std::string stsToken_;
	int duration_;
	std::string resourceGroupId_;
	std::string regionId_;
	std::string subClustersJson_;
	bool allSubClustersSuccess_;
	std::string clusterId_;
	std::vector<Tags> tags_;
	std::string clusterType_;
	std::string vSwitchId_;
	std::string paramJson_;
	std::string vpcId_;
	int archiveDuration_;
};
} // namespace Model
} // namespace ARMS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ARMS_MODEL_CREATEPROMETHEUSINSTANCEREQUEST_H_
