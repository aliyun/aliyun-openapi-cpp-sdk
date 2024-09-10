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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEINVOCATIONSRESULT_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEINVOCATIONSRESULT_H_

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
			class ALIBABACLOUD_ECS_EXPORT DescribeInvocationsResult : public ServiceResult
			{
			public:
				struct Invocation
				{
					struct InvokeInstance
					{
						int dropped;
						std::string invocationStatus;
						std::string instanceId;
						bool timed;
						std::string instanceInvokeStatus;
						long exitCode;
						std::string errorInfo;
						std::string startTime;
						int repeats;
						std::string finishTime;
						std::string output;
						std::string creationTime;
						std::string updateTime;
						std::string errorCode;
						std::string stopTime;
					};
					struct Tag
					{
						std::string tagKey;
						std::string tagValue;
					};
					std::string invocationStatus;
					std::string parameters;
					bool timed;
					std::string commandDescription;
					long timeout;
					std::vector<Invocation::InvokeInstance> invokeInstances;
					std::string commandContent;
					std::string workingDir;
					std::string repeatMode;
					std::string invokeStatus;
					std::string commandType;
					std::string username;
					std::string containerId;
					std::string containerName;
					std::string creationTime;
					std::string frequency;
					std::string launcher;
					std::string commandId;
					std::string commandName;
					std::vector<Invocation::Tag> tags;
					std::string invokeId;
					std::string terminationMode;
				};


				DescribeInvocationsResult();
				explicit DescribeInvocationsResult(const std::string &payload);
				~DescribeInvocationsResult();
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
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEINVOCATIONSRESULT_H_