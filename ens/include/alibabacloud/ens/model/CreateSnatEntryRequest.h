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

#ifndef ALIBABACLOUD_ENS_MODEL_CREATESNATENTRYREQUEST_H_
#define ALIBABACLOUD_ENS_MODEL_CREATESNATENTRYREQUEST_H_

#include <alibabacloud/ens/EnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ens {
namespace Model {
class ALIBABACLOUD_ENS_EXPORT CreateSnatEntryRequest : public RpcServiceRequest {
public:
	CreateSnatEntryRequest();
	~CreateSnatEntryRequest();
	std::string getSnatIp() const;
	void setSnatIp(const std::string &snatIp);
	std::string getType() const;
	void setType(const std::string &type);
	std::string getDestCIDR() const;
	void setDestCIDR(const std::string &destCIDR);
	std::string getSourceVSwitchId() const;
	void setSourceVSwitchId(const std::string &sourceVSwitchId);
	bool getEipAffinity() const;
	void setEipAffinity(bool eipAffinity);
	std::string getSourceNetworkId() const;
	void setSourceNetworkId(const std::string &sourceNetworkId);
	std::string getStandbySnatIp() const;
	void setStandbySnatIp(const std::string &standbySnatIp);
	std::string getSourceCIDR() const;
	void setSourceCIDR(const std::string &sourceCIDR);
	std::string getNatGatewayId() const;
	void setNatGatewayId(const std::string &natGatewayId);
	int getIdleTimeout() const;
	void setIdleTimeout(int idleTimeout);
	std::string getSnatEntryName() const;
	void setSnatEntryName(const std::string &snatEntryName);
	bool getIspAffinity() const;
	void setIspAffinity(bool ispAffinity);

private:
	std::string snatIp_;
	std::string type_;
	std::string destCIDR_;
	std::string sourceVSwitchId_;
	bool eipAffinity_;
	std::string sourceNetworkId_;
	std::string standbySnatIp_;
	std::string sourceCIDR_;
	std::string natGatewayId_;
	int idleTimeout_;
	std::string snatEntryName_;
	bool ispAffinity_;
};
} // namespace Model
} // namespace Ens
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ENS_MODEL_CREATESNATENTRYREQUEST_H_
