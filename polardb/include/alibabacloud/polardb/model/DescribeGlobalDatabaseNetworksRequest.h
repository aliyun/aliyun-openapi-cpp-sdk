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

#ifndef ALIBABACLOUD_POLARDB_MODEL_DESCRIBEGLOBALDATABASENETWORKSREQUEST_H_
#define ALIBABACLOUD_POLARDB_MODEL_DESCRIBEGLOBALDATABASENETWORKSREQUEST_H_

#include <alibabacloud/polardb/PolardbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Polardb {
namespace Model {
class ALIBABACLOUD_POLARDB_EXPORT DescribeGlobalDatabaseNetworksRequest : public RpcServiceRequest {
public:
	DescribeGlobalDatabaseNetworksRequest();
	~DescribeGlobalDatabaseNetworksRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getFilterRegion() const;
	void setFilterRegion(const std::string &filterRegion);
	std::string getSecurityToken() const;
	void setSecurityToken(const std::string &securityToken);
	std::string getGDNId() const;
	void setGDNId(const std::string &gDNId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getGDNDescription() const;
	void setGDNDescription(const std::string &gDNDescription);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getDBClusterId() const;
	void setDBClusterId(const std::string &dBClusterId);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getDBType() const;
	void setDBType(const std::string &dBType);

private:
	long resourceOwnerId_;
	int pageNumber_;
	std::string accessKeyId_;
	std::string resourceGroupId_;
	std::string filterRegion_;
	std::string securityToken_;
	std::string gDNId_;
	int pageSize_;
	std::string gDNDescription_;
	std::string resourceOwnerAccount_;
	std::string dBClusterId_;
	std::string ownerAccount_;
	long ownerId_;
	std::string dBType_;
};
} // namespace Model
} // namespace Polardb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_POLARDB_MODEL_DESCRIBEGLOBALDATABASENETWORKSREQUEST_H_
