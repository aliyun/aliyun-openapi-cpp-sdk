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

#ifndef ALIBABACLOUD_DYVMSAPI_MODEL_CREATEROBOTTASKREQUEST_H_
#define ALIBABACLOUD_DYVMSAPI_MODEL_CREATEROBOTTASKREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dyvmsapi/DyvmsapiExport.h>

namespace AlibabaCloud
{
	namespace Dyvmsapi
	{
		namespace Model
		{
			class ALIBABACLOUD_DYVMSAPI_EXPORT CreateRobotTaskRequest : public RpcServiceRequest
			{

			public:
				CreateRobotTaskRequest();
				~CreateRobotTaskRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getRecallStateCodes()const;
				void setRecallStateCodes(const std::string& recallStateCodes);
				std::string getTaskName()const;
				void setTaskName(const std::string& taskName);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				int getRecallTimes()const;
				void setRecallTimes(int recallTimes);
				bool getIsSelfLine()const;
				void setIsSelfLine(bool isSelfLine);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				int getRetryType()const;
				void setRetryType(int retryType);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				long getDialogId()const;
				void setDialogId(long dialogId);
				std::string getCaller()const;
				void setCaller(const std::string& caller);
				bool getNumberStatusIdent()const;
				void setNumberStatusIdent(bool numberStatusIdent);
				std::string getCorpName()const;
				void setCorpName(const std::string& corpName);
				int getRecallInterval()const;
				void setRecallInterval(int recallInterval);

            private:
				long resourceOwnerId_;
				std::string recallStateCodes_;
				std::string taskName_;
				std::string accessKeyId_;
				int recallTimes_;
				bool isSelfLine_;
				std::string resourceOwnerAccount_;
				int retryType_;
				long ownerId_;
				long dialogId_;
				std::string caller_;
				bool numberStatusIdent_;
				std::string corpName_;
				int recallInterval_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DYVMSAPI_MODEL_CREATEROBOTTASKREQUEST_H_