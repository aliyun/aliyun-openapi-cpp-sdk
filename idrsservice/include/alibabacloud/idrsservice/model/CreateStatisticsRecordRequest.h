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

#ifndef ALIBABACLOUD_IDRSSERVICE_MODEL_CREATESTATISTICSRECORDREQUEST_H_
#define ALIBABACLOUD_IDRSSERVICE_MODEL_CREATESTATISTICSRECORDREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/idrsservice/IdrsserviceExport.h>

namespace AlibabaCloud
{
	namespace Idrsservice
	{
		namespace Model
		{
			class ALIBABACLOUD_IDRSSERVICE_EXPORT CreateStatisticsRecordRequest : public RpcServiceRequest
			{

			public:
				CreateStatisticsRecordRequest();
				~CreateStatisticsRecordRequest();

				std::string getBeginAt()const;
				void setBeginAt(const std::string& beginAt);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getEndAt()const;
				void setEndAt(const std::string& endAt);
				std::string getDeviceId()const;
				void setDeviceId(const std::string& deviceId);
				int getDeviceType()const;
				void setDeviceType(int deviceType);
				std::string getAppId()const;
				void setAppId(const std::string& appId);

            private:
				std::string beginAt_;
				std::string clientToken_;
				std::string endAt_;
				std::string deviceId_;
				int deviceType_;
				std::string appId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IDRSSERVICE_MODEL_CREATESTATISTICSRECORDREQUEST_H_