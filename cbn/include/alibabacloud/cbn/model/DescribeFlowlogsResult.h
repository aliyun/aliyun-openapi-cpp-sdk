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

#ifndef ALIBABACLOUD_CBN_MODEL_DESCRIBEFLOWLOGSRESULT_H_
#define ALIBABACLOUD_CBN_MODEL_DESCRIBEFLOWLOGSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cbn/CbnExport.h>

namespace AlibabaCloud
{
	namespace Cbn
	{
		namespace Model
		{
			class ALIBABACLOUD_CBN_EXPORT DescribeFlowlogsResult : public ServiceResult
			{
			public:
				struct FlowLog
				{
					struct Tag
					{
						std::string value;
						std::string key;
					};
					std::string status;
					std::string transitRouterAttachmentId;
					std::string description;
					std::string projectName;
					std::string flowLogId;
					std::string flowLogName;
					std::string logStoreName;
					std::string peerRegionId;
					std::string creationTime;
					std::string cenId;
					std::string regionId;
					std::vector<FlowLog::Tag> tags;
					long interval;
				};


				DescribeFlowlogsResult();
				explicit DescribeFlowlogsResult(const std::string &payload);
				~DescribeFlowlogsResult();
				std::string getTotalCount()const;
				std::vector<FlowLog> getFlowLogs()const;
				std::string getPageSize()const;
				std::string getPageNumber()const;
				std::string getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string totalCount_;
				std::vector<FlowLog> flowLogs_;
				std::string pageSize_;
				std::string pageNumber_;
				std::string success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CBN_MODEL_DESCRIBEFLOWLOGSRESULT_H_