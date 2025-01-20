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

#ifndef ALIBABACLOUD_POLARDB_MODEL_MODIFYDBCLUSTERSTORAGEPERFORMANCEREQUEST_H_
#define ALIBABACLOUD_POLARDB_MODEL_MODIFYDBCLUSTERSTORAGEPERFORMANCEREQUEST_H_

#include <alibabacloud/polardb/PolardbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Polardb {
namespace Model {
class ALIBABACLOUD_POLARDB_EXPORT ModifyDBClusterStoragePerformanceRequest : public RpcServiceRequest {
public:
	ModifyDBClusterStoragePerformanceRequest();
	~ModifyDBClusterStoragePerformanceRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getStorageType() const;
	void setStorageType(const std::string &storageType);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getDBClusterId() const;
	void setDBClusterId(const std::string &dBClusterId);
	std::string getBurstingEnabled() const;
	void setBurstingEnabled(const std::string &burstingEnabled);
	int getProvisionedIops() const;
	void setProvisionedIops(int provisionedIops);
	std::string getModifyType() const;
	void setModifyType(const std::string &modifyType);

private:
	long resourceOwnerId_;
	std::string clientToken_;
	std::string storageType_;
	std::string accessKeyId_;
	std::string dBClusterId_;
	std::string burstingEnabled_;
	int provisionedIops_;
	std::string modifyType_;
};
} // namespace Model
} // namespace Polardb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_POLARDB_MODEL_MODIFYDBCLUSTERSTORAGEPERFORMANCEREQUEST_H_
