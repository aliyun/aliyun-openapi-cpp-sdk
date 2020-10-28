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

#ifndef ALIBABACLOUD_DRDS_MODEL_PRECHECKMODIFYTABLESHARDINGKEYPARAMREQUEST_H_
#define ALIBABACLOUD_DRDS_MODEL_PRECHECKMODIFYTABLESHARDINGKEYPARAMREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/drds/DrdsExport.h>

namespace AlibabaCloud
{
	namespace Drds
	{
		namespace Model
		{
			class ALIBABACLOUD_DRDS_EXPORT PreCheckModifyTableShardingKeyParamRequest : public RpcServiceRequest
			{

			public:
				PreCheckModifyTableShardingKeyParamRequest();
				~PreCheckModifyTableShardingKeyParamRequest();

				std::string getTbPartitions()const;
				void setTbPartitions(const std::string& tbPartitions);
				bool getIsShard()const;
				void setIsShard(bool isShard);
				std::string getTbShardingFunction()const;
				void setTbShardingFunction(const std::string& tbShardingFunction);
				std::string getDbShardingColumnList()const;
				void setDbShardingColumnList(const std::string& dbShardingColumnList);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getTbComputeLength()const;
				void setTbComputeLength(const std::string& tbComputeLength);
				std::string getTbRightShiftOffset()const;
				void setTbRightShiftOffset(const std::string& tbRightShiftOffset);
				std::string getDbComputeLength()const;
				void setDbComputeLength(const std::string& dbComputeLength);
				std::string getSrcTableName()const;
				void setSrcTableName(const std::string& srcTableName);
				int getDbRightShiftOffset()const;
				void setDbRightShiftOffset(int dbRightShiftOffset);
				std::string getTargetTableName()const;
				void setTargetTableName(const std::string& targetTableName);
				std::string getDrdsInstanceId()const;
				void setDrdsInstanceId(const std::string& drdsInstanceId);
				std::string getDbShardingFunction()const;
				void setDbShardingFunction(const std::string& dbShardingFunction);
				std::string getDbName()const;
				void setDbName(const std::string& dbName);
				std::string getTbShardingColumnList()const;
				void setTbShardingColumnList(const std::string& tbShardingColumnList);

            private:
				std::string tbPartitions_;
				bool isShard_;
				std::string tbShardingFunction_;
				std::string dbShardingColumnList_;
				std::string regionId_;
				std::string tbComputeLength_;
				std::string tbRightShiftOffset_;
				std::string dbComputeLength_;
				std::string srcTableName_;
				int dbRightShiftOffset_;
				std::string targetTableName_;
				std::string drdsInstanceId_;
				std::string dbShardingFunction_;
				std::string dbName_;
				std::string tbShardingColumnList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DRDS_MODEL_PRECHECKMODIFYTABLESHARDINGKEYPARAMREQUEST_H_