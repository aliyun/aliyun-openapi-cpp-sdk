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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBEREADDBINSTANCEDELAYRESULT_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBEREADDBINSTANCEDELAYRESULT_H_

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
			class ALIBABACLOUD_RDS_EXPORT DescribeReadDBInstanceDelayResult : public ServiceResult
			{
			public:
				struct ItemsItem
				{
					struct ReadonlyInstanceDelayItem
					{
						std::string flushLag;
						std::string replayLatency;
						std::string flushLatency;
						std::string sendLatency;
						std::string writeLag;
						std::string replayLag;
						std::string writeLatency;
						std::string readDBInstanceName;
					};
					std::vector<std::string> readDBInstanceNames;
					std::vector<std::string> readDelayTimes;
					std::string dBInstanceId;
					std::vector<ItemsItem::ReadonlyInstanceDelayItem> readonlyInstanceDelay;
				};


				DescribeReadDBInstanceDelayResult();
				explicit DescribeReadDBInstanceDelayResult(const std::string &payload);
				~DescribeReadDBInstanceDelayResult();
				std::string getDBInstanceId()const;
				std::string getReadDBInstanceId()const;
				std::vector<ItemsItem> getItems()const;
				int getDelayTime()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string dBInstanceId_;
				std::string readDBInstanceId_;
				std::vector<ItemsItem> items_;
				int delayTime_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBEREADDBINSTANCEDELAYRESULT_H_