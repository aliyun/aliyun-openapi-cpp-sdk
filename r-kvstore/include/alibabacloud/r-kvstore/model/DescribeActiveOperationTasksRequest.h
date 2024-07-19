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

#ifndef ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBEACTIVEOPERATIONTASKSREQUEST_H_
#define ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBEACTIVEOPERATIONTASKSREQUEST_H_

#include <alibabacloud/r-kvstore/R_kvstoreExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace R_kvstore {
namespace Model {
class ALIBABACLOUD_R_KVSTORE_EXPORT DescribeActiveOperationTasksRequest : public RpcServiceRequest {
public:
	DescribeActiveOperationTasksRequest();
	~DescribeActiveOperationTasksRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getProductId() const;
	void setProductId(const std::string &productId);
	std::string getChangeLevel() const;
	void setChangeLevel(const std::string &changeLevel);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getInsName() const;
	void setInsName(const std::string &insName);
	std::string getSecurityToken() const;
	void setSecurityToken(const std::string &securityToken);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getTaskType() const;
	void setTaskType(const std::string &taskType);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	int getAllowCancel() const;
	void setAllowCancel(int allowCancel);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getDbType() const;
	void setDbType(const std::string &dbType);
	int getAllowChange() const;
	void setAllowChange(int allowChange);
	std::string getRegion() const;
	void setRegion(const std::string &region);
	int getStatus() const;
	void setStatus(int status);

private:
	long resourceOwnerId_;
	std::string productId_;
	std::string changeLevel_;
	int pageNumber_;
	std::string accessKeyId_;
	std::string insName_;
	std::string securityToken_;
	std::string regionId_;
	int pageSize_;
	std::string taskType_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	int allowCancel_;
	long ownerId_;
	std::string dbType_;
	int allowChange_;
	std::string region_;
	int status_;
};
} // namespace Model
} // namespace R_kvstore
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBEACTIVEOPERATIONTASKSREQUEST_H_
