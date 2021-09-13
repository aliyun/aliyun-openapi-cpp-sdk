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

#ifndef ALIBABACLOUD_LINKWAN_MODEL_GETNODEGROUPRESULT_H_
#define ALIBABACLOUD_LINKWAN_MODEL_GETNODEGROUPRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/linkwan/LinkWANExport.h>

namespace AlibabaCloud
{
	namespace LinkWAN
	{
		namespace Model
		{
			class ALIBABACLOUD_LINKWAN_EXPORT GetNodeGroupResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct DataDispatchConfig
					{
						struct IotProduct
						{
							bool debugSwitch;
							std::string productName;
							std::string productType;
							std::string productKey;
						};
						struct OnsTopics
						{
							std::string uplinkRegionName;
							std::string downlinkTopic;
							std::string uplinkTopic;
							std::string downlinkRegionName;
						};
						std::string destination;
						OnsTopics onsTopics;
						IotProduct iotProduct;
					};
					struct LocksItem
					{
						long createMillis;
						bool enabled;
						std::string lockId;
						std::string lockType;
					};
					long nodesCnt;
					std::string classMode;
					long rxMonthSum;
					int multicastNodeCapacity;
					std::string nodeGroupName;
					std::string rxDailySum;
					long txDailySum;
					std::vector<LocksItem> locks;
					long txMonthSum;
					int multicastNodeCount;
					std::string joinPermissionType;
					bool multicastEnabled;
					DataDispatchConfig dataDispatchConfig;
					std::string nodeGroupId;
					std::string joinPermissionOwnerAliyunId;
					std::string multicastGroupId;
					long createMillis;
					std::string joinPermissionId;
					std::string joinEui;
					long freqBandPlanGroupId;
					bool joinPermissionEnabled;
					std::string joinPermissionName;
					bool dataDispatchEnabled;
				};


				GetNodeGroupResult();
				explicit GetNodeGroupResult(const std::string &payload);
				~GetNodeGroupResult();
				Data getData()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				Data data_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LINKWAN_MODEL_GETNODEGROUPRESULT_H_