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

#ifndef ALIBABACLOUD_EAS_MODEL_DESCRIBESERVICEEVENTRESULT_H_
#define ALIBABACLOUD_EAS_MODEL_DESCRIBESERVICEEVENTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/eas/EasExport.h>

namespace AlibabaCloud
{
	namespace Eas
	{
		namespace Model
		{
			class ALIBABACLOUD_EAS_EXPORT DescribeServiceEventResult : public ServiceResult
			{
			public:
				struct EventsItem
				{
					std::string type;
					std::string message;
					std::string time;
					std::string reason;
				};


				DescribeServiceEventResult();
				explicit DescribeServiceEventResult(const std::string &payload);
				~DescribeServiceEventResult();
				long getTotalCount()const;
				long getPageNum()const;
				std::vector<EventsItem> getEvents()const;
				long getTotalPageNum()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				long pageNum_;
				std::vector<EventsItem> events_;
				long totalPageNum_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EAS_MODEL_DESCRIBESERVICEEVENTRESULT_H_