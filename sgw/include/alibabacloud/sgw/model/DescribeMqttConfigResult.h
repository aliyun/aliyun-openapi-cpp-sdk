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

#ifndef ALIBABACLOUD_SGW_MODEL_DESCRIBEMQTTCONFIGRESULT_H_
#define ALIBABACLOUD_SGW_MODEL_DESCRIBEMQTTCONFIGRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sgw/SgwExport.h>

namespace AlibabaCloud
{
	namespace Sgw
	{
		namespace Model
		{
			class ALIBABACLOUD_SGW_EXPORT DescribeMqttConfigResult : public ServiceResult
			{
			public:


				DescribeMqttConfigResult();
				explicit DescribeMqttConfigResult(const std::string &payload);
				~DescribeMqttConfigResult();
				std::string getMessage()const;
				bool getIsEnabled()const;
				std::string getCode()const;
				std::string getInternalBrokerUrl()const;
				bool getSuccess()const;
				std::string getBrokerUrl()const;
				std::string getGroupId()const;
				std::string getMqttInstanceId()const;
				std::string getUsername()const;
				std::string getSubscribeTopic()const;
				std::string getPublishTopic()const;
				std::string getAuthType()const;
				std::string getPassword()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				bool isEnabled_;
				std::string code_;
				std::string internalBrokerUrl_;
				bool success_;
				std::string brokerUrl_;
				std::string groupId_;
				std::string mqttInstanceId_;
				std::string username_;
				std::string subscribeTopic_;
				std::string publishTopic_;
				std::string authType_;
				std::string password_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SGW_MODEL_DESCRIBEMQTTCONFIGRESULT_H_