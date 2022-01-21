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

#ifndef ALIBABACLOUD_CMS_MODEL_DESCRIBEGROUPMONITORINGAGENTPROCESSRESULT_H_
#define ALIBABACLOUD_CMS_MODEL_DESCRIBEGROUPMONITORINGAGENTPROCESSRESULT_H_

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
			class ALIBABACLOUD_CMS_EXPORT DescribeGroupMonitoringAgentProcessResult : public ServiceResult
			{
			public:
				struct Process
				{
					struct MatchExpressItem
					{
						std::string function;
						std::string value;
						std::string name;
					};
					struct AlertConfigItem
					{
						std::string silenceTime;
						std::string noEffectiveInterval;
						std::string comparisonOperator;
						std::string times;
						std::string webhook;
						std::string escalationsLevel;
						std::string effectiveInterval;
						std::string statistics;
						std::string threshold;
					};
					std::string processName;
					std::string matchExpressFilterRelation;
					std::vector<Process::AlertConfigItem> alertConfig;
					std::vector<Process::MatchExpressItem> matchExpress;
					std::string id;
					std::string groupId;
				};


				DescribeGroupMonitoringAgentProcessResult();
				explicit DescribeGroupMonitoringAgentProcessResult(const std::string &payload);
				~DescribeGroupMonitoringAgentProcessResult();
				std::string getMessage()const;
				std::string getPageSize()const;
				std::string getPageNumber()const;
				std::string getTotal()const;
				std::vector<Process> getProcesses()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::string pageSize_;
				std::string pageNumber_;
				std::string total_;
				std::vector<Process> processes_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CMS_MODEL_DESCRIBEGROUPMONITORINGAGENTPROCESSRESULT_H_