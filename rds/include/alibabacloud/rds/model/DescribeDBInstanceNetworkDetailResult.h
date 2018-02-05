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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBEDBINSTANCENETWORKDETAILRESULT_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBEDBINSTANCENETWORKDETAILRESULT_H_

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
			class ALIBABACLOUD_RDS_EXPORT DescribeDBInstanceNetworkDetailResult : public ServiceResult
			{
			public:
				struct NetworkKey
				{
					struct NetworkValue
					{
						std::string value;
						std::string dateTime;
					};
					std::vector<NetworkKey::NetworkValue> values;
					std::string unit;
					std::string key;
				};


				DescribeDBInstanceNetworkDetailResult();
				explicit DescribeDBInstanceNetworkDetailResult(const std::string &payload);
				~DescribeDBInstanceNetworkDetailResult();
				std::string getEndTime()const;
				std::string getNetworkLatency()const;
				std::string getNetworkTrafficOut()const;
				std::string getStartTime()const;
				std::string getNetworkRequest()const;
				std::string getAbortedConnection()const;
				std::string getBackendLatency()const;
				std::string getDBInstanceId()const;
				std::string getActiveConnection()const;
				std::string getNetworkErrors()const;
				std::string getNewConnection()const;
				std::string getNetworkTrafficIn()const;
				std::vector<NetworkKey> getNetworkDetail()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string endTime_;
				std::string networkLatency_;
				std::string networkTrafficOut_;
				std::string startTime_;
				std::string networkRequest_;
				std::string abortedConnection_;
				std::string backendLatency_;
				std::string dBInstanceId_;
				std::string activeConnection_;
				std::string networkErrors_;
				std::string newConnection_;
				std::string networkTrafficIn_;
				std::vector<NetworkKey> networkDetail_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBEDBINSTANCENETWORKDETAILRESULT_H_