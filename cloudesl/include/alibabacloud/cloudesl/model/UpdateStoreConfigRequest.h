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

#ifndef ALIBABACLOUD_CLOUDESL_MODEL_UPDATESTORECONFIGREQUEST_H_
#define ALIBABACLOUD_CLOUDESL_MODEL_UPDATESTORECONFIGREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cloudesl/CloudeslExport.h>

namespace AlibabaCloud
{
	namespace Cloudesl
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDESL_EXPORT UpdateStoreConfigRequest : public RpcServiceRequest
			{

			public:
				UpdateStoreConfigRequest();
				~UpdateStoreConfigRequest();

				std::string getExtraParams()const;
				void setExtraParams(const std::string& extraParams);
				std::string getStoreId()const;
				void setStoreId(const std::string& storeId);
				std::string getSubscribeContents()const;
				void setSubscribeContents(const std::string& subscribeContents);
				bool getEnableNotification()const;
				void setEnableNotification(bool enableNotification);
				std::string getNotificationWebHook()const;
				void setNotificationWebHook(const std::string& notificationWebHook);
				std::string getNotificationSilentTimes()const;
				void setNotificationSilentTimes(const std::string& notificationSilentTimes);

            private:
				std::string extraParams_;
				std::string storeId_;
				std::string subscribeContents_;
				bool enableNotification_;
				std::string notificationWebHook_;
				std::string notificationSilentTimes_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDESL_MODEL_UPDATESTORECONFIGREQUEST_H_