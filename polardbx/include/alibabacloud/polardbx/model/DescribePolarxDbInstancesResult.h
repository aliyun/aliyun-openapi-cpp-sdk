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

#ifndef ALIBABACLOUD_POLARDBX_MODEL_DESCRIBEPOLARXDBINSTANCESRESULT_H_
#define ALIBABACLOUD_POLARDBX_MODEL_DESCRIBEPOLARXDBINSTANCESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/polardbx/PolardbxExport.h>

namespace AlibabaCloud
{
	namespace Polardbx
	{
		namespace Model
		{
			class ALIBABACLOUD_POLARDBX_EXPORT DescribePolarxDbInstancesResult : public ServiceResult
			{
			public:
				struct DbInstance
				{
					std::string status;
					std::string description;
					std::string zoneId;
					int nodeCount;
					std::string vPCId;
					std::string createTime;
					std::string payType;
					std::string dBType;
					std::string lockMode;
					int storageUsed;
					std::string statusDesc;
					std::string nodeClass;
					std::string dBVersion;
					std::string dBInstanceId;
					std::string network;
					std::string regionId;
					std::string expireTime;
					std::string lockReason;
					std::string engine;
				};


				DescribePolarxDbInstancesResult();
				explicit DescribePolarxDbInstancesResult(const std::string &payload);
				~DescribePolarxDbInstancesResult();
				std::string getPageSize()const;
				std::string getPageNumber()const;
				std::string getTotal()const;
				std::vector<DbInstance> getDbInstances()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string pageSize_;
				std::string pageNumber_;
				std::string total_;
				std::vector<DbInstance> dbInstances_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDBX_MODEL_DESCRIBEPOLARXDBINSTANCESRESULT_H_