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

#ifndef ALIBABACLOUD_POLARDB_MODEL_MODIFYDBCLUSTERREQUEST_H_
#define ALIBABACLOUD_POLARDB_MODEL_MODIFYDBCLUSTERREQUEST_H_

#include <alibabacloud/polardb/PolardbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Polardb {
namespace Model {
class ALIBABACLOUD_POLARDB_EXPORT ModifyDBClusterRequest : public RpcServiceRequest {
public:
	ModifyDBClusterRequest();
	~ModifyDBClusterRequest();
	std::string getModifyRowCompression() const;
	void setModifyRowCompression(const std::string &modifyRowCompression);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getTableMeta() const;
	void setTableMeta(const std::string &tableMeta);
	std::string getStandbyHAMode() const;
	void setStandbyHAMode(const std::string &standbyHAMode);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getDBClusterId() const;
	void setDBClusterId(const std::string &dBClusterId);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getDBNodeCrashList() const;
	void setDBNodeCrashList(const std::string &dBNodeCrashList);
	std::string getFaultSimulateMode() const;
	void setFaultSimulateMode(const std::string &faultSimulateMode);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getCompressStorage() const;
	void setCompressStorage(const std::string &compressStorage);
	long getStorageUpperBound() const;
	void setStorageUpperBound(long storageUpperBound);
	std::string getPreferredSimulateStartTime() const;
	void setPreferredSimulateStartTime(const std::string &preferredSimulateStartTime);
	std::string getImciAutoIndex() const;
	void setImciAutoIndex(const std::string &imciAutoIndex);
	std::string getStorageAutoScale() const;
	void setStorageAutoScale(const std::string &storageAutoScale);
	std::string getFaultInjectionType() const;
	void setFaultInjectionType(const std::string &faultInjectionType);
	std::string getDataSyncMode() const;
	void setDataSyncMode(const std::string &dataSyncMode);

private:
	std::string modifyRowCompression_;
	long resourceOwnerId_;
	std::string accessKeyId_;
	std::string tableMeta_;
	std::string standbyHAMode_;
	std::string resourceOwnerAccount_;
	std::string dBClusterId_;
	std::string ownerAccount_;
	std::string dBNodeCrashList_;
	std::string faultSimulateMode_;
	long ownerId_;
	std::string compressStorage_;
	long storageUpperBound_;
	std::string preferredSimulateStartTime_;
	std::string imciAutoIndex_;
	std::string storageAutoScale_;
	std::string faultInjectionType_;
	std::string dataSyncMode_;
};
} // namespace Model
} // namespace Polardb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_POLARDB_MODEL_MODIFYDBCLUSTERREQUEST_H_
