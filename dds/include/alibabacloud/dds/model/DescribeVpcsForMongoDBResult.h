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

#ifndef ALIBABACLOUD_DDS_MODEL_DESCRIBEVPCSFORMONGODBRESULT_H_
#define ALIBABACLOUD_DDS_MODEL_DESCRIBEVPCSFORMONGODBRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dds/DdsExport.h>

namespace AlibabaCloud
{
	namespace Dds
	{
		namespace Model
		{
			class ALIBABACLOUD_DDS_EXPORT DescribeVpcsForMongoDBResult : public ServiceResult
			{
			public:
				struct Vpc
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
					std::vector<Vpc::VSwitch> vSwitchs;
					std::string regionNo;
					std::string gmtCreate;
					std::string vpcId;
					std::string gmtModified;
					std::string cidrBlock;
					std::string vpcName;
					std::string bid;
					std::string aliUid;
				};


				DescribeVpcsForMongoDBResult();
				explicit DescribeVpcsForMongoDBResult(const std::string &payload);
				~DescribeVpcsForMongoDBResult();
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
#endif // !ALIBABACLOUD_DDS_MODEL_DESCRIBEVPCSFORMONGODBRESULT_H_