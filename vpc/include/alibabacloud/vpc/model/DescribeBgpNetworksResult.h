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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBEBGPNETWORKSRESULT_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBEBGPNETWORKSRESULT_H_

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
			class ALIBABACLOUD_VPC_EXPORT DescribeBgpNetworksResult : public ServiceResult
			{
			public:
				struct BgpNetwork
				{
					std::string status;
					std::string dstCidrBlock;
					std::string vpcId;
					std::string ipVersion;
					std::string routerId;
				};


				DescribeBgpNetworksResult();
				explicit DescribeBgpNetworksResult(const std::string &payload);
				~DescribeBgpNetworksResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<BgpNetwork> getBgpNetworks()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<BgpNetwork> bgpNetworks_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBEBGPNETWORKSRESULT_H_