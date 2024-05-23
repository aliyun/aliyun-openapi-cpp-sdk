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

#ifndef ALIBABACLOUD_OCEANBASEPRO_MODEL_CREATETENANTREQUEST_H_
#define ALIBABACLOUD_OCEANBASEPRO_MODEL_CREATETENANTREQUEST_H_

#include <alibabacloud/oceanbasepro/OceanBaseProExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace OceanBasePro {
namespace Model {
class ALIBABACLOUD_OCEANBASEPRO_EXPORT CreateTenantRequest : public RpcServiceRequest {
public:
	CreateTenantRequest();
	~CreateTenantRequest();
	std::string getCharset() const;
	void setCharset(const std::string &charset);
	std::string getTenantMode() const;
	void setTenantMode(const std::string &tenantMode);
	int getMemory() const;
	void setMemory(int memory);
	long getLogDisk() const;
	void setLogDisk(long logDisk);
	std::string getTimeZone() const;
	void setTimeZone(const std::string &timeZone);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getUserVSwitchId() const;
	void setUserVSwitchId(const std::string &userVSwitchId);
	std::string getUserVpcId() const;
	void setUserVpcId(const std::string &userVpcId);
	int getCpu() const;
	void setCpu(int cpu);
	int getUnitNum() const;
	void setUnitNum(int unitNum);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getPrimaryZone() const;
	void setPrimaryZone(const std::string &primaryZone);
	std::string getUserVpcOwnerId() const;
	void setUserVpcOwnerId(const std::string &userVpcOwnerId);
	std::map<std::string, std::string> getCreateParams() const;
	void setCreateParams(const std::map<std::string, std::string> &createParams);
	std::string getTenantName() const;
	void setTenantName(const std::string &tenantName);
	std::string getReadOnlyZoneList() const;
	void setReadOnlyZoneList(const std::string &readOnlyZoneList);

private:
	std::string charset_;
	std::string tenantMode_;
	int memory_;
	long logDisk_;
	std::string timeZone_;
	std::string description_;
	std::string userVSwitchId_;
	std::string userVpcId_;
	int cpu_;
	int unitNum_;
	std::string instanceId_;
	std::string primaryZone_;
	std::string userVpcOwnerId_;
	std::map<std::string, std::string> createParams_;
	std::string tenantName_;
	std::string readOnlyZoneList_;
};
} // namespace Model
} // namespace OceanBasePro
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OCEANBASEPRO_MODEL_CREATETENANTREQUEST_H_
