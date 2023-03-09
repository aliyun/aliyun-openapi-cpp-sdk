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

#ifndef ALIBABACLOUD_ADB_MODEL_MODIFYDBCLUSTERREQUEST_H_
#define ALIBABACLOUD_ADB_MODEL_MODIFYDBCLUSTERREQUEST_H_

#include <alibabacloud/adb/AdbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Adb {
namespace Model {
class ALIBABACLOUD_ADB_EXPORT ModifyDBClusterRequest : public RpcServiceRequest {
public:
	ModifyDBClusterRequest();
	~ModifyDBClusterRequest();
	std::string getElasticIOResourceSize() const;
	void setElasticIOResourceSize(const std::string &elasticIOResourceSize);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getMode() const;
	void setMode(const std::string &mode);
	std::string getStorageResource() const;
	void setStorageResource(const std::string &storageResource);
	std::string getDBNodeClass() const;
	void setDBNodeClass(const std::string &dBNodeClass);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getDBClusterCategory() const;
	void setDBClusterCategory(const std::string &dBClusterCategory);
	std::string getDiskPerformanceLevel() const;
	void setDiskPerformanceLevel(const std::string &diskPerformanceLevel);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getDBClusterId() const;
	void setDBClusterId(const std::string &dBClusterId);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getDBNodeGroupCount() const;
	void setDBNodeGroupCount(const std::string &dBNodeGroupCount);
	std::string getDBNodeStorage() const;
	void setDBNodeStorage(const std::string &dBNodeStorage);
	std::string getExecutorCount() const;
	void setExecutorCount(const std::string &executorCount);
	std::string getModifyType() const;
	void setModifyType(const std::string &modifyType);
	std::string getComputeResource() const;
	void setComputeResource(const std::string &computeResource);
	int getElasticIOResource() const;
	void setElasticIOResource(int elasticIOResource);

private:
	std::string elasticIOResourceSize_;
	long resourceOwnerId_;
	std::string accessKeyId_;
	std::string mode_;
	std::string storageResource_;
	std::string dBNodeClass_;
	std::string regionId_;
	std::string dBClusterCategory_;
	std::string diskPerformanceLevel_;
	std::string resourceOwnerAccount_;
	std::string dBClusterId_;
	std::string ownerAccount_;
	long ownerId_;
	std::string dBNodeGroupCount_;
	std::string dBNodeStorage_;
	std::string executorCount_;
	std::string modifyType_;
	std::string computeResource_;
	int elasticIOResource_;
};
} // namespace Model
} // namespace Adb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ADB_MODEL_MODIFYDBCLUSTERREQUEST_H_
