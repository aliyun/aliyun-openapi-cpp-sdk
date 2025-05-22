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

#ifndef ALIBABACLOUD_RDS_MODEL_MIGRATECONNECTIONTOOTHERZONEREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_MIGRATECONNECTIONTOOTHERZONEREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT MigrateConnectionToOtherZoneRequest : public RpcServiceRequest {
public:
	MigrateConnectionToOtherZoneRequest();
	~MigrateConnectionToOtherZoneRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getConnectionString() const;
	void setConnectionString(const std::string &connectionString);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getDBInstanceId() const;
	void setDBInstanceId(const std::string &dBInstanceId);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);

private:
	long resourceOwnerId_;
	std::string connectionString_;
	std::string regionId_;
	std::string dBInstanceId_;
	long ownerId_;
	std::string zoneId_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_MIGRATECONNECTIONTOOTHERZONEREQUEST_H_
