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

#ifndef ALIBABACLOUD_VPC_MODEL_LISTNATGATEWAYECSMETRICRESULT_H_
#define ALIBABACLOUD_VPC_MODEL_LISTNATGATEWAYECSMETRICRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vpc/VpcExport.h>

namespace AlibabaCloud
{
	namespace Vpc
	{
		namespace Model
		{
			class ALIBABACLOUD_VPC_EXPORT ListNatGatewayEcsMetricResult : public ServiceResult
			{
			public:
				struct MetricData
				{
					std::string privateIpAddress;
					long rxBps;
					long txBps;
					long rxPps;
					long txPps;
					long activeSessionNum;
					long newSessionRate;
					std::string natGatewayId;
					long timestamp;
				};


				ListNatGatewayEcsMetricResult();
				explicit ListNatGatewayEcsMetricResult(const std::string &payload);
				~ListNatGatewayEcsMetricResult();
				std::string getNextToken()const;
				std::vector<MetricData> getMetricDataList()const;
				int getMaxResults()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string nextToken_;
				std::vector<MetricData> metricDataList_;
				int maxResults_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_LISTNATGATEWAYECSMETRICRESULT_H_