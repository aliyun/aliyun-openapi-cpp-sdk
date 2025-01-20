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

#ifndef ALIBABACLOUD_POLARDB_MODEL_DESCRIBEACTIVEOPERATIONTASKSREQUEST_H_
#define ALIBABACLOUD_POLARDB_MODEL_DESCRIBEACTIVEOPERATIONTASKSREQUEST_H_

#include <alibabacloud/polardb/PolardbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Polardb {
namespace Model {
class ALIBABACLOUD_POLARDB_EXPORT DescribeActiveOperationTasksRequest : public RpcServiceRequest {
public:
	DescribeActiveOperationTasksRequest();
	~DescribeActiveOperationTasksRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getChangeLevel() const;
	void setChangeLevel(const std::string &changeLevel);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getSecurityToken() const;
	void setSecurityToken(const std::string &securityToken);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getProductName() const;
	void setProductName(const std::string &productName);
	std::string getEngineType() const;
	void setEngineType(const std::string &engineType);
	std::string getTaskType() const;
	void setTaskType(const std::string &taskType);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getDBClusterId() const;
	void setDBClusterId(const std::string &dBClusterId);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getAllowCancel() const;
	void setAllowCancel(long allowCancel);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getDBType() const;
	void setDBType(const std::string &dBType);
	long getAllowChange() const;
	void setAllowChange(long allowChange);
	std::string getRegion() const;
	void setRegion(const std::string &region);
	long getStatus() const;
	void setStatus(long status);

private:
	long resourceOwnerId_;
	std::string changeLevel_;
	int pageNumber_;
	std::string accessKeyId_;
	std::string resourceGroupId_;
	std::string securityToken_;
	std::string regionId_;
	int pageSize_;
	std::string productName_;
	std::string engineType_;
	std::string taskType_;
	std::string resourceOwnerAccount_;
	std::string dBClusterId_;
	std::string ownerAccount_;
	long allowCancel_;
	long ownerId_;
	std::string dBType_;
	long allowChange_;
	std::string region_;
	long status_;
};
} // namespace Model
} // namespace Polardb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_POLARDB_MODEL_DESCRIBEACTIVEOPERATIONTASKSREQUEST_H_
