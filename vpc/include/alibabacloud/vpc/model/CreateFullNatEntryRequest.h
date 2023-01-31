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

#ifndef ALIBABACLOUD_VPC_MODEL_CREATEFULLNATENTRYREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_CREATEFULLNATENTRYREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT CreateFullNatEntryRequest : public RpcServiceRequest {
public:
	CreateFullNatEntryRequest();
	~CreateFullNatEntryRequest();
	std::string getFullNatEntryDescription() const;
	void setFullNatEntryDescription(const std::string &fullNatEntryDescription);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getAccessIp() const;
	void setAccessIp(const std::string &accessIp);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getNatIpPort() const;
	void setNatIpPort(const std::string &natIpPort);
	std::string getFullNatTableId() const;
	void setFullNatTableId(const std::string &fullNatTableId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getAccessPort() const;
	void setAccessPort(const std::string &accessPort);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getIpProtocol() const;
	void setIpProtocol(const std::string &ipProtocol);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getFullNatEntryName() const;
	void setFullNatEntryName(const std::string &fullNatEntryName);
	std::string getNatIp() const;
	void setNatIp(const std::string &natIp);
	std::string getNetworkInterfaceId() const;
	void setNetworkInterfaceId(const std::string &networkInterfaceId);

private:
	std::string fullNatEntryDescription_;
	long resourceOwnerId_;
	std::string accessIp_;
	std::string clientToken_;
	std::string natIpPort_;
	std::string fullNatTableId_;
	std::string regionId_;
	std::string accessPort_;
	bool dryRun_;
	std::string resourceOwnerAccount_;
	std::string ipProtocol_;
	std::string ownerAccount_;
	long ownerId_;
	std::string fullNatEntryName_;
	std::string natIp_;
	std::string networkInterfaceId_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_CREATEFULLNATENTRYREQUEST_H_
