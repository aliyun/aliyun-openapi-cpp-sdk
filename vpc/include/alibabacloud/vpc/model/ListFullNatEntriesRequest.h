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

#ifndef ALIBABACLOUD_VPC_MODEL_LISTFULLNATENTRIESREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_LISTFULLNATENTRIESREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT ListFullNatEntriesRequest : public RpcServiceRequest {
public:
	ListFullNatEntriesRequest();
	~ListFullNatEntriesRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::vector<std::string> getNetworkInterfaceIds() const;
	void setNetworkInterfaceIds(const std::vector<std::string> &networkInterfaceIds);
	std::string getFullNatEntryStatus() const;
	void setFullNatEntryStatus(const std::string &fullNatEntryStatus);
	std::string getFullNatEntryId() const;
	void setFullNatEntryId(const std::string &fullNatEntryId);
	std::string getNatIpPort() const;
	void setNatIpPort(const std::string &natIpPort);
	std::string getFullNatTableId() const;
	void setFullNatTableId(const std::string &fullNatTableId);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::vector<std::string> getFullNatEntryNames() const;
	void setFullNatEntryNames(const std::vector<std::string> &fullNatEntryNames);
	std::string getNatGatewayId() const;
	void setNatGatewayId(const std::string &natGatewayId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getIpProtocol() const;
	void setIpProtocol(const std::string &ipProtocol);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getNatIp() const;
	void setNatIp(const std::string &natIp);
	long getMaxResults() const;
	void setMaxResults(long maxResults);

private:
	long resourceOwnerId_;
	std::string clientToken_;
	std::vector<std::string> networkInterfaceIds_;
	std::string fullNatEntryStatus_;
	std::string fullNatEntryId_;
	std::string natIpPort_;
	std::string fullNatTableId_;
	std::string nextToken_;
	std::string regionId_;
	std::vector<std::string> fullNatEntryNames_;
	std::string natGatewayId_;
	std::string resourceOwnerAccount_;
	std::string ipProtocol_;
	std::string ownerAccount_;
	long ownerId_;
	std::string natIp_;
	long maxResults_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_LISTFULLNATENTRIESREQUEST_H_
