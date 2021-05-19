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

#ifndef ALIBABACLOUD_SCSP_MODEL_GETOUTERCALLCENTERDATALISTREQUEST_H_
#define ALIBABACLOUD_SCSP_MODEL_GETOUTERCALLCENTERDATALISTREQUEST_H_

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
			class ALIBABACLOUD_SCSP_EXPORT GetOuterCallCenterDataListRequest : public RpcServiceRequest
			{

			public:
				GetOuterCallCenterDataListRequest();
				~GetOuterCallCenterDataListRequest();

				std::string getQueryEndTime()const;
				void setQueryEndTime(const std::string& queryEndTime);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getToPhoneNum()const;
				void setToPhoneNum(const std::string& toPhoneNum);
				std::string getQueryStartTime()const;
				void setQueryStartTime(const std::string& queryStartTime);
				std::string getBizId()const;
				void setBizId(const std::string& bizId);
				std::string getSessionId()const;
				void setSessionId(const std::string& sessionId);
				std::string getFromPhoneNum()const;
				void setFromPhoneNum(const std::string& fromPhoneNum);

            private:
				std::string queryEndTime_;
				std::string instanceId_;
				std::string toPhoneNum_;
				std::string queryStartTime_;
				std::string bizId_;
				std::string sessionId_;
				std::string fromPhoneNum_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SCSP_MODEL_GETOUTERCALLCENTERDATALISTREQUEST_H_