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

#ifndef ALIBABACLOUD_ARMS_MODEL_LISTSERVERLESSTOPNAPPSREQUEST_H_
#define ALIBABACLOUD_ARMS_MODEL_LISTSERVERLESSTOPNAPPSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/arms/ARMSExport.h>

namespace AlibabaCloud
{
	namespace ARMS
	{
		namespace Model
		{
			class ALIBABACLOUD_ARMS_EXPORT ListServerlessTopNAppsRequest : public RpcServiceRequest
			{

			public:
				ListServerlessTopNAppsRequest();
				~ListServerlessTopNAppsRequest();

				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				int getLimit()const;
				void setLimit(int limit);
				std::string getOrderBy()const;
				void setOrderBy(const std::string& orderBy);
				long getEndTime()const;
				void setEndTime(long endTime);
				long getStartTime()const;
				void setStartTime(long startTime);

            private:
				std::string regionId_;
				int limit_;
				std::string orderBy_;
				long endTime_;
				long startTime_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ARMS_MODEL_LISTSERVERLESSTOPNAPPSREQUEST_H_