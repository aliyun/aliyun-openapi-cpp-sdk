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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBERCINSTANCEHISTORYEVENTSRESULT_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBERCINSTANCEHISTORYEVENTSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/rds/RdsExport.h>

namespace AlibabaCloud
{
	namespace Rds
	{
		namespace Model
		{
			class ALIBABACLOUD_RDS_EXPORT DescribeRCInstanceHistoryEventsResult : public ServiceResult
			{
			public:
				struct InstanceSystemEventSetItem
				{
					struct EventType
					{
						std::string code;
						std::string name;
					};
					struct EventCycleStatus
					{
						std::string code;
						std::string name;
					};
					struct ExtendedAttribute
					{
						struct InactiveDisk
						{
							std::string deviceType;
							std::string releaseTime;
							std::string deviceSize;
							std::string creationTime;
							std::string deviceCategory;
						};
						std::string device;
						std::string punishType;
						std::string punishDomain;
						std::string hostId;
						std::vector<InactiveDisk> inactiveDisks;
						std::string code;
						std::string canAccept;
						std::string rack;
						std::string punishUrl;
						std::string hostType;
						std::string responseResult;
						std::string diskId;
						std::string onlineRepairPolicy;
						std::vector<std::string> migrationOptions;
					};
					std::string eventFinishTime;
					EventCycleStatus eventCycleStatus;
					std::string eventPublishTime;
					EventType eventType;
					std::string instanceId;
					std::string impactLevel;
					ExtendedAttribute extendedAttribute;
					std::string eventId;
					std::string resourceType;
					std::string notBefore;
					std::string reasonCode;
					std::string reason;
				};


				DescribeRCInstanceHistoryEventsResult();
				explicit DescribeRCInstanceHistoryEventsResult(const std::string &payload);
				~DescribeRCInstanceHistoryEventsResult();
				int getTotalCount()const;
				int getPageSize()const;
				std::string getNextToken()const;
				int getPageNumber()const;
				std::vector<InstanceSystemEventSetItem> getInstanceSystemEventSet()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				std::string nextToken_;
				int pageNumber_;
				std::vector<InstanceSystemEventSetItem> instanceSystemEventSet_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBERCINSTANCEHISTORYEVENTSRESULT_H_