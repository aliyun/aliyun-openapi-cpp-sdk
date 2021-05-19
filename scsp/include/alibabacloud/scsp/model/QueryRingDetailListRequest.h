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

#ifndef ALIBABACLOUD_SCSP_MODEL_QUERYRINGDETAILLISTREQUEST_H_
#define ALIBABACLOUD_SCSP_MODEL_QUERYRINGDETAILLISTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/scsp/ScspExport.h>

namespace AlibabaCloud
{
	namespace Scsp
	{
		namespace Model
		{
			class ALIBABACLOUD_SCSP_EXPORT QueryRingDetailListRequest : public RpcServiceRequest
			{

			public:
				QueryRingDetailListRequest();
				~QueryRingDetailListRequest();

				std::string getFromPhoneNumList()const;
				void setFromPhoneNumList(const std::string& fromPhoneNumList);
				std::string getCallOutStatus()const;
				void setCallOutStatus(const std::string& callOutStatus);
				long getStartDate()const;
				void setStartDate(long startDate);
				long getEndDate()const;
				void setEndDate(long endDate);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				int getPageNo()const;
				void setPageNo(int pageNo);
				std::string getExtra()const;
				void setExtra(const std::string& extra);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getToPhoneNumList()const;
				void setToPhoneNumList(const std::string& toPhoneNumList);

            private:
				std::string fromPhoneNumList_;
				std::string callOutStatus_;
				long startDate_;
				long endDate_;
				std::string instanceId_;
				int pageNo_;
				std::string extra_;
				int pageSize_;
				std::string toPhoneNumList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SCSP_MODEL_QUERYRINGDETAILLISTREQUEST_H_