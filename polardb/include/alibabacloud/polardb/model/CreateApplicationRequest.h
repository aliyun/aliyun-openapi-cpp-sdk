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

#ifndef ALIBABACLOUD_POLARDB_MODEL_CREATEAPPLICATIONREQUEST_H_
#define ALIBABACLOUD_POLARDB_MODEL_CREATEAPPLICATIONREQUEST_H_

#include <alibabacloud/polardb/PolardbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Polardb {
namespace Model {
class ALIBABACLOUD_POLARDB_EXPORT CreateApplicationRequest : public RpcServiceRequest {
public:
	struct Components {
		long componentReplica;
		std::string securityIPNetType;
		long componentMaxReplica;
		std::string scaleMax;
		std::string parameterTemplateId;
		std::string securityIPList;
		std::string componentType;
		std::string securityIPType;
		std::string componentClass;
		std::string parameters;
		std::string securityGroups;
		std::string securityIPArrayName;
		std::string scaleMin;
	};
	struct Endpoints {
		std::string endpointType;
		std::string description;
	};
	CreateApplicationRequest();
	~CreateApplicationRequest();
	std::vector<Components> getComponents() const;
	void setComponents(const std::vector<Components> &components);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getArchitecture() const;
	void setArchitecture(const std::string &architecture);
	std::string getPeriod() const;
	void setPeriod(const std::string &period);
	std::vector<Endpoints> getEndpoints() const;
	void setEndpoints(const std::vector<Endpoints> &endpoints);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	std::string getDBClusterId() const;
	void setDBClusterId(const std::string &dBClusterId);
	std::string getVersion() const;
	void setVersion(const std::string &version);
	std::string getUsedTime() const;
	void setUsedTime(const std::string &usedTime);
	std::string getVSwitchId() const;
	void setVSwitchId(const std::string &vSwitchId);
	std::string getPolarFSInstanceId() const;
	void setPolarFSInstanceId(const std::string &polarFSInstanceId);
	bool getAutoRenew() const;
	void setAutoRenew(bool autoRenew);
	std::string getVpcId() const;
	void setVpcId(const std::string &vpcId);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);
	std::string getApplicationType() const;
	void setApplicationType(const std::string &applicationType);
	std::string getPayType() const;
	void setPayType(const std::string &payType);

private:
	std::vector<Components> components_;
	std::string description_;
	std::string resourceGroupId_;
	std::string regionId_;
	std::string architecture_;
	std::string period_;
	std::vector<Endpoints> endpoints_;
	bool dryRun_;
	std::string dBClusterId_;
	std::string version_;
	std::string usedTime_;
	std::string vSwitchId_;
	std::string polarFSInstanceId_;
	bool autoRenew_;
	std::string vpcId_;
	std::string zoneId_;
	std::string applicationType_;
	std::string payType_;
};
} // namespace Model
} // namespace Polardb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_POLARDB_MODEL_CREATEAPPLICATIONREQUEST_H_
