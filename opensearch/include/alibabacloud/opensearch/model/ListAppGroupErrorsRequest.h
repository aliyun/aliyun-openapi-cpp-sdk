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

#ifndef ALIBABACLOUD_OPENSEARCH_MODEL_LISTAPPGROUPERRORSREQUEST_H_
#define ALIBABACLOUD_OPENSEARCH_MODEL_LISTAPPGROUPERRORSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <alibabacloud/opensearch/OpenSearchExport.h>

namespace AlibabaCloud
{
	namespace OpenSearch
	{
		namespace Model
		{
			class ALIBABACLOUD_OPENSEARCH_EXPORT ListAppGroupErrorsRequest : public RoaServiceRequest
			{

			public:
				ListAppGroupErrorsRequest();
				~ListAppGroupErrorsRequest();

				std::string getAppId()const;
				void setAppId(const std::string& appId);
				int getPageSize()const;
				void setPageSize(int pageSize);
				int getStartTime()const;
				void setStartTime(int startTime);
				int getStopTime()const;
				void setStopTime(int stopTime);
				std::string getAppGroupIdentity()const;
				void setAppGroupIdentity(const std::string& appGroupIdentity);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);

            private:
				std::string appId_;
				int pageSize_;
				int startTime_;
				int stopTime_;
				std::string appGroupIdentity_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OPENSEARCH_MODEL_LISTAPPGROUPERRORSREQUEST_H_