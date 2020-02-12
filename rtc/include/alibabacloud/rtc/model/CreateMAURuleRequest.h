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

#ifndef ALIBABACLOUD_RTC_MODEL_CREATEMAURULEREQUEST_H_
#define ALIBABACLOUD_RTC_MODEL_CREATEMAURULEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/rtc/RtcExport.h>

namespace AlibabaCloud
{
	namespace Rtc
	{
		namespace Model
		{
			class ALIBABACLOUD_RTC_EXPORT CreateMAURuleRequest : public RpcServiceRequest
			{

			public:
				CreateMAURuleRequest();
				~CreateMAURuleRequest();

				std::string getUseridPrefix()const;
				void setUseridPrefix(const std::string& useridPrefix);
				std::string getChannelPrefix()const;
				void setChannelPrefix(const std::string& channelPrefix);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				long getMauTemplateId()const;
				void setMauTemplateId(long mauTemplateId);
				std::string getAppId()const;
				void setAppId(const std::string& appId);
				std::string getCallBack()const;
				void setCallBack(const std::string& callBack);

            private:
				std::string useridPrefix_;
				std::string channelPrefix_;
				long ownerId_;
				long mauTemplateId_;
				std::string appId_;
				std::string callBack_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RTC_MODEL_CREATEMAURULEREQUEST_H_