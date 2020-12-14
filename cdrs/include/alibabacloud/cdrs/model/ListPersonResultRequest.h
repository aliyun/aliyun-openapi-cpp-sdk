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

#ifndef ALIBABACLOUD_CDRS_MODEL_LISTPERSONRESULTREQUEST_H_
#define ALIBABACLOUD_CDRS_MODEL_LISTPERSONRESULTREQUEST_H_

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
			class ALIBABACLOUD_CDRS_EXPORT ListPersonResultRequest : public RpcServiceRequest
			{

			public:
				ListPersonResultRequest();
				~ListPersonResultRequest();

				std::string getProfession()const;
				void setProfession(const std::string& profession);
				std::string getCorpId()const;
				void setCorpId(const std::string& corpId);
				std::string getGender()const;
				void setGender(const std::string& gender);
				std::string getEndTime()const;
				void setEndTime(const std::string& endTime);
				std::string getStartTime()const;
				void setStartTime(const std::string& startTime);
				long getPageNumber()const;
				void setPageNumber(long pageNumber);
				long getPageSize()const;
				void setPageSize(long pageSize);
				std::string getAge()const;
				void setAge(const std::string& age);

            private:
				std::string profession_;
				std::string corpId_;
				std::string gender_;
				std::string endTime_;
				std::string startTime_;
				long pageNumber_;
				long pageSize_;
				std::string age_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CDRS_MODEL_LISTPERSONRESULTREQUEST_H_