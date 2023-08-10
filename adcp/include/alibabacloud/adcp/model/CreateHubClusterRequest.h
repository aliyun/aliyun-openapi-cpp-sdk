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

#ifndef ALIBABACLOUD_ADCP_MODEL_CREATEHUBCLUSTERREQUEST_H_
#define ALIBABACLOUD_ADCP_MODEL_CREATEHUBCLUSTERREQUEST_H_

#include <alibabacloud/adcp/AdcpExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Adcp {
namespace Model {
class ALIBABACLOUD_ADCP_EXPORT CreateHubClusterRequest : public RpcServiceRequest {
public:
	struct WorkflowUnits {
		std::string regionId;
		std::string vpcId;
		struct VSwitchesItem {
			std::string vswitchId;
			std::string zoneId;
		};
		VSwitchesItem vSwitchesItem;
		std::vector<VSwitchesItem> vSwitches;
	};
	CreateHubClusterRequest();
	~CreateHubClusterRequest();
	std::string getAuditLogProject() const;
	void setAuditLogProject(const std::string &auditLogProject);
	std::string getLoadBalancerSpec() const;
	void setLoadBalancerSpec(const std::string &loadBalancerSpec);
	std::string getKubernetesVersion() const;
	void setKubernetesVersion(const std::string &kubernetesVersion);
	std::string getProfile() const;
	void setProfile(const std::string &profile);
	std::string getVSwitches() const;
	void setVSwitches(const std::string &vSwitches);
	std::string getControlPlaneLogProject() const;
	void setControlPlaneLogProject(const std::string &controlPlaneLogProject);
	std::string getLoadBalancerId() const;
	void setLoadBalancerId(const std::string &loadBalancerId);
	std::string getClusterSpec() const;
	void setClusterSpec(const std::string &clusterSpec);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getClusterDomain() const;
	void setClusterDomain(const std::string &clusterDomain);
	std::string getControlPlaneLogTTL() const;
	void setControlPlaneLogTTL(const std::string &controlPlaneLogTTL);
	std::vector<WorkflowUnits> getWorkflowUnits() const;
	void setWorkflowUnits(const std::vector<WorkflowUnits> &workflowUnits);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getAuditLogStoreTTL() const;
	void setAuditLogStoreTTL(const std::string &auditLogStoreTTL);
	std::string getIPStack() const;
	void setIPStack(const std::string &iPStack);
	bool getControlPlaneLogEnabled() const;
	void setControlPlaneLogEnabled(bool controlPlaneLogEnabled);
	bool getArgoServerEnabled() const;
	void setArgoServerEnabled(bool argoServerEnabled);
	std::string getWorkflowScheduleMode() const;
	void setWorkflowScheduleMode(const std::string &workflowScheduleMode);
	bool getApiServerPublicEip() const;
	void setApiServerPublicEip(bool apiServerPublicEip);
	bool getAuditLogEnabled() const;
	void setAuditLogEnabled(bool auditLogEnabled);
	std::string getSecurityGroupIDs() const;
	void setSecurityGroupIDs(const std::string &securityGroupIDs);
	std::string getPriceLimit() const;
	void setPriceLimit(const std::string &priceLimit);
	bool getIsEnterpriseSecurityGroup() const;
	void setIsEnterpriseSecurityGroup(bool isEnterpriseSecurityGroup);
	std::string getVpcId() const;
	void setVpcId(const std::string &vpcId);

private:
	std::string auditLogProject_;
	std::string loadBalancerSpec_;
	std::string kubernetesVersion_;
	std::string profile_;
	std::string vSwitches_;
	std::string controlPlaneLogProject_;
	std::string loadBalancerId_;
	std::string clusterSpec_;
	std::string name_;
	std::string clusterDomain_;
	std::string controlPlaneLogTTL_;
	std::vector<WorkflowUnits> workflowUnits_;
	std::string regionId_;
	std::string auditLogStoreTTL_;
	std::string iPStack_;
	bool controlPlaneLogEnabled_;
	bool argoServerEnabled_;
	std::string workflowScheduleMode_;
	bool apiServerPublicEip_;
	bool auditLogEnabled_;
	std::string securityGroupIDs_;
	std::string priceLimit_;
	bool isEnterpriseSecurityGroup_;
	std::string vpcId_;
};
} // namespace Model
} // namespace Adcp
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ADCP_MODEL_CREATEHUBCLUSTERREQUEST_H_
