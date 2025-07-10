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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBESNATTABLEENTRIESREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBESNATTABLEENTRIESREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT DescribeSnatTableEntriesRequest : public RpcServiceRequest {
public:
	DescribeSnatTableEntriesRequest();
	~DescribeSnatTableEntriesRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::vector<std::string> getNetworkInterfaceIds() const;
	void setNetworkInterfaceIds(const std::vector<std::string> &networkInterfaceIds);
	std::string getSourceCIDR() const;
	void setSourceCIDR(const std::string &sourceCIDR);
	std::string getSnatIp() const;
	void setSnatIp(const std::string &snatIp);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getSourceVSwitchId() const;
	void setSourceVSwitchId(const std::string &sourceVSwitchId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getSnatEntryId() const;
	void setSnatEntryId(const std::string &snatEntryId);
	std::string getNatGatewayId() const;
	void setNatGatewayId(const std::string &natGatewayId);
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

private:
	long resourceOwnerId_;
	std::vector<std::string> networkInterfaceIds_;
	std::string sourceCIDR_;
	std::string snatIp_;
	int pageNumber_;
	std::string sourceVSwitchId_;
	std::string regionId_;
	int pageSize_;
	std::string snatEntryId_;
	std::string natGatewayId_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string snatTableId_;
	long ownerId_;
	std::string snatEntryName_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBESNATTABLEENTRIESREQUEST_H_
