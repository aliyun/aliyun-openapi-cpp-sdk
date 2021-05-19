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

#ifndef ALIBABACLOUD_SCSP_MODEL_CREATEOUTERCALLCENTERDATAREQUEST_H_
#define ALIBABACLOUD_SCSP_MODEL_CREATEOUTERCALLCENTERDATAREQUEST_H_

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
			class ALIBABACLOUD_SCSP_EXPORT CreateOuterCallCenterDataRequest : public RpcServiceRequest
			{

			public:
				CreateOuterCallCenterDataRequest();
				~CreateOuterCallCenterDataRequest();

				std::string getExtInfo()const;
				void setExtInfo(const std::string& extInfo);
				std::string getRecordUrl()const;
				void setRecordUrl(const std::string& recordUrl);
				std::string getEndReason()const;
				void setEndReason(const std::string& endReason);
				std::string getSessionId()const;
				void setSessionId(const std::string& sessionId);
				std::string getFromPhoneNum()const;
				void setFromPhoneNum(const std::string& fromPhoneNum);
				std::string getInterveneTime()const;
				void setInterveneTime(const std::string& interveneTime);
				std::string getBizType()const;
				void setBizType(const std::string& bizType);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getToPhoneNum()const;
				void setToPhoneNum(const std::string& toPhoneNum);
				std::string getBizId()const;
				void setBizId(const std::string& bizId);
				std::string getTenantId()const;
				void setTenantId(const std::string& tenantId);
				std::string getCallType()const;
				void setCallType(const std::string& callType);
				std::string getUserInfo()const;
				void setUserInfo(const std::string& userInfo);

            private:
				std::string extInfo_;
				std::string recordUrl_;
				std::string endReason_;
				std::string sessionId_;
				std::string fromPhoneNum_;
				std::string interveneTime_;
				std::string bizType_;
				std::string instanceId_;
				std::string toPhoneNum_;
				std::string bizId_;
				std::string tenantId_;
				std::string callType_;
				std::string userInfo_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SCSP_MODEL_CREATEOUTERCALLCENTERDATAREQUEST_H_