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

#ifndef ALIBABACLOUD_SMARTAG_MODEL_DESCRIBEFLOWLOGSRESULT_H_
#define ALIBABACLOUD_SMARTAG_MODEL_DESCRIBEFLOWLOGSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/smartag/SmartagExport.h>

namespace AlibabaCloud
{
	namespace Smartag
	{
		namespace Model
		{
			class ALIBABACLOUD_SMARTAG_EXPORT DescribeFlowLogsResult : public ServiceResult
			{
			public:
				struct FlowLogSetType
				{
					std::string status;
					std::string netflowServerPort;
					std::string logstoreName;
					std::string description;
					int activeAging;
					std::string resourceGroupId;
					std::string projectName;
					std::string netflowServerIp;
					std::string netflowVersion;
					int inactiveAging;
					std::string flowLogId;
					std::string name;
					int totalSagNum;
					std::string slsRegionId;
					std::string outputType;
				};


				DescribeFlowLogsResult();
				explicit DescribeFlowLogsResult(const std::string &payload);
				~DescribeFlowLogsResult();
				int getTotalCount()const;
				std::vector<FlowLogSetType> getFlowLogs()const;
				int getPageSize()const;
				int getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::vector<FlowLogSetType> flowLogs_;
				int pageSize_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SMARTAG_MODEL_DESCRIBEFLOWLOGSRESULT_H_