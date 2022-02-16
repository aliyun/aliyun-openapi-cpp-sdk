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

#ifndef ALIBABACLOUD_EMR_MODEL_LISTNODEGROUPSRESULT_H_
#define ALIBABACLOUD_EMR_MODEL_LISTNODEGROUPSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/emr/EmrExport.h>

namespace AlibabaCloud
{
	namespace Emr
	{
		namespace Model
		{
			class ALIBABACLOUD_EMR_EXPORT ListNodeGroupsResult : public ServiceResult
			{
			public:
				struct NodeGroup
				{
					struct SystemDisk
					{
						std::string category;
						int size;
						std::string performanceLevel;
						int count;
					};
					struct Disk
					{
						std::string category;
						int size;
						std::string performanceLevel;
						int count;
					};
					bool withPublicIp;
					std::string autoRenewDurationUnit;
					bool autoPayOrder;
					std::string description;
					std::vector<NodeGroup::Disk> dataDisks;
					bool autoRenew;
					int paymentDuration;
					std::string nodeKeyPairName;
					SystemDisk systemDisk;
					std::string nodeGroupType;
					std::string paymentType;
					std::vector<std::string> instanceTypes;
					std::string spotStrategy;
					std::string stateChangeReason;
					std::string status;
					std::string nodeGroupStatus;
					std::string nodeGroupName;
					int nodeCount;
					std::string zoneId;
					std::vector<std::string> vSwitchIds;
					std::string securityGroupId;
					std::string paymentDurationUnit;
					std::string nodeRootPassword;
					int autoRenewDuration;
					std::string nodeGroupId;
					std::string nodeRamRole;
					bool scalingGroup;
				};


				ListNodeGroupsResult();
				explicit ListNodeGroupsResult(const std::string &payload);
				~ListNodeGroupsResult();
				int getTotalCount()const;
				std::string getNextToken()const;
				int getMaxResults()const;
				std::vector<NodeGroup> getNodeGroups()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::string nextToken_;
				int maxResults_;
				std::vector<NodeGroup> nodeGroups_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_LISTNODEGROUPSRESULT_H_