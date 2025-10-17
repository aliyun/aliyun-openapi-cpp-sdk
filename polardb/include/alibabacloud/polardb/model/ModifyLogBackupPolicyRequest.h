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

#ifndef ALIBABACLOUD_POLARDB_MODEL_MODIFYLOGBACKUPPOLICYREQUEST_H_
#define ALIBABACLOUD_POLARDB_MODEL_MODIFYLOGBACKUPPOLICYREQUEST_H_

#include <alibabacloud/polardb/PolardbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Polardb {
namespace Model {
class ALIBABACLOUD_POLARDB_EXPORT ModifyLogBackupPolicyRequest : public RpcServiceRequest {
public:
	struct AdvancedLogPolicies {
		std::string actionType;
		std::string srcType;
		std::string policyId;
		std::string destRegion;
		std::string logRetentionValue;
		std::string logRetentionType;
		std::string srcRegion;
		std::string destType;
		int enableLogBackup;
	};
	ModifyLogBackupPolicyRequest();
	~ModifyLogBackupPolicyRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::vector<AdvancedLogPolicies> getAdvancedLogPolicies() const;
	void setAdvancedLogPolicies(const std::vector<AdvancedLogPolicies> &advancedLogPolicies);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getLogBackupAnotherRegionRegion() const;
	void setLogBackupAnotherRegionRegion(const std::string &logBackupAnotherRegionRegion);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getDBClusterId() const;
	void setDBClusterId(const std::string &dBClusterId);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getLogBackupAnotherRegionRetentionPeriod() const;
	void setLogBackupAnotherRegionRetentionPeriod(const std::string &logBackupAnotherRegionRetentionPeriod);
	std::string getLogBackupRetentionPeriod() const;
	void setLogBackupRetentionPeriod(const std::string &logBackupRetentionPeriod);

private:
	long resourceOwnerId_;
	std::vector<AdvancedLogPolicies> advancedLogPolicies_;
	std::string accessKeyId_;
	std::string logBackupAnotherRegionRegion_;
	std::string resourceOwnerAccount_;
	std::string dBClusterId_;
	std::string ownerAccount_;
	long ownerId_;
	std::string logBackupAnotherRegionRetentionPeriod_;
	std::string logBackupRetentionPeriod_;
};
} // namespace Model
} // namespace Polardb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_POLARDB_MODEL_MODIFYLOGBACKUPPOLICYREQUEST_H_
