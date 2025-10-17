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

#ifndef ALIBABACLOUD_POLARDB_MODEL_DESCRIBEVSWITCHLISTRESULT_H_
#define ALIBABACLOUD_POLARDB_MODEL_DESCRIBEVSWITCHLISTRESULT_H_

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
			class ALIBABACLOUD_POLARDB_EXPORT DescribeVSwitchListResult : public ServiceResult
			{
			public:
				struct VSwitch
				{
					bool isDefault;
					std::string status;
					std::string regionNo;
					std::string description;
					std::string resourceGroupId;
					std::string vSwitchId;
					long availableIpAddressCount;
					std::string cidrBlock;
					std::string izNo;
					std::string vpcId;
					std::string ownerId;
					std::string vSwitchName;
					std::string shareType;
				};


				DescribeVSwitchListResult();
				explicit DescribeVSwitchListResult(const std::string &payload);
				~DescribeVSwitchListResult();
				std::vector<VSwitch> getVSwitchs()const;
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<VSwitch> vSwitchs_;
				int totalCount_;
				int pageSize_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDB_MODEL_DESCRIBEVSWITCHLISTRESULT_H_