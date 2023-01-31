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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBEIPV6TRANSLATORSRESULT_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBEIPV6TRANSLATORSRESULT_H_

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
			class ALIBABACLOUD_VPC_EXPORT DescribeIPv6TranslatorsResult : public ServiceResult
			{
			public:
				struct Ipv6Translator
				{
					std::string status;
					std::string description;
					long endTime;
					std::string availableBandwidth;
					long createTime;
					std::vector<std::string> ipv6TranslatorEntryIds;
					std::string payType;
					std::string ipv6TranslatorId;
					std::string businessStatus;
					std::string name;
					std::string allocateIpv6Addr;
					std::string allocateIpv4Addr;
					int bandwidth;
					std::string regionId;
					std::string spec;
				};


				DescribeIPv6TranslatorsResult();
				explicit DescribeIPv6TranslatorsResult(const std::string &payload);
				~DescribeIPv6TranslatorsResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<Ipv6Translator> getIpv6Translators()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<Ipv6Translator> ipv6Translators_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBEIPV6TRANSLATORSRESULT_H_