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

#ifndef ALIBABACLOUD_RETAILCLOUD_MODEL_UPDATEAPPMONITORSREQUEST_H_
#define ALIBABACLOUD_RETAILCLOUD_MODEL_UPDATEAPPMONITORSREQUEST_H_

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
			class ALIBABACLOUD_RETAILCLOUD_EXPORT UpdateAppMonitorsRequest : public RpcServiceRequest
			{

			public:
				UpdateAppMonitorsRequest();
				~UpdateAppMonitorsRequest();

				long getMainUserId()const;
				void setMainUserId(long mainUserId);
				std::string getSilenceTime()const;
				void setSilenceTime(const std::string& silenceTime);
				std::vector<long> getMonitorIds()const;
				void setMonitorIds(const std::vector<long>& monitorIds);
				long getTemplateId()const;
				void setTemplateId(long templateId);

            private:
				long mainUserId_;
				std::string silenceTime_;
				std::vector<long> monitorIds_;
				long templateId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RETAILCLOUD_MODEL_UPDATEAPPMONITORSREQUEST_H_