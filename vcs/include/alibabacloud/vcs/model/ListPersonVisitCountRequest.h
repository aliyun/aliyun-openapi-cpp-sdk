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

#ifndef ALIBABACLOUD_VCS_MODEL_LISTPERSONVISITCOUNTREQUEST_H_
#define ALIBABACLOUD_VCS_MODEL_LISTPERSONVISITCOUNTREQUEST_H_

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
			class ALIBABACLOUD_VCS_EXPORT ListPersonVisitCountRequest : public RpcServiceRequest
			{

			public:
				ListPersonVisitCountRequest();
				~ListPersonVisitCountRequest();

				std::string getCorpId()const;
				void setCorpId(const std::string& corpId);
				std::string getEndTime()const;
				void setEndTime(const std::string& endTime);
				std::string getCountType()const;
				void setCountType(const std::string& countType);
				std::string getStartTime()const;
				void setStartTime(const std::string& startTime);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getTimeAggregateType()const;
				void setTimeAggregateType(const std::string& timeAggregateType);
				int getMaxVal()const;
				void setMaxVal(int maxVal);
				std::string getTagCode()const;
				void setTagCode(const std::string& tagCode);
				int getMinVal()const;
				void setMinVal(int minVal);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getAggregateType()const;
				void setAggregateType(const std::string& aggregateType);

            private:
				std::string corpId_;
				std::string endTime_;
				std::string countType_;
				std::string startTime_;
				int pageNumber_;
				std::string timeAggregateType_;
				int maxVal_;
				std::string tagCode_;
				int minVal_;
				int pageSize_;
				std::string aggregateType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VCS_MODEL_LISTPERSONVISITCOUNTREQUEST_H_