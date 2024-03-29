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

#ifndef ALIBABACLOUD_RETAILCLOUD_MODEL_CREATEAPPMONITORSREQUEST_H_
#define ALIBABACLOUD_RETAILCLOUD_MODEL_CREATEAPPMONITORSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/retailcloud/RetailcloudExport.h>

namespace AlibabaCloud
{
	namespace Retailcloud
	{
		namespace Model
		{
			class ALIBABACLOUD_RETAILCLOUD_EXPORT CreateAppMonitorsRequest : public RpcServiceRequest
			{

			public:
				CreateAppMonitorsRequest();
				~CreateAppMonitorsRequest();

				std::vector<long> getAppIds()const;
				void setAppIds(const std::vector<long>& appIds);
				long getMainUserId()const;
				void setMainUserId(long mainUserId);
				int getEnvType()const;
				void setEnvType(int envType);
				long getAlarmTemplateId()const;
				void setAlarmTemplateId(long alarmTemplateId);
				std::string getSilenceTime()const;
				void setSilenceTime(const std::string& silenceTime);

            private:
				std::vector<long> appIds_;
				long mainUserId_;
				int envType_;
				long alarmTemplateId_;
				std::string silenceTime_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RETAILCLOUD_MODEL_CREATEAPPMONITORSREQUEST_H_