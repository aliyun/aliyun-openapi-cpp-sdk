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

#ifndef ALIBABACLOUD_AEGIS_MODEL_DESCRIBELOGINFORESULT_H_
#define ALIBABACLOUD_AEGIS_MODEL_DESCRIBELOGINFORESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/aegis/AegisExport.h>

namespace AlibabaCloud
{
	namespace Aegis
	{
		namespace Model
		{
			class ALIBABACLOUD_AEGIS_EXPORT DescribeLogInfoResult : public ServiceResult
			{
			public:
				struct Item
				{
					struct Field
					{
						std::string desc;
						std::string type;
						std::string name;
					};
					std::vector<Item::Field> fields;
					std::string id;
					std::string name;
				};


				DescribeLogInfoResult();
				explicit DescribeLogInfoResult(const std::string &payload);
				~DescribeLogInfoResult();
				int getTotalCount()const;
				std::vector<Item> getLogInfoItems()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::vector<Item> logInfoItems_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AEGIS_MODEL_DESCRIBELOGINFORESULT_H_