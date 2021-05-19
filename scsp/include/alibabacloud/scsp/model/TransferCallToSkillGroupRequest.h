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

#ifndef ALIBABACLOUD_SCSP_MODEL_TRANSFERCALLTOSKILLGROUPREQUEST_H_
#define ALIBABACLOUD_SCSP_MODEL_TRANSFERCALLTOSKILLGROUPREQUEST_H_

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
			class ALIBABACLOUD_SCSP_EXPORT TransferCallToSkillGroupRequest : public RpcServiceRequest
			{

			public:
				TransferCallToSkillGroupRequest();
				~TransferCallToSkillGroupRequest();

				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getAccountName()const;
				void setAccountName(const std::string& accountName);
				long getSkillGroupId()const;
				void setSkillGroupId(long skillGroupId);
				std::string getCallId()const;
				void setCallId(const std::string& callId);
				std::string getJobId()const;
				void setJobId(const std::string& jobId);
				std::string getConnectionId()const;
				void setConnectionId(const std::string& connectionId);
				std::string getHoldConnectionId()const;
				void setHoldConnectionId(const std::string& holdConnectionId);
				int getType()const;
				void setType(int type);
				bool getIsSingleTransfer()const;
				void setIsSingleTransfer(bool isSingleTransfer);

            private:
				std::string clientToken_;
				std::string instanceId_;
				std::string accountName_;
				long skillGroupId_;
				std::string callId_;
				std::string jobId_;
				std::string connectionId_;
				std::string holdConnectionId_;
				int type_;
				bool isSingleTransfer_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SCSP_MODEL_TRANSFERCALLTOSKILLGROUPREQUEST_H_