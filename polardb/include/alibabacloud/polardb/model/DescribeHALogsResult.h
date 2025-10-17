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

#ifndef ALIBABACLOUD_POLARDB_MODEL_DESCRIBEHALOGSRESULT_H_
#define ALIBABACLOUD_POLARDB_MODEL_DESCRIBEHALOGSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/polardb/PolardbExport.h>

namespace AlibabaCloud
{
	namespace Polardb
	{
		namespace Model
		{
			class ALIBABACLOUD_POLARDB_EXPORT DescribeHALogsResult : public ServiceResult
			{
			public:
				struct HaSwitchLogItem
				{
					std::string switchCauseDetail;
					long switchType;
					std::string switchCauseCode;
					long totalSessions;
					std::string switchFinishTime;
					std::string fromDBType;
					long affectedSessions;
					std::string switchId;
					std::string switchStartTime;
				};
				struct SwitchListItem
				{
					struct SwitchLogItem
					{
						struct SwitchDetailItem
						{
							std::string isSuccess;
							std::string endTime;
							std::string startTime;
							std::string stepName;
							std::string simulatePhase;
							std::string timeCost;
						};
						std::vector<SwitchLogItem::SwitchDetailItem> switchStepItems2;
						std::string eventFinishTime;
						std::string simulateLogId;
						std::string dstDbType;
						std::string eventStartTime;
						std::string dstIpPort;
						std::string dBInstanceId;
						std::string simulateListId;
						std::string srcDbType;
						std::string srcIpPort;
						std::string simulateStatus;
					};
					struct SwitchStepItem
					{
						std::string isSuccess;
						std::string endTime;
						std::string startTime;
						std::string simulatePhase;
						std::string stepName;
						std::string timeCost;
						std::string dBNodeId;
					};
					std::string eventFinishTime;
					std::string eventStartTime;
					std::string endTime;
					std::string plannedEscapeTime;
					std::vector<SwitchListItem::SwitchStepItem> switchStepItems;
					std::string startTime;
					std::string faultInjectionType;
					std::string simulateMode;
					std::string preferredSimulateStartTime;
					std::vector<SwitchListItem::SwitchLogItem> switchLogItems1;
					std::string simulateListId;
					std::vector<std::string> dBNodeCrashList;
					std::string plannedEscapeMode;
					std::string simulateTaskId;
					std::string simulateStatus;
				};
				struct SwitchLogItem3
				{
					struct SwitchStepItem5
					{
						std::string isSuccess;
						std::string endTime;
						std::string startTime;
						std::string stepName;
						std::string timeCost;
						std::string simulatePhase;
						std::string dBNodeId;
						std::string stepMsg;
					};
					std::string eventFinishTime;
					std::string dstDbType;
					std::string eventStartTime;
					std::string dstIpPort;
					std::string dBInstanceId;
					std::vector<SwitchLogItem3::SwitchStepItem5> switchStepItems4;
					std::string simulateListId;
					std::string srcDbType;
					std::string simulatecode;
					std::string srcIpPort;
					std::string simulateStatus;
				};


				DescribeHALogsResult();
				explicit DescribeHALogsResult(const std::string &payload);
				~DescribeHALogsResult();
				int getItemsNumbers()const;
				std::vector<HaSwitchLogItem> getHaLogItems()const;
				int getPageSize()const;
				int getPageNumber()const;
				int getHaStatus()const;
				int getTotalRecords()const;
				std::string getDBInstanceType()const;
				std::vector<SwitchListItem> getSwitchListItems()const;
				std::vector<SwitchLogItem3> getSwitchLogItems()const;
				std::string getDBInstanceName()const;

			protected:
				void parse(const std::string &payload);
			private:
				int itemsNumbers_;
				std::vector<HaSwitchLogItem> haLogItems_;
				int pageSize_;
				int pageNumber_;
				int haStatus_;
				int totalRecords_;
				std::string dBInstanceType_;
				std::vector<SwitchListItem> switchListItems_;
				std::vector<SwitchLogItem3> switchLogItems_;
				std::string dBInstanceName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDB_MODEL_DESCRIBEHALOGSRESULT_H_