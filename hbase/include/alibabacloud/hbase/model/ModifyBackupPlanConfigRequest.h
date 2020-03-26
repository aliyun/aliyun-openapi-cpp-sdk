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

#ifndef ALIBABACLOUD_HBASE_MODEL_MODIFYBACKUPPLANCONFIGREQUEST_H_
#define ALIBABACLOUD_HBASE_MODEL_MODIFYBACKUPPLANCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/hbase/HBaseExport.h>

namespace AlibabaCloud
{
	namespace HBase
	{
		namespace Model
		{
			class ALIBABACLOUD_HBASE_EXPORT ModifyBackupPlanConfigRequest : public RpcServiceRequest
			{

			public:
				ModifyBackupPlanConfigRequest();
				~ModifyBackupPlanConfigRequest();

				std::string getFullBackupCycle()const;
				void setFullBackupCycle(const std::string& fullBackupCycle);
				std::string getTables()const;
				void setTables(const std::string& tables);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getMinHFileBackupCount()const;
				void setMinHFileBackupCount(const std::string& minHFileBackupCount);
				std::string getNextFullBackupDate()const;
				void setNextFullBackupDate(const std::string& nextFullBackupDate);

            private:
				std::string fullBackupCycle_;
				std::string tables_;
				std::string clusterId_;
				std::string minHFileBackupCount_;
				std::string nextFullBackupDate_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_HBASE_MODEL_MODIFYBACKUPPLANCONFIGREQUEST_H_