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

#ifndef ALIBABACLOUD_SCSP_MODEL_QUERYHOTLINESESSIONREQUEST_H_
#define ALIBABACLOUD_SCSP_MODEL_QUERYHOTLINESESSIONREQUEST_H_

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
			class ALIBABACLOUD_SCSP_EXPORT QueryHotlineSessionRequest : public RpcServiceRequest
			{

			public:
				QueryHotlineSessionRequest();
				~QueryHotlineSessionRequest();

				long getGroupId()const;
				void setGroupId(long groupId);
				std::string getServicerId()const;
				void setServicerId(const std::string& servicerId);
				std::string getParams()const;
				void setParams(const std::string& params);
				std::string getGroupName()const;
				void setGroupName(const std::string& groupName);
				std::string getAcid()const;
				void setAcid(const std::string& acid);
				std::string getCallingNumber()const;
				void setCallingNumber(const std::string& callingNumber);
				long getQueryEndTime()const;
				void setQueryEndTime(long queryEndTime);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getCalledNumber()const;
				void setCalledNumber(const std::string& calledNumber);
				std::string getRequestId()const;
				void setRequestId(const std::string& requestId);
				int getPageNo()const;
				void setPageNo(int pageNo);
				long getQueryStartTime()const;
				void setQueryStartTime(long queryStartTime);
				std::string getServicerName()const;
				void setServicerName(const std::string& servicerName);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getCallResult()const;
				void setCallResult(const std::string& callResult);
				int getCallType()const;
				void setCallType(int callType);
				std::string getMemberName()const;
				void setMemberName(const std::string& memberName);
				std::string getMemberId()const;
				void setMemberId(const std::string& memberId);

            private:
				long groupId_;
				std::string servicerId_;
				std::string params_;
				std::string groupName_;
				std::string acid_;
				std::string callingNumber_;
				long queryEndTime_;
				std::string instanceId_;
				std::string calledNumber_;
				std::string requestId_;
				int pageNo_;
				long queryStartTime_;
				std::string servicerName_;
				int pageSize_;
				std::string callResult_;
				int callType_;
				std::string memberName_;
				std::string memberId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SCSP_MODEL_QUERYHOTLINESESSIONREQUEST_H_