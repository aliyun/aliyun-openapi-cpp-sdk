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

#ifndef ALIBABACLOUD_GPDB_MODEL_DESCRIBERDSVPCSRESULT_H_
#define ALIBABACLOUD_GPDB_MODEL_DESCRIBERDSVPCSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/gpdb/GpdbExport.h>

namespace AlibabaCloud
{
	namespace Gpdb
	{
		namespace Model
		{
			class ALIBABACLOUD_GPDB_EXPORT DescribeRdsVpcsResult : public ServiceResult
			{
			public:
				struct Vpcs
				{
					struct VpcItem
					{
						struct VSwitch
						{
							std::string status;
							bool isDefault;
							std::string izNo;
							std::string gmtCreate;
							std::string vSwitchId;
							std::string gmtModified;
							std::string cidrBlock;
							std::string vSwitchName;
						};
						std::string status;
						bool isDefault;
						std::vector<VpcItem::VSwitch> vSwitchs;
						std::string regionNo;
						std::string gmtCreate;
						std::string vpcId;
						std::string gmtModified;
						std::string cidrBlock;
						std::string vpcName;
						std::string bid;
						std::string aliUid;
					};
					std::vector<VpcItem> vpc;
				};


				DescribeRdsVpcsResult();
				explicit DescribeRdsVpcsResult(const std::string &payload);
				~DescribeRdsVpcsResult();
				Vpcs getVpcs()const;

			protected:
				void parse(const std::string &payload);
			private:
				Vpcs vpcs_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GPDB_MODEL_DESCRIBERDSVPCSRESULT_H_