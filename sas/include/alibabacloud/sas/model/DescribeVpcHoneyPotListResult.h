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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBEVPCHONEYPOTLISTRESULT_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBEVPCHONEYPOTLISTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sas/SasExport.h>

namespace AlibabaCloud
{
	namespace Sas
	{
		namespace Model
		{
			class ALIBABACLOUD_SAS_EXPORT DescribeVpcHoneyPotListResult : public ServiceResult
			{
			public:
				struct PageInfo
				{
					int totalCount;
					int pageSize;
					int currentPage;
					int count;
				};
				struct VpcHoneyPotDTO
				{
					struct VpcSwitchInfo
					{
						std::string vpcSwitchName;
						std::string zoneId;
						std::string vpcSwitchId;
					};
					std::vector<VpcHoneyPotDTO::VpcSwitchInfo> vpcSwitchIdList;
					std::string honeyPotEcsInstanceStatus;
					std::string vpcId;
					std::string honeyPotVpcSwitchId;
					bool honeyPotExistence;
					std::string honeyPotInstanceStatus;
					std::string vpcStatus;
					long createTime;
					std::string honeyPotEniInstanceId;
					std::string cidrBlock;
					std::string vpcRegionId;
					std::string vpcName;
				};


				DescribeVpcHoneyPotListResult();
				explicit DescribeVpcHoneyPotListResult(const std::string &payload);
				~DescribeVpcHoneyPotListResult();
				std::vector<VpcHoneyPotDTO> getVpcHoneyPotDTOList()const;
				PageInfo getPageInfo()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<VpcHoneyPotDTO> vpcHoneyPotDTOList_;
				PageInfo pageInfo_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBEVPCHONEYPOTLISTRESULT_H_