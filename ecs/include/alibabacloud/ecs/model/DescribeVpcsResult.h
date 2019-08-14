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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEVPCSRESULT_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEVPCSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ecs/EcsExport.h>

namespace AlibabaCloud
{
	namespace Ecs
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_EXPORT DescribeVpcsResult : public ServiceResult
			{
			public:
				struct Vpc
				{
					std::string status;
					std::string vRouterId;
					bool isDefault;
					std::string description;
					std::string vpcId;
					std::vector<std::string> vSwitchIds;
					std::string creationTime;
					std::string cidrBlock;
					std::string vpcName;
					std::string regionId;
					std::vector<std::string> userCidrs;
				};


				DescribeVpcsResult();
				explicit DescribeVpcsResult(const std::string &payload);
				~DescribeVpcsResult();
				std::vector<Vpc> getVpcs()const;
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Vpc> vpcs_;
				int totalCount_;
				int pageSize_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEVPCSRESULT_H_