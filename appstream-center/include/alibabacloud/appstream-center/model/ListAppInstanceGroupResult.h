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

#ifndef ALIBABACLOUD_APPSTREAM_CENTER_MODEL_LISTAPPINSTANCEGROUPRESULT_H_
#define ALIBABACLOUD_APPSTREAM_CENTER_MODEL_LISTAPPINSTANCEGROUPRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/appstream-center/Appstream_centerExport.h>

namespace AlibabaCloud
{
	namespace Appstream_center
	{
		namespace Model
		{
			class ALIBABACLOUD_APPSTREAM_CENTER_EXPORT ListAppInstanceGroupResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct OtaInfo
					{
						std::string newOtaVersion;
						std::string taskId;
						std::string otaVersion;
					};
					struct AppsItem
					{
						std::string appVersion;
						std::string appId;
						std::string appVersionName;
						std::string appIcon;
						std::string appName;
					};
					struct Node
					{
						struct RecurrenceSchedule
						{
							struct TimerPeriod
							{
								std::string endTime;
								int amount;
								std::string startTime;
							};
							std::string recurrenceType;
							std::vector<RecurrenceSchedule::TimerPeriod> timerPeriods;
							std::vector<std::string> recurrenceValues;
						};
						bool warmUp;
						std::string strategyType;
						int scalingStep;
						int maxScalingAmount;
						int scalingDownAfterIdleMinutes;
						std::string strategyEnableDate;
						std::string nodeTypeName;
						int amount;
						std::vector<Node::RecurrenceSchedule> recurrenceSchedules;
						int scalingNodeUsed;
						std::string strategyDisableDate;
						int nodeAmount;
						std::string nodeInstanceType;
						std::string nodePoolId;
						int nodeUsed;
						int nodeCapacity;
						std::string scalingUsageThreshold;
						int scalingNodeAmount;
					};
					long memory;
					std::string appInstanceGroupName;
					std::string cpu;
					std::vector<Data::AppsItem> apps;
					std::string gpu;
					int maxAmount;
					std::string aliyunImageId;
					std::string sessionTimeout;
					std::string osType;
					std::vector<Data::Node> nodePool;
					int minAmount;
					std::string expiredTime;
					std::string appPolicyId;
					std::string resourceStatus;
					std::string status;
					int amount;
					std::string productType;
					std::string specId;
					std::string appCenterImageId;
					OtaInfo otaInfo;
					std::string gmtCreate;
					std::string chargeResourceMode;
					std::string appInstanceType;
					std::string chargeType;
					std::string regionId;
					std::string appInstanceGroupId;
				};


				ListAppInstanceGroupResult();
				explicit ListAppInstanceGroupResult(const std::string &payload);
				~ListAppInstanceGroupResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<Data> getAppInstanceGroupModels()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<Data> appInstanceGroupModels_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_APPSTREAM_CENTER_MODEL_LISTAPPINSTANCEGROUPRESULT_H_