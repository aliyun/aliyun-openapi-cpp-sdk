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

#ifndef ALIBABACLOUD_DYVMSAPI_MODEL_DOUBLECALLSEATREQUEST_H_
#define ALIBABACLOUD_DYVMSAPI_MODEL_DOUBLECALLSEATREQUEST_H_

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
			class ALIBABACLOUD_DYVMSAPI_EXPORT DoubleCallSeatRequest : public RpcServiceRequest
			{

			public:
				DoubleCallSeatRequest();
				~DoubleCallSeatRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getCallerShowNumber()const;
				void setCallerShowNumber(const std::string& callerShowNumber);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				int getSessionTimeout()const;
				void setSessionTimeout(int sessionTimeout);
				std::string getCalledNumber()const;
				void setCalledNumber(const std::string& calledNumber);
				std::string getVoiceCode()const;
				void setVoiceCode(const std::string& voiceCode);
				std::string getCalledShowNumber()const;
				void setCalledShowNumber(const std::string& calledShowNumber);
				bool getAsrFlag()const;
				void setAsrFlag(bool asrFlag);
				std::string getCallType()const;
				void setCallType(const std::string& callType);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				bool getRecordFlag()const;
				void setRecordFlag(bool recordFlag);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				int getRecordPoint()const;
				void setRecordPoint(int recordPoint);
				std::string getOutId()const;
				void setOutId(const std::string& outId);
				std::string getAsrModelId()const;
				void setAsrModelId(const std::string& asrModelId);
				std::string getCallerNumber()const;
				void setCallerNumber(const std::string& callerNumber);

            private:
				long resourceOwnerId_;
				std::string callerShowNumber_;
				std::string accessKeyId_;
				int sessionTimeout_;
				std::string calledNumber_;
				std::string voiceCode_;
				std::string calledShowNumber_;
				bool asrFlag_;
				std::string callType_;
				std::string resourceOwnerAccount_;
				bool recordFlag_;
				long ownerId_;
				int recordPoint_;
				std::string outId_;
				std::string asrModelId_;
				std::string callerNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DYVMSAPI_MODEL_DOUBLECALLSEATREQUEST_H_