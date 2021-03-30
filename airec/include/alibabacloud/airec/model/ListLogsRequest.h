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

#ifndef ALIBABACLOUD_AIREC_MODEL_LISTLOGSREQUEST_H_
#define ALIBABACLOUD_AIREC_MODEL_LISTLOGSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <alibabacloud/airec/AirecExport.h>

namespace AlibabaCloud
{
	namespace Airec
	{
		namespace Model
		{
			class ALIBABACLOUD_AIREC_EXPORT ListLogsRequest : public RoaServiceRequest
			{

			public:
				ListLogsRequest();
				~ListLogsRequest();

				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				int getSize()const;
				void setSize(int size);
				std::string getQueryParams()const;
				void setQueryParams(const std::string& queryParams);
				int getEndTime()const;
				void setEndTime(int endTime);
				int getStartTime()const;
				void setStartTime(int startTime);
				int getPage()const;
				void setPage(int page);

            private:
				std::string instanceId_;
				int size_;
				std::string queryParams_;
				int endTime_;
				int startTime_;
				int page_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AIREC_MODEL_LISTLOGSREQUEST_H_