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

#ifndef ALIBABACLOUD_EMR_MODEL_LISTKAFKABROKERRESULT_H_
#define ALIBABACLOUD_EMR_MODEL_LISTKAFKABROKERRESULT_H_

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
			class ALIBABACLOUD_EMR_EXPORT ListKafkaBrokerResult : public ServiceResult
			{
			public:
				struct Broker
				{
					std::string hostIp;
					std::string status;
					int leaderCount;
					int brokerId;
					std::string diskUsageMean;
					std::string diskUsageMax;
					int topicCount;
					std::string hostId;
					std::string trafficIn;
					int diskCapacity;
					std::string trafficOut;
					std::string diskUnbalanceRate;
					std::string hostName;
					int partitionCount;
				};


				ListKafkaBrokerResult();
				explicit ListKafkaBrokerResult(const std::string &payload);
				~ListKafkaBrokerResult();
				int getPageSize()const;
				int getPageNumber()const;
				int getTotal()const;
				std::vector<Broker> getBrokerList()const;

			protected:
				void parse(const std::string &payload);
			private:
				int pageSize_;
				int pageNumber_;
				int total_;
				std::vector<Broker> brokerList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_LISTKAFKABROKERRESULT_H_