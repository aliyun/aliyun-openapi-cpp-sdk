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

#ifndef ALIBABACLOUD_VPC_MODEL_CREATESNATENTRYREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_CREATESNATENTRYREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT CreateSnatEntryRequest : public RpcServiceRequest {
public:
	CreateSnatEntryRequest();
	~CreateSnatEntryRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getSourceCIDR() const;
	void setSourceCIDR(const std::string &sourceCIDR);
	std::string getSnatIp() const;
	void setSnatIp(const std::string &snatIp);
	std::string getSourceVSwitchId() const;
	void setSourceVSwitchId(const std::string &sourceVSwitchId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getEipAffinity() const;
	void setEipAffinity(int eipAffinity);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getSnatTableId() const;
	void setSnatTableId(const std::string &snatTableId);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getSnatEntryName() const;
	void setSnatEntryName(const std::string &snatEntryName);
	std::string getNetworkInterfaceId() const;
	void setNetworkInterfaceId(const std::string &networkInterfaceId);

private:
	long resourceOwnerId_;
	std::string clientToken_;
	std::string sourceCIDR_;
	std::string snatIp_;
	std::string sourceVSwitchId_;
	std::string regionId_;
	int eipAffinity_;
	bool dryRun_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string snatTableId_;
	long ownerId_;
	std::string snatEntryName_;
	std::string networkInterfaceId_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_CREATESNATENTRYREQUEST_H_
