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

#ifndef ALIBABACLOUD_IDRSSERVICE_MODEL_UPDATESLRCONFIGURATIONREQUEST_H_
#define ALIBABACLOUD_IDRSSERVICE_MODEL_UPDATESLRCONFIGURATIONREQUEST_H_

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
			class ALIBABACLOUD_IDRSSERVICE_EXPORT UpdateSlrConfigurationRequest : public RpcServiceRequest
			{

			public:
				UpdateSlrConfigurationRequest();
				~UpdateSlrConfigurationRequest();

				std::string getMqInstanceId()const;
				void setMqInstanceId(const std::string& mqInstanceId);
				std::string getMqGroupId()const;
				void setMqGroupId(const std::string& mqGroupId);
				std::vector<std::string> getMqEvent()const;
				void setMqEvent(const std::vector<std::string>& mqEvent);
				std::string getMqEndpoint()const;
				void setMqEndpoint(const std::string& mqEndpoint);
				std::string getMqTopic()const;
				void setMqTopic(const std::string& mqTopic);
				bool getMqSubscribe()const;
				void setMqSubscribe(bool mqSubscribe);

            private:
				std::string mqInstanceId_;
				std::string mqGroupId_;
				std::vector<std::string> mqEvent_;
				std::string mqEndpoint_;
				std::string mqTopic_;
				bool mqSubscribe_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IDRSSERVICE_MODEL_UPDATESLRCONFIGURATIONREQUEST_H_