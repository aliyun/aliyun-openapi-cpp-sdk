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

#ifndef ALIBABACLOUD_SDDP_MODEL_DESCRIBEEVENTTYPESRESULT_H_
#define ALIBABACLOUD_SDDP_MODEL_DESCRIBEEVENTTYPESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sddp/SddpExport.h>

namespace AlibabaCloud
{
	namespace Sddp
	{
		namespace Model
		{
			class ALIBABACLOUD_SDDP_EXPORT DescribeEventTypesResult : public ServiceResult
			{
			public:
				struct EventType
				{
					struct SubType
					{
						int status;
						int eventHitCount;
						std::string adaptedProduct;
						std::string configValue;
						std::string description;
						std::string configCode;
						int configContentType;
						std::string configDescription;
						long id;
						std::string code;
						std::string name;
					};
					std::string description;
					std::vector<EventType::SubType> subTypeList;
					long id;
					std::string code;
					std::string name;
				};


				DescribeEventTypesResult();
				explicit DescribeEventTypesResult(const std::string &payload);
				~DescribeEventTypesResult();
				std::vector<EventType> getEventTypeList()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<EventType> eventTypeList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SDDP_MODEL_DESCRIBEEVENTTYPESRESULT_H_