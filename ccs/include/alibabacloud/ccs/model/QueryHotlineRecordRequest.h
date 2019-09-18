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

#ifndef ALIBABACLOUD_CCS_MODEL_QUERYHOTLINERECORDREQUEST_H_
#define ALIBABACLOUD_CCS_MODEL_QUERYHOTLINERECORDREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ccs/CcsExport.h>

namespace AlibabaCloud
{
	namespace Ccs
	{
		namespace Model
		{
			class ALIBABACLOUD_CCS_EXPORT QueryHotlineRecordRequest : public RpcServiceRequest
			{

			public:
				QueryHotlineRecordRequest();
				~QueryHotlineRecordRequest();

				long getMaxTalkDuration()const;
				void setMaxTalkDuration(long maxTalkDuration);
				std::string getStartTime()const;
				void setStartTime(const std::string& startTime);
				int getPageNum()const;
				void setPageNum(int pageNum);
				std::string getCategoryIds()const;
				void setCategoryIds(const std::string& categoryIds);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getCallType()const;
				void setCallType(const std::string& callType);
				std::string getCcsInstanceId()const;
				void setCcsInstanceId(const std::string& ccsInstanceId);
				std::string getVisitorId()const;
				void setVisitorId(const std::string& visitorId);
				std::string getAgentId()const;
				void setAgentId(const std::string& agentId);
				std::string getGroupId()const;
				void setGroupId(const std::string& groupId);
				std::string getEndTime()const;
				void setEndTime(const std::string& endTime);
				std::string getSatisfaction()const;
				void setSatisfaction(const std::string& satisfaction);
				long getMinTalkDuratoin()const;
				void setMinTalkDuratoin(long minTalkDuratoin);
				std::string getVisitorProvince()const;
				void setVisitorProvince(const std::string& visitorProvince);
				std::string getVisitorPhone()const;
				void setVisitorPhone(const std::string& visitorPhone);
				std::string getStatus()const;
				void setStatus(const std::string& status);

            private:
				long maxTalkDuration_;
				std::string startTime_;
				int pageNum_;
				std::string categoryIds_;
				int pageSize_;
				std::string callType_;
				std::string ccsInstanceId_;
				std::string visitorId_;
				std::string agentId_;
				std::string groupId_;
				std::string endTime_;
				std::string satisfaction_;
				long minTalkDuratoin_;
				std::string visitorProvince_;
				std::string visitorPhone_;
				std::string status_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CCS_MODEL_QUERYHOTLINERECORDREQUEST_H_