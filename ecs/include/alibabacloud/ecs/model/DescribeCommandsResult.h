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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBECOMMANDSRESULT_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBECOMMANDSRESULT_H_

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
			class ALIBABACLOUD_ECS_EXPORT DescribeCommandsResult : public ServiceResult
			{
			public:
				struct Command
				{
					struct ParameterDefinition
					{
						std::string defaultValue;
						std::string description;
						bool required;
						std::string parameterName;
						std::vector<std::string> possibleValues;
						std::string patternRegex;
					};
					struct Tag
					{
						std::string tagKey;
						std::string tagValue;
					};
					std::vector<Command::ParameterDefinition> parameterDefinitions;
					std::string description;
					std::string category;
					std::string resourceGroupId;
					std::vector<std::string> parameterNames;
					long timeout;
					std::string provider;
					std::string name;
					std::string workingDir;
					std::string commandContent;
					std::string type;
					int version;
					int invokeTimes;
					std::string creationTime;
					std::string launcher;
					bool latest;
					bool enableParameter;
					std::string commandId;
					std::vector<Command::Tag> tags;
				};


				DescribeCommandsResult();
				explicit DescribeCommandsResult(const std::string &payload);
				~DescribeCommandsResult();
				long getTotalCount()const;
				long getPageSize()const;
				std::string getNextToken()const;
				long getPageNumber()const;
				std::vector<Command> getCommands()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				long pageSize_;
				std::string nextToken_;
				long pageNumber_;
				std::vector<Command> commands_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBECOMMANDSRESULT_H_