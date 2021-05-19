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

#ifndef ALIBABACLOUD_SCSP_MODEL_SEARCHTICKETBYPHONEREQUEST_H_
#define ALIBABACLOUD_SCSP_MODEL_SEARCHTICKETBYPHONEREQUEST_H_

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
			class ALIBABACLOUD_SCSP_EXPORT SearchTicketByPhoneRequest : public RpcServiceRequest
			{

			public:
				SearchTicketByPhoneRequest();
				~SearchTicketByPhoneRequest();

				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getPhone()const;
				void setPhone(const std::string& phone);
				long getTemplateId()const;
				void setTemplateId(long templateId);
				std::string getTicketStatus()const;
				void setTicketStatus(const std::string& ticketStatus);
				int getPageNo()const;
				void setPageNo(int pageNo);
				int getPageSize()const;
				void setPageSize(int pageSize);
				long getStartTime()const;
				void setStartTime(long startTime);
				long getEndTime()const;
				void setEndTime(long endTime);

            private:
				std::string clientToken_;
				std::string instanceId_;
				std::string phone_;
				long templateId_;
				std::string ticketStatus_;
				int pageNo_;
				int pageSize_;
				long startTime_;
				long endTime_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SCSP_MODEL_SEARCHTICKETBYPHONEREQUEST_H_