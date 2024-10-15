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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEIMAGECOMPONENTSRESULT_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEIMAGECOMPONENTSRESULT_H_

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
			class ALIBABACLOUD_ECS_EXPORT DescribeImageComponentsResult : public ServiceResult
			{
			public:
				struct ImageComponentSet
				{
					struct Tag
					{
						std::string tagKey;
						std::string tagValue;
					};
					struct _Parameter
					{
						std::string defaultValue;
						std::string type;
						std::string name;
					};
					std::string componentType;
					std::string owner;
					std::vector<ImageComponentSet::_Parameter> parameters;
					std::string description;
					std::string resourceGroupId;
					std::string content;
					std::string creationTime;
					std::string systemType;
					std::string imageComponentId;
					std::vector<ImageComponentSet::Tag> tags;
					std::string name;
					std::string componentVersion;
				};


				DescribeImageComponentsResult();
				explicit DescribeImageComponentsResult(const std::string &payload);
				~DescribeImageComponentsResult();
				int getTotalCount()const;
				std::vector<ImageComponentSet> getImageComponent()const;
				std::string getNextToken()const;
				int getMaxResults()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::vector<ImageComponentSet> imageComponent_;
				std::string nextToken_;
				int maxResults_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEIMAGECOMPONENTSRESULT_H_