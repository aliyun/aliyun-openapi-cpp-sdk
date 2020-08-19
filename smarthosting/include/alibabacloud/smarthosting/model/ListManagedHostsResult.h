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

#ifndef ALIBABACLOUD_SMARTHOSTING_MODEL_LISTMANAGEDHOSTSRESULT_H_
#define ALIBABACLOUD_SMARTHOSTING_MODEL_LISTMANAGEDHOSTSRESULT_H_

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
			class ALIBABACLOUD_SMARTHOSTING_EXPORT ListManagedHostsResult : public ServiceResult
			{
			public:
				struct ManagedHostSet
				{
					struct CapacityAttribute
					{
						int availableMemories;
						int totalMemories;
						int availableVcpus;
						int totalVcpus;
					};
					struct HostAttribute
					{
						std::string hostType;
						std::string cpuModelName;
					};
					struct NetworkAssociation
					{
						struct SwitchSet
						{
							std::string switchId;
						};
						std::vector<SwitchSet> switchSets;
					};
					struct InstanceSet
					{
						std::string instanceId;
					};
					struct Tag
					{
						std::string value;
						std::string key;
					};
					std::string status;
					std::string resourceGroupId;
					std::string mode;
					HostAttribute hostAttribute;
					std::string managedHostId;
					std::vector<std::string> supportedCustomInstanceTypeFamilies;
					std::vector<ManagedHostSet::InstanceSet> instanceSets;
					NetworkAssociation networkAssociation;
					std::vector<std::string> supportedInstanceTypeFamilies;
					std::string managedHostName;
					CapacityAttribute capacityAttribute;
					std::vector<std::string> supportedInstanceTypes;
					std::vector<ManagedHostSet::Tag> tags;
				};


				ListManagedHostsResult();
				explicit ListManagedHostsResult(const std::string &payload);
				~ListManagedHostsResult();
				int getTotalCount()const;
				std::string getNextToken()const;
				int getPageSize()const;
				std::vector<ManagedHostSet> getManagedHostSets()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::string nextToken_;
				int pageSize_;
				std::vector<ManagedHostSet> managedHostSets_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SMARTHOSTING_MODEL_LISTMANAGEDHOSTSRESULT_H_