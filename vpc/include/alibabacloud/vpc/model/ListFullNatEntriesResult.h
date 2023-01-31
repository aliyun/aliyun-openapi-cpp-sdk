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

#ifndef ALIBABACLOUD_VPC_MODEL_LISTFULLNATENTRIESRESULT_H_
#define ALIBABACLOUD_VPC_MODEL_LISTFULLNATENTRIESRESULT_H_

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
			class ALIBABACLOUD_VPC_EXPORT ListFullNatEntriesResult : public ServiceResult
			{
			public:
				struct FullNatEntry
				{
					std::string accessIp;
					std::string fullNatTableId;
					std::string networkInterfaceType;
					std::string fullNatEntryName;
					std::string natIpPort;
					std::string fullNatEntryStatus;
					std::string networkInterfaceId;
					std::string natIp;
					std::string fullNatEntryDescription;
					std::string creationTime;
					std::string ipProtocol;
					std::string accessPort;
					std::string fullNatEntryId;
				};


				ListFullNatEntriesResult();
				explicit ListFullNatEntriesResult(const std::string &payload);
				~ListFullNatEntriesResult();
				long getTotalCount()const;
				std::string getFullNatTableId()const;
				std::string getNextToken()const;
				long getMaxResults()const;
				std::vector<FullNatEntry> getFullNatEntries()const;
				std::string getNatGatewayId()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				std::string fullNatTableId_;
				std::string nextToken_;
				long maxResults_;
				std::vector<FullNatEntry> fullNatEntries_;
				std::string natGatewayId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_LISTFULLNATENTRIESRESULT_H_