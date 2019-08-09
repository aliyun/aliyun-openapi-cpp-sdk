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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEENIMONITORDATARESULT_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEENIMONITORDATARESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ecs/EcsExport.h>

namespace AlibabaCloud
{
	namespace Ecs
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_EXPORT DescribeEniMonitorDataResult : public ServiceResult
			{
			public:
				struct EniMonitorData
				{
					std::string dropPacketRx;
					std::string packetTx;
					std::string packetRx;
					std::string eniId;
					std::string dropPacketTx;
					std::string intranetTx;
					std::string timeStamp;
					std::string intranetRx;
				};


				DescribeEniMonitorDataResult();
				explicit DescribeEniMonitorDataResult(const std::string &payload);
				~DescribeEniMonitorDataResult();
				int getTotalCount()const;
				std::vector<EniMonitorData> getMonitorData()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::vector<EniMonitorData> monitorData_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEENIMONITORDATARESULT_H_