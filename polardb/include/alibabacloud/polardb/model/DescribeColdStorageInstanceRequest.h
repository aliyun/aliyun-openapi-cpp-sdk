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

#ifndef ALIBABACLOUD_POLARDB_MODEL_DESCRIBECOLDSTORAGEINSTANCEREQUEST_H_
#define ALIBABACLOUD_POLARDB_MODEL_DESCRIBECOLDSTORAGEINSTANCEREQUEST_H_

#include <alibabacloud/polardb/PolardbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Polardb {
namespace Model {
class ALIBABACLOUD_POLARDB_EXPORT DescribeColdStorageInstanceRequest : public RpcServiceRequest {
public:
	DescribeColdStorageInstanceRequest();
	~DescribeColdStorageInstanceRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getDescribeType() const;
	void setDescribeType(const std::string &describeType);
	std::string getPageNumber() const;
	void setPageNumber(const std::string &pageNumber);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getPageSize() const;
	void setPageSize(const std::string &pageSize);
	std::string getTableName() const;
	void setTableName(const std::string &tableName);
	std::string getObjectType() const;
	void setObjectType(const std::string &objectType);
	std::string getEngineType() const;
	void setEngineType(const std::string &engineType);
	int getExpireTime() const;
	void setExpireTime(int expireTime);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getDBClusterId() const;
	void setDBClusterId(const std::string &dBClusterId);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getDBName() const;
	void setDBName(const std::string &dBName);
	int getMaxResults() const;
	void setMaxResults(int maxResults);
	std::string getDownloadNetType() const;
	void setDownloadNetType(const std::string &downloadNetType);

private:
	long resourceOwnerId_;
	std::string describeType_;
	std::string pageNumber_;
	std::string accessKeyId_;
	std::string nextToken_;
	std::string regionId_;
	std::string pageSize_;
	std::string tableName_;
	std::string objectType_;
	std::string engineType_;
	int expireTime_;
	std::string resourceOwnerAccount_;
	std::string dBClusterId_;
	std::string ownerAccount_;
	long ownerId_;
	std::string dBName_;
	int maxResults_;
	std::string downloadNetType_;
};
} // namespace Model
} // namespace Polardb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_POLARDB_MODEL_DESCRIBECOLDSTORAGEINSTANCEREQUEST_H_
