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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBEPUBLICIPADDRESSRESULT_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBEPUBLICIPADDRESSRESULT_H_

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
			class ALIBABACLOUD_VPC_EXPORT DescribePublicIpAddressResult : public ServiceResult
			{
			public:


				DescribePublicIpAddressResult();
				explicit DescribePublicIpAddressResult(const std::string &payload);
				~DescribePublicIpAddressResult();
				std::vector<std::string> getIpRange()const;
				std::vector<std::string> getPublicIpAddress()const;
				int getTotalCount()const;
				std::string getMessage()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::string getRegionId()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<std::string> ipRange_;
				std::vector<std::string> publicIpAddress_;
				int totalCount_;
				std::string message_;
				int pageSize_;
				int pageNumber_;
				std::string regionId_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBEPUBLICIPADDRESSRESULT_H_