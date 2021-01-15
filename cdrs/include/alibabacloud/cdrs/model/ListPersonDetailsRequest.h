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

#ifndef ALIBABACLOUD_CDRS_MODEL_LISTPERSONDETAILSREQUEST_H_
#define ALIBABACLOUD_CDRS_MODEL_LISTPERSONDETAILSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cdrs/CDRSExport.h>

namespace AlibabaCloud
{
	namespace CDRS
	{
		namespace Model
		{
			class ALIBABACLOUD_CDRS_EXPORT ListPersonDetailsRequest : public RpcServiceRequest
			{

			public:
				ListPersonDetailsRequest();
				~ListPersonDetailsRequest();

				std::string getSchema()const;
				void setSchema(const std::string& schema);
				std::string getCorpId()const;
				void setCorpId(const std::string& corpId);
				std::string getEndTime()const;
				void setEndTime(const std::string& endTime);
				std::string getStartTime()const;
				void setStartTime(const std::string& startTime);
				long getPageNumber()const;
				void setPageNumber(long pageNumber);
				long getPageSize()const;
				void setPageSize(long pageSize);
				std::string getPersonId()const;
				void setPersonId(const std::string& personId);

            private:
				std::string schema_;
				std::string corpId_;
				std::string endTime_;
				std::string startTime_;
				long pageNumber_;
				long pageSize_;
				std::string personId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CDRS_MODEL_LISTPERSONDETAILSREQUEST_H_