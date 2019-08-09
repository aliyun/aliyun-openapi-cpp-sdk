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

#ifndef ALIBABACLOUD_CMS_MODEL_DESCRIBEEVENTRULERESULT_H_
#define ALIBABACLOUD_CMS_MODEL_DESCRIBEEVENTRULERESULT_H_

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
			class ALIBABACLOUD_CMS_EXPORT DescribeEventRuleResult : public ServiceResult
			{
			public:
				struct Result
				{
					struct EventPattern
					{
						std::vector<std::string> nameList;
						std::vector<std::string> levelList;
						std::vector<std::string> statusList;
						std::string product;
					};
					EventPattern eventPattern;
					std::string description;
					std::string eventType;
					std::string state;
					std::string name;
					std::string groupId;
				};


				DescribeEventRuleResult();
				explicit DescribeEventRuleResult(const std::string &payload);
				~DescribeEventRuleResult();
				std::string getMessage()const;
				std::string getCode()const;
				bool getSuccess()const;
				Result getResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::string code_;
				bool success_;
				Result result_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CMS_MODEL_DESCRIBEEVENTRULERESULT_H_