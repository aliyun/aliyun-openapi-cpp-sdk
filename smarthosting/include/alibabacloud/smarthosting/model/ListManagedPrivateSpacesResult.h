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

#ifndef ALIBABACLOUD_SMARTHOSTING_MODEL_LISTMANAGEDPRIVATESPACESRESULT_H_
#define ALIBABACLOUD_SMARTHOSTING_MODEL_LISTMANAGEDPRIVATESPACESRESULT_H_

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
			class ALIBABACLOUD_SMARTHOSTING_EXPORT ListManagedPrivateSpacesResult : public ServiceResult
			{
			public:
				struct ManagedPrivateSpaceSet
				{
					struct CapacityAttribute
					{
						int availableMemories;
						int availableHostCount;
						int reservedVcpus;
						int totalMemories;
						int availableVcpus;
						int totalVcpus;
						int reservedHostCount;
						int reservedMemories;
						int totalHostCount;
					};
					struct LifecycleAttribute
					{
						std::string deliveryTime;
						std::string expirationTime;
						std::string receptionTime;
					};
					struct LocationAttribute
					{
						std::string address;
					};
					struct DeploymentAttribute
					{
						struct DeploymentStep
						{
							std::string status;
							std::string expectTime;
							std::string actualTime;
							bool currentStep;
						};
						std::string description;
						std::string createTime;
						std::string contractId;
						std::vector<DeploymentAttribute::DeploymentStep> deploymentSteps;
					};
					struct ManagedHostSet
					{
						std::string managedHostStatus;
						std::string managedHostId;
					};
					struct Tag
					{
						std::string value;
						std::string key;
					};
					std::vector<ManagedPrivateSpaceSet::DeploymentAttribute> deploymentAttributes;
					std::string description;
					std::string resourceGroupId;
					std::string zoneId;
					LifecycleAttribute lifecycleAttribute;
					std::string managedPrivateSpaceId;
					std::string managedPrivateSpaceName;
					std::vector<ManagedPrivateSpaceSet::ManagedHostSet> managedHostSets;
					std::string saleMode;
					std::string creationTime;
					CapacityAttribute capacityAttribute;
					LocationAttribute locationAttribute;
					std::vector<ManagedPrivateSpaceSet::Tag> tags;
				};


				ListManagedPrivateSpacesResult();
				explicit ListManagedPrivateSpacesResult(const std::string &payload);
				~ListManagedPrivateSpacesResult();
				int getTotalCount()const;
				std::vector<ManagedPrivateSpaceSet> getManagedPrivateSpaceSets()const;
				std::string getNextToken()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::vector<ManagedPrivateSpaceSet> managedPrivateSpaceSets_;
				std::string nextToken_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SMARTHOSTING_MODEL_LISTMANAGEDPRIVATESPACESRESULT_H_