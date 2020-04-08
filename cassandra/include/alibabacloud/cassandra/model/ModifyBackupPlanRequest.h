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

#ifndef ALIBABACLOUD_CASSANDRA_MODEL_MODIFYBACKUPPLANREQUEST_H_
#define ALIBABACLOUD_CASSANDRA_MODEL_MODIFYBACKUPPLANREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cassandra/CassandraExport.h>

namespace AlibabaCloud
{
	namespace Cassandra
	{
		namespace Model
		{
			class ALIBABACLOUD_CASSANDRA_EXPORT ModifyBackupPlanRequest : public RpcServiceRequest
			{

			public:
				ModifyBackupPlanRequest();
				~ModifyBackupPlanRequest();

				int getRetentionPeriod()const;
				void setRetentionPeriod(int retentionPeriod);
				std::string getDataCenterId()const;
				void setDataCenterId(const std::string& dataCenterId);
				bool getActive()const;
				void setActive(bool active);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getBackupTime()const;
				void setBackupTime(const std::string& backupTime);
				std::string getBackupPeriod()const;
				void setBackupPeriod(const std::string& backupPeriod);

            private:
				int retentionPeriod_;
				std::string dataCenterId_;
				bool active_;
				std::string clusterId_;
				std::string backupTime_;
				std::string backupPeriod_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CASSANDRA_MODEL_MODIFYBACKUPPLANREQUEST_H_