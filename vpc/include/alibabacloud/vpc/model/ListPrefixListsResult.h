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

#ifndef ALIBABACLOUD_VPC_MODEL_LISTPREFIXLISTSRESULT_H_
#define ALIBABACLOUD_VPC_MODEL_LISTPREFIXLISTSRESULT_H_

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
			class ALIBABACLOUD_VPC_EXPORT ListPrefixListsResult : public ServiceResult
			{
			public:
				struct PrefixList
				{
					struct Tag
					{
						std::string value;
						std::string key;
					};
					std::string status;
					int maxEntries;
					std::string resourceGroupId;
					std::string prefixListId;
					std::string ipVersion;
					std::string prefixListName;
					std::string prefixListType;
					std::vector<std::string> cidrBlocks;
					std::string prefixListDescription;
					std::string ownerId;
					std::string creationTime;
					std::string regionId;
					std::vector<PrefixList::Tag> tags;
					std::string prefixListStatus;
					std::string shareType;
				};


				ListPrefixListsResult();
				explicit ListPrefixListsResult(const std::string &payload);
				~ListPrefixListsResult();
				long getTotalCount()const;
				std::string getNextToken()const;
				long getMaxResults()const;
				std::vector<PrefixList> getPrefixLists()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				std::string nextToken_;
				long maxResults_;
				std::vector<PrefixList> prefixLists_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_LISTPREFIXLISTSRESULT_H_