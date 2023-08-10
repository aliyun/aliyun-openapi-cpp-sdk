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

#ifndef ALIBABACLOUD_ADCP_MODEL_UPDATEHUBCLUSTERFEATUREREQUEST_H_
#define ALIBABACLOUD_ADCP_MODEL_UPDATEHUBCLUSTERFEATUREREQUEST_H_

#include <alibabacloud/adcp/AdcpExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Adcp {
namespace Model {
class ALIBABACLOUD_ADCP_EXPORT UpdateHubClusterFeatureRequest : public RpcServiceRequest {
public:
	UpdateHubClusterFeatureRequest();
	~UpdateHubClusterFeatureRequest();
	std::vector<std::string> getAccessControlList() const;
	void setAccessControlList(const std::vector<std::string> &accessControlList);
	bool getMonitorEnabled() const;
	void setMonitorEnabled(bool monitorEnabled);
	bool getDeletionProtection() const;
	void setDeletionProtection(bool deletionProtection);
	bool getEnableMesh() const;
	void setEnableMesh(bool enableMesh);
	bool getArgoCDHAEnabled() const;
	void setArgoCDHAEnabled(bool argoCDHAEnabled);
	bool getArgoCDEnabled() const;
	void setArgoCDEnabled(bool argoCDEnabled);
	std::vector<std::string> getVSwitches() const;
	void setVSwitches(const std::vector<std::string> &vSwitches);
	std::string getName() const;
	void setName(const std::string &name);
	bool getPublicAccessEnabled() const;
	void setPublicAccessEnabled(bool publicAccessEnabled);
	bool getPublicApiServerEnabled() const;
	void setPublicApiServerEnabled(bool publicApiServerEnabled);
	bool getArgoServerEnabled() const;
	void setArgoServerEnabled(bool argoServerEnabled);
	std::string getWorkflowScheduleMode() const;
	void setWorkflowScheduleMode(const std::string &workflowScheduleMode);
	bool getAuditLogEnabled() const;
	void setAuditLogEnabled(bool auditLogEnabled);
	std::string getClusterId() const;
	void setClusterId(const std::string &clusterId);
	std::string getPriceLimit() const;
	void setPriceLimit(const std::string &priceLimit);
	std::string getApiServerEipId() const;
	void setApiServerEipId(const std::string &apiServerEipId);

private:
	std::vector<std::string> accessControlList_;
	bool monitorEnabled_;
	bool deletionProtection_;
	bool enableMesh_;
	bool argoCDHAEnabled_;
	bool argoCDEnabled_;
	std::vector<std::string> vSwitches_;
	std::string name_;
	bool publicAccessEnabled_;
	bool publicApiServerEnabled_;
	bool argoServerEnabled_;
	std::string workflowScheduleMode_;
	bool auditLogEnabled_;
	std::string clusterId_;
	std::string priceLimit_;
	std::string apiServerEipId_;
};
} // namespace Model
} // namespace Adcp
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ADCP_MODEL_UPDATEHUBCLUSTERFEATUREREQUEST_H_
