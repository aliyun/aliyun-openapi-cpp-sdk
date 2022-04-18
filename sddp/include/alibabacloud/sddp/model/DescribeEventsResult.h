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

#ifndef ALIBABACLOUD_SDDP_MODEL_DESCRIBEEVENTSRESULT_H_
#define ALIBABACLOUD_SDDP_MODEL_DESCRIBEEVENTSRESULT_H_

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
			class ALIBABACLOUD_SDDP_EXPORT DescribeEventsResult : public ServiceResult
			{
			public:
				struct Event
				{
					int status;
					std::string loginName;
					std::string typeName;
					bool backed;
					std::string userIdValue;
					std::string typeCode;
					std::string productCode;
					std::string statusName;
					std::string subTypeCode;
					std::string departName;
					long alertTime;
					std::string instanceName;
					int warnLevel;
					std::string dealLoginName;
					std::string dealDisplayName;
					std::string subTypeName;
					long userId;
					long eventTime;
					std::string targetProductCode;
					long dealUserId;
					std::string dealUserIdValue;
					std::string displayName;
					long id;
					long dealTime;
				};


				DescribeEventsResult();
				explicit DescribeEventsResult(const std::string &payload);
				~DescribeEventsResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getCurrentPage()const;
				std::vector<Event> getItems()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int currentPage_;
				std::vector<Event> items_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SDDP_MODEL_DESCRIBEEVENTSRESULT_H_