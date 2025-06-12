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

#ifndef ALIBABACLOUD_CLICKHOUSE_MODEL_MODIFYDBCLUSTERREQUEST_H_
#define ALIBABACLOUD_CLICKHOUSE_MODEL_MODIFYDBCLUSTERREQUEST_H_

#include <alibabacloud/clickhouse/ClickhouseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Clickhouse {
namespace Model {
class ALIBABACLOUD_CLICKHOUSE_EXPORT ModifyDBClusterRequest : public RpcServiceRequest {
public:
	ModifyDBClusterRequest();
	~ModifyDBClusterRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getDbNodeStorageType() const;
	void setDbNodeStorageType(const std::string &dbNodeStorageType);
	std::string getDisableWriteWindows() const;
	void setDisableWriteWindows(const std::string &disableWriteWindows);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getDBClusterId() const;
	void setDBClusterId(const std::string &dBClusterId);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getDBClusterClass() const;
	void setDBClusterClass(const std::string &dBClusterClass);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getDBNodeGroupCount() const;
	void setDBNodeGroupCount(const std::string &dBNodeGroupCount);
	std::string getDBNodeStorage() const;
	void setDBNodeStorage(const std::string &dBNodeStorage);

private:
	long resourceOwnerId_;
	std::string accessKeyId_;
	std::string regionId_;
	std::string dbNodeStorageType_;
	std::string disableWriteWindows_;
	std::string resourceOwnerAccount_;
	std::string dBClusterId_;
	std::string ownerAccount_;
	std::string dBClusterClass_;
	long ownerId_;
	std::string dBNodeGroupCount_;
	std::string dBNodeStorage_;
};
} // namespace Model
} // namespace Clickhouse
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CLICKHOUSE_MODEL_MODIFYDBCLUSTERREQUEST_H_
