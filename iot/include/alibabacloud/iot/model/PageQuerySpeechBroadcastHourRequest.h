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

#ifndef ALIBABACLOUD_IOT_MODEL_PAGEQUERYSPEECHBROADCASTHOURREQUEST_H_
#define ALIBABACLOUD_IOT_MODEL_PAGEQUERYSPEECHBROADCASTHOURREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/iot/IotExport.h>

namespace AlibabaCloud
{
	namespace Iot
	{
		namespace Model
		{
			class ALIBABACLOUD_IOT_EXPORT PageQuerySpeechBroadcastHourRequest : public RpcServiceRequest
			{

			public:
				PageQuerySpeechBroadcastHourRequest();
				~PageQuerySpeechBroadcastHourRequest();

				std::string getQueryDateTimeHour()const;
				void setQueryDateTimeHour(const std::string& queryDateTimeHour);
				std::string getIotInstanceId()const;
				void setIotInstanceId(const std::string& iotInstanceId);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getPageToken()const;
				void setPageToken(const std::string& pageToken);
				std::string getShareTaskCode()const;
				void setShareTaskCode(const std::string& shareTaskCode);
				std::string getApiProduct()const;
				void setApiProduct(const std::string& apiProduct);
				std::string getApiRevision()const;
				void setApiRevision(const std::string& apiRevision);

            private:
				std::string queryDateTimeHour_;
				std::string iotInstanceId_;
				int pageSize_;
				std::string pageToken_;
				std::string shareTaskCode_;
				std::string apiProduct_;
				std::string apiRevision_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IOT_MODEL_PAGEQUERYSPEECHBROADCASTHOURREQUEST_H_