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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBESENDFILERESULTSRESULT_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBESENDFILERESULTSRESULT_H_

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
			class ALIBABACLOUD_ECS_EXPORT DescribeSendFileResultsResult : public ServiceResult
			{
			public:
				struct Invocation
				{
					struct InvokeInstance
					{
						std::string invocationStatus;
						std::string finishTime;
						std::string instanceId;
						std::string errorInfo;
						std::string creationTime;
						std::string startTime;
						std::string updateTime;
						std::string errorCode;
					};
					struct Tag
					{
						std::string tagKey;
						std::string tagValue;
					};
					std::string fileMode;
					std::string invocationStatus;
					std::string overwrite;
					std::string description;
					std::string contentType;
					int vmCount;
					std::string targetDir;
					std::string fileGroup;
					std::string fileOwner;
					std::vector<Invocation::InvokeInstance> invokeInstances;
					std::string name;
					std::string content;
					std::string creationTime;
					std::vector<Invocation::Tag> tags;
					std::string invokeId;
				};


				DescribeSendFileResultsResult();
				explicit DescribeSendFileResultsResult(const std::string &payload);
				~DescribeSendFileResultsResult();
				long getTotalCount()const;
				long getPageSize()const;
				std::string getNextToken()const;
				std::vector<Invocation> getInvocations()const;
				long getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				long pageSize_;
				std::string nextToken_;
				std::vector<Invocation> invocations_;
				long pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBESENDFILERESULTSRESULT_H_