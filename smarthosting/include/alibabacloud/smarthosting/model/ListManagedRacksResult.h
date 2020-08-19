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

#ifndef ALIBABACLOUD_SMARTHOSTING_MODEL_LISTMANAGEDRACKSRESULT_H_
#define ALIBABACLOUD_SMARTHOSTING_MODEL_LISTMANAGEDRACKSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/smarthosting/SmartHostingExport.h>

namespace AlibabaCloud
{
	namespace SmartHosting
	{
		namespace Model
		{
			class ALIBABACLOUD_SMARTHOSTING_EXPORT ListManagedRacksResult : public ServiceResult
			{
			public:
				struct ManagedRacksSet
				{
					struct ManagedHostSet
					{
						struct HostAttribute
						{
							std::string hostType;
							std::string cpuModelName;
						};
						std::string status;
						std::string description;
						HostAttribute hostAttribute;
						std::string managedHostId;
					};
					std::string managedRackId;
					std::string zoneId;
					std::vector<ManagedRacksSet::ManagedHostSet> managedHostSets;
				};


				ListManagedRacksResult();
				explicit ListManagedRacksResult(const std::string &payload);
				~ListManagedRacksResult();
				int getTotalCount()const;
				std::string getNextToken()const;
				int getPageSize()const;
				std::vector<ManagedRacksSet> getManagedRacksSets()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::string nextToken_;
				int pageSize_;
				std::vector<ManagedRacksSet> managedRacksSets_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SMARTHOSTING_MODEL_LISTMANAGEDRACKSRESULT_H_