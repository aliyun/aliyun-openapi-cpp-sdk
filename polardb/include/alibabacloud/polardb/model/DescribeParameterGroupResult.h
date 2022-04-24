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

#ifndef ALIBABACLOUD_POLARDB_MODEL_DESCRIBEPARAMETERGROUPRESULT_H_
#define ALIBABACLOUD_POLARDB_MODEL_DESCRIBEPARAMETERGROUPRESULT_H_

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
			class ALIBABACLOUD_POLARDB_EXPORT DescribeParameterGroupResult : public ServiceResult
			{
			public:
				struct ParameterGroupItem
				{
					struct ParameterDetailItem
					{
						std::string paramValue;
						std::string paramName;
					};
					std::vector<ParameterGroupItem::ParameterDetailItem> parameterDetail;
					std::string dBVersion;
					std::string parameterGroupId;
					std::string parameterGroupName;
					std::string forceRestart;
					std::string parameterGroupType;
					std::string parameterGroupDesc;
					std::string createTime;
					int parameterCounts;
					std::string dBType;
				};


				DescribeParameterGroupResult();
				explicit DescribeParameterGroupResult(const std::string &payload);
				~DescribeParameterGroupResult();
				std::vector<ParameterGroupItem> getParameterGroup()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<ParameterGroupItem> parameterGroup_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDB_MODEL_DESCRIBEPARAMETERGROUPRESULT_H_