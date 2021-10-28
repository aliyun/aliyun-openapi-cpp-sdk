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

#ifndef ALIBABACLOUD_CMS_MODEL_DESCRIBEHOSTAVAILABILITYLISTRESULT_H_
#define ALIBABACLOUD_CMS_MODEL_DESCRIBEHOSTAVAILABILITYLISTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cms/CmsExport.h>

namespace AlibabaCloud
{
	namespace Cms
	{
		namespace Model
		{
			class ALIBABACLOUD_CMS_EXPORT DescribeHostAvailabilityListResult : public ServiceResult
			{
			public:
				struct NodeTaskConfig
				{
					struct TaskOption
					{
						std::string httpPostContent;
						std::string telnetOrPingHost;
						std::string httpResponseCharset;
						std::string httpKeyword;
						std::string httpURI;
						bool httpNegative;
						std::string httpMethod;
						int interval;
					};
					struct AlertConfig
					{
						struct EscalationListItem
						{
							std::string metricName;
							std::string times;
							std::string value;
							std::string _operator;
							std::string aggregate;
						};
						int silenceTime;
						int notifyType;
						int endTime;
						int startTime;
						std::string webHook;
						std::vector<EscalationListItem> escalationList;
					};
					std::string groupName;
					std::vector<std::string> instances;
					TaskOption taskOption;
					AlertConfig alertConfig;
					std::string taskName;
					std::string taskScope;
					std::string taskType;
					long id;
					bool disabled;
					long groupId;
				};


				DescribeHostAvailabilityListResult();
				explicit DescribeHostAvailabilityListResult(const std::string &payload);
				~DescribeHostAvailabilityListResult();
				std::string getMessage()const;
				std::vector<NodeTaskConfig> getTaskList()const;
				int getTotal()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::vector<NodeTaskConfig> taskList_;
				int total_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CMS_MODEL_DESCRIBEHOSTAVAILABILITYLISTRESULT_H_