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

#ifndef ALIBABACLOUD_POLARDB_MODEL_DESCRIBEDBCLUSTERIPARRAYLISTRESULT_H_
#define ALIBABACLOUD_POLARDB_MODEL_DESCRIBEDBCLUSTERIPARRAYLISTRESULT_H_

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
			class ALIBABACLOUD_POLARDB_EXPORT DescribeDBClusterIPArrayListResult : public ServiceResult
			{
			public:
				struct DBClusterIPArray
				{
					std::string securityIPList;
					std::string dBClusterIPArrayName;
					std::string dBClusterIPArrayAttribute;
				};


				DescribeDBClusterIPArrayListResult();
				explicit DescribeDBClusterIPArrayListResult(const std::string &payload);
				~DescribeDBClusterIPArrayListResult();
				std::vector<DBClusterIPArray> getItems()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<DBClusterIPArray> items_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDB_MODEL_DESCRIBEDBCLUSTERIPARRAYLISTRESULT_H_