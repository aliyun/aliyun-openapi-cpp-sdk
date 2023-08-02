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

#ifndef ALIBABACLOUD_GPDB_MODEL_UPGRADEDBINSTANCEREQUEST_H_
#define ALIBABACLOUD_GPDB_MODEL_UPGRADEDBINSTANCEREQUEST_H_

#include <alibabacloud/gpdb/GpdbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Gpdb {
namespace Model {
class ALIBABACLOUD_GPDB_EXPORT UpgradeDBInstanceRequest : public RpcServiceRequest {
public:
	UpgradeDBInstanceRequest();
	~UpgradeDBInstanceRequest();
	std::string getInstanceSpec() const;
	void setInstanceSpec(const std::string &instanceSpec);
	std::string getStorageSize() const;
	void setStorageSize(const std::string &storageSize);
	std::string getSegStorageType() const;
	void setSegStorageType(const std::string &segStorageType);
	std::string getMasterNodeNum() const;
	void setMasterNodeNum(const std::string &masterNodeNum);
	long getUpgradeType() const;
	void setUpgradeType(long upgradeType);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getSegNodeNum() const;
	void setSegNodeNum(const std::string &segNodeNum);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getDBInstanceId() const;
	void setDBInstanceId(const std::string &dBInstanceId);
	std::string getDBInstanceGroupCount() const;
	void setDBInstanceGroupCount(const std::string &dBInstanceGroupCount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getSegDiskPerformanceLevel() const;
	void setSegDiskPerformanceLevel(const std::string &segDiskPerformanceLevel);
	std::string getDBInstanceClass() const;
	void setDBInstanceClass(const std::string &dBInstanceClass);
	std::string getPayType() const;
	void setPayType(const std::string &payType);

private:
	std::string instanceSpec_;
	std::string storageSize_;
	std::string segStorageType_;
	std::string masterNodeNum_;
	long upgradeType_;
	std::string accessKeyId_;
	std::string resourceGroupId_;
	std::string segNodeNum_;
	std::string regionId_;
	std::string dBInstanceId_;
	std::string dBInstanceGroupCount_;
	long ownerId_;
	std::string segDiskPerformanceLevel_;
	std::string dBInstanceClass_;
	std::string payType_;
};
} // namespace Model
} // namespace Gpdb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_GPDB_MODEL_UPGRADEDBINSTANCEREQUEST_H_
