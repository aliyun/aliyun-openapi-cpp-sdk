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

#ifndef ALIBABACLOUD_VCS_MODEL_LISTPERSONTRACEDETAILSREQUEST_H_
#define ALIBABACLOUD_VCS_MODEL_LISTPERSONTRACEDETAILSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/vcs/VcsExport.h>

namespace AlibabaCloud
{
	namespace Vcs
	{
		namespace Model
		{
			class ALIBABACLOUD_VCS_EXPORT ListPersonTraceDetailsRequest : public RpcServiceRequest
			{

			public:
				ListPersonTraceDetailsRequest();
				~ListPersonTraceDetailsRequest();

				std::string getCorpId()const;
				void setCorpId(const std::string& corpId);
				std::string getEndTime()const;
				void setEndTime(const std::string& endTime);
				std::string getStartTime()const;
				void setStartTime(const std::string& startTime);
				long getPageNumber()const;
				void setPageNumber(long pageNumber);
				std::string getSubId()const;
				void setSubId(const std::string& subId);
				long getPageSize()const;
				void setPageSize(long pageSize);
				std::string getDataSourceId()const;
				void setDataSourceId(const std::string& dataSourceId);
				std::string getPersonId()const;
				void setPersonId(const std::string& personId);

            private:
				std::string corpId_;
				std::string endTime_;
				std::string startTime_;
				long pageNumber_;
				std::string subId_;
				long pageSize_;
				std::string dataSourceId_;
				std::string personId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VCS_MODEL_LISTPERSONTRACEDETAILSREQUEST_H_