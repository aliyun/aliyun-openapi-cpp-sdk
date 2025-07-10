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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBEVPNCONNECTIONLOGSREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBEVPNCONNECTIONLOGSREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT DescribeVpnConnectionLogsRequest : public RpcServiceRequest {
public:
	DescribeVpnConnectionLogsRequest();
	~DescribeVpnConnectionLogsRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	int getMinutePeriod() const;
	void setMinutePeriod(int minutePeriod);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	int getFrom() const;
	void setFrom(int from);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getVpnConnectionId() const;
	void setVpnConnectionId(const std::string &vpnConnectionId);
	std::string getTunnelId() const;
	void setTunnelId(const std::string &tunnelId);
	int getTo() const;
	void setTo(int to);

private:
	long resourceOwnerId_;
	int pageNumber_;
	int minutePeriod_;
	std::string regionId_;
	int pageSize_;
	int from_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string vpnConnectionId_;
	std::string tunnelId_;
	int to_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBEVPNCONNECTIONLOGSREQUEST_H_
