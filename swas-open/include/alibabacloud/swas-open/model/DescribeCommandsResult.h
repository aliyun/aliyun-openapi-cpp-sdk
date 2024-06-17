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

#ifndef ALIBABACLOUD_SWAS_OPEN_MODEL_DESCRIBECOMMANDSRESULT_H_
#define ALIBABACLOUD_SWAS_OPEN_MODEL_DESCRIBECOMMANDSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/swas-open/SWAS_OPENExport.h>

namespace AlibabaCloud
{
	namespace SWAS_OPEN
	{
		namespace Model
		{
			class ALIBABACLOUD_SWAS_OPEN_EXPORT DescribeCommandsResult : public ServiceResult
			{
			public:
				struct Command
				{
					struct Tag
					{
						std::string value;
						std::string key;
					};
					struct ParameterDefinition
					{
						std::string defaultValue;
						std::string description;
						bool required;
						std::string parameterName;
						std::vector<std::string> possibleValues;
					};
					std::vector<Command::ParameterDefinition> parameterDefinitions;
					std::string description;
					std::string resourceGroupId;
					std::vector<std::string> parameterNames;
					long timeout;
					std::string name;
					std::string provider;
					std::string workingDir;
					std::string commandContent;
					std::string type;
					std::string creationTime;
					bool enableParameter;
					std::string commandId;
					std::vector<Command::Tag> tags;
				};


				DescribeCommandsResult();
				explicit DescribeCommandsResult(const std::string &payload);
				~DescribeCommandsResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<Command> getCommands()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<Command> commands_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SWAS_OPEN_MODEL_DESCRIBECOMMANDSRESULT_H_