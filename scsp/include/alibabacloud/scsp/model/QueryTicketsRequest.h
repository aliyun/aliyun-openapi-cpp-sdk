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

#ifndef ALIBABACLOUD_SCSP_MODEL_QUERYTICKETSREQUEST_H_
#define ALIBABACLOUD_SCSP_MODEL_QUERYTICKETSREQUEST_H_

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
			class ALIBABACLOUD_SCSP_EXPORT QueryTicketsRequest : public RpcServiceRequest
			{

			public:
				QueryTicketsRequest();
				~QueryTicketsRequest();

				long getSrType()const;
				void setSrType(long srType);
				long getTouchId()const;
				void setTouchId(long touchId);
				long getDealId()const;
				void setDealId(long dealId);
				int getCurrentPage()const;
				void setCurrentPage(int currentPage);
				int getTaskStatus()const;
				void setTaskStatus(int taskStatus);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getAccountName()const;
				void setAccountName(const std::string& accountName);
				long getCaseId()const;
				void setCaseId(long caseId);
				std::string getExtra()const;
				void setExtra(const std::string& extra);
				int getChannelType()const;
				void setChannelType(int channelType);
				int getPageSize()const;
				void setPageSize(int pageSize);
				int getCaseType()const;
				void setCaseType(int caseType);
				int getCaseStatus()const;
				void setCaseStatus(int caseStatus);
				std::string getChannelId()const;
				void setChannelId(const std::string& channelId);

            private:
				long srType_;
				long touchId_;
				long dealId_;
				int currentPage_;
				int taskStatus_;
				std::string instanceId_;
				std::string accountName_;
				long caseId_;
				std::string extra_;
				int channelType_;
				int pageSize_;
				int caseType_;
				int caseStatus_;
				std::string channelId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SCSP_MODEL_QUERYTICKETSREQUEST_H_