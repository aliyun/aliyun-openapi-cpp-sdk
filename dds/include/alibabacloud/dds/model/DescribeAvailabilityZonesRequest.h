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

#ifndef ALIBABACLOUD_DDS_MODEL_DESCRIBEAVAILABILITYZONESREQUEST_H_
#define ALIBABACLOUD_DDS_MODEL_DESCRIBEAVAILABILITYZONESREQUEST_H_

#include <alibabacloud/dds/DdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dds {
namespace Model {
class ALIBABACLOUD_DDS_EXPORT DescribeAvailabilityZonesRequest : public RpcServiceRequest {
public:
	DescribeAvailabilityZonesRequest();
	~DescribeAvailabilityZonesRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getEngineVersion() const;
	void setEngineVersion(const std::string &engineVersion);
	std::string getStorageType() const;
	void setStorageType(const std::string &storageType);
	std::string getReplicationFactor() const;
	void setReplicationFactor(const std::string &replicationFactor);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getExcludeZoneId() const;
	void setExcludeZoneId(const std::string &excludeZoneId);
	std::string getInstanceType() const;
	void setInstanceType(const std::string &instanceType);
	std::string getExcludeSecondaryZoneId() const;
	void setExcludeSecondaryZoneId(const std::string &excludeSecondaryZoneId);
	std::string getInstanceChargeType() const;
	void setInstanceChargeType(const std::string &instanceChargeType);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getLevel() const;
	void setLevel(const std::string &level);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getMongoType() const;
	void setMongoType(const std::string &mongoType);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getDBInstanceClass() const;
	void setDBInstanceClass(const std::string &dBInstanceClass);
	std::string getStorageSupport() const;
	void setStorageSupport(const std::string &storageSupport);
	std::string getDbType() const;
	void setDbType(const std::string &dbType);
	std::string getAcceptLanguage() const;
	void setAcceptLanguage(const std::string &acceptLanguage);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);

private:
	long resourceOwnerId_;
	std::string engineVersion_;
	std::string storageType_;
	std::string replicationFactor_;
	std::string accessKeyId_;
	std::string resourceGroupId_;
	std::string regionId_;
	std::string excludeZoneId_;
	std::string instanceType_;
	std::string excludeSecondaryZoneId_;
	std::string instanceChargeType_;
	std::string resourceOwnerAccount_;
	std::string level_;
	std::string ownerAccount_;
	std::string mongoType_;
	long ownerId_;
	std::string dBInstanceClass_;
	std::string storageSupport_;
	std::string dbType_;
	std::string acceptLanguage_;
	std::string zoneId_;
};
} // namespace Model
} // namespace Dds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DDS_MODEL_DESCRIBEAVAILABILITYZONESREQUEST_H_
