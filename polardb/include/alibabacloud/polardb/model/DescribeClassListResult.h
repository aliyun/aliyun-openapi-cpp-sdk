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

#ifndef ALIBABACLOUD_POLARDB_MODEL_DESCRIBECLASSLISTRESULT_H_
#define ALIBABACLOUD_POLARDB_MODEL_DESCRIBECLASSLISTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/polardb/PolardbExport.h>

namespace AlibabaCloud
{
	namespace Polardb
	{
		namespace Model
		{
			class ALIBABACLOUD_POLARDB_EXPORT DescribeClassListResult : public ServiceResult
			{
			public:
				struct ItemsItem
				{
					std::string classTypeLevel;
					std::string essdMaxStorageCapacity;
					std::string maxConnections;
					std::string pl2MaxIOPS;
					std::string pl3MaxIOPS;
					std::string cpu;
					std::string referencePrice;
					std::string maxIOPS;
					std::string classCode;
					std::string polarStoreMaxStorageCapacity;
					std::string psl4MaxIOPS;
					std::string classGroup;
					std::string psl5MaxIOPS;
					std::string pl1MaxIOPS;
					std::string referenceExtPrice;
					std::string memoryClass;
					std::string maxStorageCapacity;
				};


				DescribeClassListResult();
				explicit DescribeClassListResult(const std::string &payload);
				~DescribeClassListResult();
				std::vector<ItemsItem> getItems()const;
				std::string getRegionId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<ItemsItem> items_;
				std::string regionId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDB_MODEL_DESCRIBECLASSLISTRESULT_H_