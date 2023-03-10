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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBEHAVIPSRESULT_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBEHAVIPSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vpc/VpcExport.h>

namespace AlibabaCloud
{
	namespace Vpc
	{
		namespace Model
		{
			class ALIBABACLOUD_VPC_EXPORT DescribeHaVipsResult : public ServiceResult
			{
			public:
				struct HaVip
				{
					struct Tag
					{
						std::string value;
						std::string key;
					};
					std::string status;
					std::string description;
					std::string resourceGroupId;
					std::vector<std::string> associatedEipAddresses;
					std::string createTime;
					std::string vSwitchId;
					std::string haVipId;
					std::string name;
					std::vector<std::string> associatedInstances;
					std::string vpcId;
					std::string masterInstanceId;
					std::string chargeType;
					std::string ipAddress;
					std::string regionId;
					std::string associatedInstanceType;
					std::vector<HaVip::Tag> tags;
				};


				DescribeHaVipsResult();
				explicit DescribeHaVipsResult(const std::string &payload);
				~DescribeHaVipsResult();
				int getTotalCount()const;
				std::vector<HaVip> getHaVips()const;
				int getPageSize()const;
				int getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::vector<HaVip> haVips_;
				int pageSize_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBEHAVIPSRESULT_H_