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

#ifndef ALIBABACLOUD_VPC_MODEL_CREATEIPSECSERVERREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_CREATEIPSECSERVERREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT CreateIpsecServerRequest : public RpcServiceRequest {
public:
	CreateIpsecServerRequest();
	~CreateIpsecServerRequest();
	std::string getIkeConfig() const;
	void setIkeConfig(const std::string &ikeConfig);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getIpsecConfig() const;
	void setIpsecConfig(const std::string &ipsecConfig);
	std::string getPsk() const;
	void setPsk(const std::string &psk);
	std::string getLocalSubnet() const;
	void setLocalSubnet(const std::string &localSubnet);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getIDaaSInstanceId() const;
	void setIDaaSInstanceId(const std::string &iDaaSInstanceId);
	bool getEffectImmediately() const;
	void setEffectImmediately(bool effectImmediately);
	std::string getClientIpPool() const;
	void setClientIpPool(const std::string &clientIpPool);
	std::string getDryRun() const;
	void setDryRun(const std::string &dryRun);
	std::string getVpnGatewayId() const;
	void setVpnGatewayId(const std::string &vpnGatewayId);
	std::string getCallerBid() const;
	void setCallerBid(const std::string &callerBid);
	bool getPskEnabled() const;
	void setPskEnabled(bool pskEnabled);
	bool getMultiFactorAuthEnabled() const;
	void setMultiFactorAuthEnabled(bool multiFactorAuthEnabled);
	std::string getIpSecServerName() const;
	void setIpSecServerName(const std::string &ipSecServerName);

private:
	std::string ikeConfig_;
	long resourceOwnerId_;
	std::string clientToken_;
	std::string ipsecConfig_;
	std::string psk_;
	std::string localSubnet_;
	std::string regionId_;
	std::string iDaaSInstanceId_;
	bool effectImmediately_;
	std::string clientIpPool_;
	std::string dryRun_;
	std::string vpnGatewayId_;
	std::string callerBid_;
	bool pskEnabled_;
	bool multiFactorAuthEnabled_;
	std::string ipSecServerName_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_CREATEIPSECSERVERREQUEST_H_
