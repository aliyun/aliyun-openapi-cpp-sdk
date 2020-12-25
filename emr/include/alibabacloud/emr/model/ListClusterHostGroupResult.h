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

#ifndef ALIBABACLOUD_EMR_MODEL_LISTCLUSTERHOSTGROUPRESULT_H_
#define ALIBABACLOUD_EMR_MODEL_LISTCLUSTERHOSTGROUPRESULT_H_

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
			class ALIBABACLOUD_EMR_EXPORT ListClusterHostGroupResult : public ServiceResult
			{
			public:
				struct HostGroup
				{
					std::string hostGroupType;
					std::string hostGroupSubType;
					std::string hostGroupChangeType;
					std::string hostGroupChangeStatus;
					int systemDiskSize;
					int memory;
					std::string gmtModified;
					int cpu;
					int dataDiskCount;
					int scalingGroupMinNode;
					std::string lockType;
					std::string systemDiskType;
					std::string scalingGroupActiveStatus;
					int scalingGroupMaxNode;
					std::string instanceType;
					std::string lockReason;
					std::string scalingGroupConfigState;
					std::string status;
					int systemDiskCount;
					std::string comment;
					int nodeCount;
					float costSavingPercent;
					std::string scalingInMode;
					std::string securityGroupId;
					std::string payType;
					std::string hostGroupName;
					std::string vswitchId;
					std::string gmtCreate;
					std::string hostGroupId;
					std::string dataDiskType;
					std::string chargeType;
					std::string scalingGroupBizId;
					int dataDiskSize;
				};


				ListClusterHostGroupResult();
				explicit ListClusterHostGroupResult(const std::string &payload);
				~ListClusterHostGroupResult();
				int getPageSize()const;
				int getPageNumber()const;
				std::string getClusterId()const;
				int getTotal()const;
				std::vector<HostGroup> getHostGroupList()const;

			protected:
				void parse(const std::string &payload);
			private:
				int pageSize_;
				int pageNumber_;
				std::string clusterId_;
				int total_;
				std::vector<HostGroup> hostGroupList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_LISTCLUSTERHOSTGROUPRESULT_H_