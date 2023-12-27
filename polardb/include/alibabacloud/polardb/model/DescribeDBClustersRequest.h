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

#ifndef ALIBABACLOUD_POLARDB_MODEL_DESCRIBEDBCLUSTERSREQUEST_H_
#define ALIBABACLOUD_POLARDB_MODEL_DESCRIBEDBCLUSTERSREQUEST_H_

#include <alibabacloud/polardb/PolardbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Polardb {
namespace Model {
class ALIBABACLOUD_POLARDB_EXPORT DescribeDBClustersRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string value;
		std::string key;
	};
	DescribeDBClustersRequest();
	~DescribeDBClustersRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getDBClusterDescription() const;
	void setDBClusterDescription(const std::string &dBClusterDescription);
	std::string getDBClusterStatus() const;
	void setDBClusterStatus(const std::string &dBClusterStatus);
	std::string getConnectionString() const;
	void setConnectionString(const std::string &connectionString);
	int getRecentExpirationInterval() const;
	void setRecentExpirationInterval(int recentExpirationInterval);
	std::string getDescribeType() const;
	void setDescribeType(const std::string &describeType);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getDBNodeIds() const;
	void setDBNodeIds(const std::string &dBNodeIds);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	int getRecentCreationInterval() const;
	void setRecentCreationInterval(int recentCreationInterval);
	bool getExpired() const;
	void setExpired(bool expired);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getDBType() const;
	void setDBType(const std::string &dBType);
	std::string getDBVersion() const;
	void setDBVersion(const std::string &dBVersion);
	std::string getPayType() const;
	void setPayType(const std::string &payType);
	std::string getDBClusterIds() const;
	void setDBClusterIds(const std::string &dBClusterIds);

private:
	long resourceOwnerId_;
	std::string dBClusterDescription_;
	std::string dBClusterStatus_;
	std::string connectionString_;
	int recentExpirationInterval_;
	std::string describeType_;
	int pageNumber_;
	std::string dBNodeIds_;
	std::string accessKeyId_;
	std::string resourceGroupId_;
	int recentCreationInterval_;
	bool expired_;
	std::string regionId_;
	int pageSize_;
	std::vector<Tag> tag_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string dBType_;
	std::string dBVersion_;
	std::string payType_;
	std::string dBClusterIds_;
};
} // namespace Model
} // namespace Polardb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_POLARDB_MODEL_DESCRIBEDBCLUSTERSREQUEST_H_
