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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBERCINVOCATIONRESULTSRESULT_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBERCINVOCATIONRESULTSRESULT_H_

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
			class ALIBABACLOUD_RDS_EXPORT DescribeRCInvocationResultsResult : public ServiceResult
			{
			public:
				struct InvocationResultsItem
				{
					struct TagsItem
					{
						std::string tagKey;
						std::string tagValue;
					};
					int dropped;
					std::string invocationStatus;
					std::string instanceId;
					std::string errorInfo;
					int exitCode;
					std::string startTime;
					std::string repeats;
					std::string invokeRecordStatus;
					std::string finishedTime;
					std::string containerId;
					std::string containerName;
					std::string username;
					std::string output;
					std::string commandId;
					std::string errorCode;
					std::vector<InvocationResultsItem::TagsItem> tags;
					std::string invokeId;
					std::string stopTime;
				};


				DescribeRCInvocationResultsResult();
				explicit DescribeRCInvocationResultsResult(const std::string &payload);
				~DescribeRCInvocationResultsResult();
				std::vector<InvocationResultsItem> getInvocationResults()const;
				int getTotalCount()const;
				std::string getNextToken()const;
				std::string getPageSize()const;
				std::string getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<InvocationResultsItem> invocationResults_;
				int totalCount_;
				std::string nextToken_;
				std::string pageSize_;
				std::string pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBERCINVOCATIONRESULTSRESULT_H_