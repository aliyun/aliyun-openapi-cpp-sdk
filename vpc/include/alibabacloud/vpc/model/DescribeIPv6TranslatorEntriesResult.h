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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBEIPV6TRANSLATORENTRIESRESULT_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBEIPV6TRANSLATORENTRIESRESULT_H_

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
			class ALIBABACLOUD_VPC_EXPORT DescribeIPv6TranslatorEntriesResult : public ServiceResult
			{
			public:
				struct Ipv6TranslatorEntry
				{
					std::string entryName;
					int allocateIpv6Port;
					std::string backendIpv4Port;
					std::string aclId;
					std::string ipv6TranslatorEntryId;
					std::string ipv6TranslatorId;
					std::string entryDescription;
					std::string transProtocol;
					std::string aclStatus;
					std::string allocateIpv6Addr;
					std::string entryBandwidth;
					std::string backendIpv4Addr;
					std::string aclType;
					std::string entryStatus;
					std::string regionId;
				};


				DescribeIPv6TranslatorEntriesResult();
				explicit DescribeIPv6TranslatorEntriesResult(const std::string &payload);
				~DescribeIPv6TranslatorEntriesResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<Ipv6TranslatorEntry> getIpv6TranslatorEntries()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<Ipv6TranslatorEntry> ipv6TranslatorEntries_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBEIPV6TRANSLATORENTRIESRESULT_H_