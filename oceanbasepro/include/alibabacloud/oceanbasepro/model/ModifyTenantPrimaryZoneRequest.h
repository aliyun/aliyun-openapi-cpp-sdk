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

#ifndef ALIBABACLOUD_OCEANBASEPRO_MODEL_MODIFYTENANTPRIMARYZONEREQUEST_H_
#define ALIBABACLOUD_OCEANBASEPRO_MODEL_MODIFYTENANTPRIMARYZONEREQUEST_H_

#include <alibabacloud/oceanbasepro/OceanBaseProExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace OceanBasePro {
namespace Model {
class ALIBABACLOUD_OCEANBASEPRO_EXPORT ModifyTenantPrimaryZoneRequest : public RpcServiceRequest {
public:
	ModifyTenantPrimaryZoneRequest();
	~ModifyTenantPrimaryZoneRequest();
	std::string getTenantEndpointDirectId() const;
	void setTenantEndpointDirectId(const std::string &tenantEndpointDirectId);
	std::string getUserVSwitchId() const;
	void setUserVSwitchId(const std::string &userVSwitchId);
	std::string getMasterIntranetAddressZone() const;
	void setMasterIntranetAddressZone(const std::string &masterIntranetAddressZone);
	std::string getTenantId() const;
	void setTenantId(const std::string &tenantId);
	std::string getTenantEndpointId() const;
	void setTenantEndpointId(const std::string &tenantEndpointId);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getPrimaryZone() const;
	void setPrimaryZone(const std::string &primaryZone);
	std::string getVpcId() const;
	void setVpcId(const std::string &vpcId);
	std::string getUserVpcOwnerId() const;
	void setUserVpcOwnerId(const std::string &userVpcOwnerId);
	std::string getUserDirectVSwitchId() const;
	void setUserDirectVSwitchId(const std::string &userDirectVSwitchId);

private:
	std::string tenantEndpointDirectId_;
	std::string userVSwitchId_;
	std::string masterIntranetAddressZone_;
	std::string tenantId_;
	std::string tenantEndpointId_;
	std::string instanceId_;
	std::string primaryZone_;
	std::string vpcId_;
	std::string userVpcOwnerId_;
	std::string userDirectVSwitchId_;
};
} // namespace Model
} // namespace OceanBasePro
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OCEANBASEPRO_MODEL_MODIFYTENANTPRIMARYZONEREQUEST_H_
