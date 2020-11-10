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

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/rds/RdsExport.h>

namespace AlibabaCloud
{
	namespace Rds
	{
		namespace Model
		{
			class ALIBABACLOUD_RDS_EXPORT MigrateConnectionToOtherZoneRequest : public RpcServiceRequest
			{

			public:
				MigrateConnectionToOtherZoneRequest();
				~MigrateConnectionToOtherZoneRequest();

				std::string getConnectionString()const;
				void setConnectionString(const std::string& connectionString);
				std::string getZoneId()const;
				void setZoneId(const std::string& zoneId);
				std::string getDBInstanceId()const;
				void setDBInstanceId(const std::string& dBInstanceId);

            private:
				std::string connectionString_;
				std::string zoneId_;
				std::string dBInstanceId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_MIGRATECONNECTIONTOOTHERZONEREQUEST_H_