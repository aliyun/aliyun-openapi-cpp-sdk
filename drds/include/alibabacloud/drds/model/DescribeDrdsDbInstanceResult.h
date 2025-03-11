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

#ifndef ALIBABACLOUD_DRDS_MODEL_DESCRIBEDRDSDBINSTANCERESULT_H_
#define ALIBABACLOUD_DRDS_MODEL_DESCRIBEDRDSDBINSTANCERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/drds/DrdsExport.h>

namespace AlibabaCloud
{
	namespace Drds
	{
		namespace Model
		{
			class ALIBABACLOUD_DRDS_EXPORT DescribeDrdsDbInstanceResult : public ServiceResult
			{
			public:
				struct DbInstance
				{
					struct ReadOnlyInstance
					{
						std::string dbInstType;
						std::string engineVersion;
						std::string dBInstanceStatus;
						int port;
						std::string payType;
						int versionAction;
						std::string connectUrl;
						int readWeight;
						std::string dBInstanceId;
						std::string networkType;
						std::string rdsInstType;
						std::string expireTime;
						std::string dmInstanceId;
						std::string remainDays;
						std::string engine;
					};
					std::string dbInstType;
					std::vector<ReadOnlyInstance> readOnlyInstances;
					std::string engineVersion;
					std::string dBInstanceStatus;
					int port;
					std::string payType;
					std::string connectUrl;
					int readWeight;
					std::string dBInstanceId;
					std::string networkType;
					std::string rdsInstType;
					std::string expireTime;
					std::string dmInstanceId;
					std::string remainDays;
					std::string engine;
				};


				DescribeDrdsDbInstanceResult();
				explicit DescribeDrdsDbInstanceResult(const std::string &payload);
				~DescribeDrdsDbInstanceResult();
				DbInstance getDbInstance()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				DbInstance dbInstance_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DRDS_MODEL_DESCRIBEDRDSDBINSTANCERESULT_H_