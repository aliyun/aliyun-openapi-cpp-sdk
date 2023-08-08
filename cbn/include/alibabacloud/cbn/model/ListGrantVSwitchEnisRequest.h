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

#ifndef ALIBABACLOUD_CBN_MODEL_LISTGRANTVSWITCHENISREQUEST_H_
#define ALIBABACLOUD_CBN_MODEL_LISTGRANTVSWITCHENISREQUEST_H_

#include <alibabacloud/cbn/CbnExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cbn {
namespace Model {
class ALIBABACLOUD_CBN_EXPORT ListGrantVSwitchEnisRequest : public RpcServiceRequest {
public:
	ListGrantVSwitchEnisRequest();
	~ListGrantVSwitchEnisRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getCenId() const;
	void setCenId(const std::string &cenId);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getNetworkInterfaceName() const;
	void setNetworkInterfaceName(const std::string &networkInterfaceName);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getVersion() const;
	void setVersion(const std::string &version);
	std::string getVSwitchId() const;
	void setVSwitchId(const std::string &vSwitchId);
	std::string getVpcId() const;
	void setVpcId(const std::string &vpcId);
	long getMaxResults() const;
	void setMaxResults(long maxResults);
	std::string getPrimaryIpAddress() const;
	void setPrimaryIpAddress(const std::string &primaryIpAddress);
	std::vector<std::string> getNetworkInterfaceId() const;
	void setNetworkInterfaceId(const std::vector<std::string> &networkInterfaceId);

private:
	long resourceOwnerId_;
	std::string cenId_;
	int pageNumber_;
	std::string nextToken_;
	int pageSize_;
	std::string networkInterfaceName_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string version_;
	std::string vSwitchId_;
	std::string vpcId_;
	long maxResults_;
	std::string primaryIpAddress_;
	std::vector<std::string> networkInterfaceId_;
};
} // namespace Model
} // namespace Cbn
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CBN_MODEL_LISTGRANTVSWITCHENISREQUEST_H_
