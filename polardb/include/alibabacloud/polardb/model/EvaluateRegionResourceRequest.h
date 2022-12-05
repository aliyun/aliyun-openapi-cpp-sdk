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

#ifndef ALIBABACLOUD_POLARDB_MODEL_EVALUATEREGIONRESOURCEREQUEST_H_
#define ALIBABACLOUD_POLARDB_MODEL_EVALUATEREGIONRESOURCEREQUEST_H_

#include <alibabacloud/polardb/PolardbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Polardb {
namespace Model {
class ALIBABACLOUD_POLARDB_EXPORT EvaluateRegionResourceRequest : public RpcServiceRequest {
public:
	EvaluateRegionResourceRequest();
	~EvaluateRegionResourceRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getDBInstanceConnType() const;
	void setDBInstanceConnType(const std::string &dBInstanceConnType);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getDBNodeClass() const;
	void setDBNodeClass(const std::string &dBNodeClass);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getDispenseMode() const;
	void setDispenseMode(const std::string &dispenseMode);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getNeedMaxScaleLink() const;
	void setNeedMaxScaleLink(const std::string &needMaxScaleLink);
	std::string getDBType() const;
	void setDBType(const std::string &dBType);
	std::string getDBVersion() const;
	void setDBVersion(const std::string &dBVersion);
	std::string getSubDomain() const;
	void setSubDomain(const std::string &subDomain);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);

private:
	long resourceOwnerId_;
	std::string dBInstanceConnType_;
	std::string accessKeyId_;
	std::string resourceGroupId_;
	std::string dBNodeClass_;
	std::string regionId_;
	std::string dispenseMode_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string needMaxScaleLink_;
	std::string dBType_;
	std::string dBVersion_;
	std::string subDomain_;
	std::string zoneId_;
};
} // namespace Model
} // namespace Polardb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_POLARDB_MODEL_EVALUATEREGIONRESOURCEREQUEST_H_
