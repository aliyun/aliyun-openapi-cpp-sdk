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

#ifndef ALIBABACLOUD_EMR_MODEL_DUMPMETADATASOURCEFOROUTERREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_DUMPMETADATASOURCEFOROUTERREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/emr/EmrExport.h>

namespace AlibabaCloud
{
	namespace Emr
	{
		namespace Model
		{
			class ALIBABACLOUD_EMR_EXPORT DumpMetaDataSourceForOuterRequest : public RpcServiceRequest
			{

			public:
				DumpMetaDataSourceForOuterRequest();
				~DumpMetaDataSourceForOuterRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				bool getDumpAllDatabase()const;
				void setDumpAllDatabase(bool dumpAllDatabase);
				int getDumpLimit()const;
				void setDumpLimit(int dumpLimit);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				bool getDumpAllTable()const;
				void setDumpAllTable(bool dumpAllTable);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::vector<std::string> getPartitionValues()const;
				void setPartitionValues(const std::vector<std::string>& partitionValues);
				std::string getTableId()const;
				void setTableId(const std::string& tableId);
				std::string getDatabaseId()const;
				void setDatabaseId(const std::string& databaseId);
				bool getDumpAllPartition()const;
				void setDumpAllPartition(bool dumpAllPartition);

            private:
				long resourceOwnerId_;
				bool dumpAllDatabase_;
				int dumpLimit_;
				std::string clusterId_;
				std::string accessKeyId_;
				bool dumpAllTable_;
				std::string regionId_;
				std::vector<std::string> partitionValues_;
				std::string tableId_;
				std::string databaseId_;
				bool dumpAllPartition_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_DUMPMETADATASOURCEFOROUTERREQUEST_H_