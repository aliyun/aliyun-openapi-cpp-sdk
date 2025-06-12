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

#ifndef ALIBABACLOUD_CLICKHOUSE_MODEL_TRANSFERVERSIONREQUEST_H_
#define ALIBABACLOUD_CLICKHOUSE_MODEL_TRANSFERVERSIONREQUEST_H_

#include <alibabacloud/clickhouse/ClickhouseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Clickhouse {
namespace Model {
class ALIBABACLOUD_CLICKHOUSE_EXPORT TransferVersionRequest : public RpcServiceRequest {
public:
	TransferVersionRequest();
	~TransferVersionRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getSourceAccount() const;
	void setSourceAccount(const std::string &sourceAccount);
	std::string getTargetAccount() const;
	void setTargetAccount(const std::string &targetAccount);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getSourceClusterName() const;
	void setSourceClusterName(const std::string &sourceClusterName);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getSourcePassword() const;
	void setSourcePassword(const std::string &sourcePassword);
	std::string getDisableWriteWindows() const;
	void setDisableWriteWindows(const std::string &disableWriteWindows);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getDBClusterId() const;
	void setDBClusterId(const std::string &dBClusterId);
	std::string getTargetPassword() const;
	void setTargetPassword(const std::string &targetPassword);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getTargetDbClusterId() const;
	void setTargetDbClusterId(const std::string &targetDbClusterId);
	std::string getSourceShards() const;
	void setSourceShards(const std::string &sourceShards);

private:
	long resourceOwnerId_;
	int pageNumber_;
	std::string accessKeyId_;
	std::string sourceAccount_;
	std::string targetAccount_;
	std::string regionId_;
	std::string sourceClusterName_;
	int pageSize_;
	std::string sourcePassword_;
	std::string disableWriteWindows_;
	std::string resourceOwnerAccount_;
	std::string dBClusterId_;
	std::string targetPassword_;
	std::string ownerAccount_;
	long ownerId_;
	std::string targetDbClusterId_;
	std::string sourceShards_;
};
} // namespace Model
} // namespace Clickhouse
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CLICKHOUSE_MODEL_TRANSFERVERSIONREQUEST_H_
