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

#ifndef ALIBABACLOUD_EVENTBRIDGE_MODEL_GETAPIDESTINATIONRESULT_H_
#define ALIBABACLOUD_EVENTBRIDGE_MODEL_GETAPIDESTINATIONRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/eventbridge/EventbridgeExport.h>

namespace AlibabaCloud
{
	namespace Eventbridge
	{
		namespace Model
		{
			class ALIBABACLOUD_EVENTBRIDGE_EXPORT GetApiDestinationResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct HttpApiParameters
					{
						struct ApiParametersItem
						{
							std::string type;
							std::string description;
							std::string in;
							std::string name;
						};
						std::string endpoint;
						std::vector<ApiParametersItem> apiParameters;
						std::string method;
					};
					std::string connectionName;
					long gmtCreate;
					std::string description;
					HttpApiParameters httpApiParameters;
					std::string apiDestinationName;
					long invocationRateLimitPerSecond;
				};


				GetApiDestinationResult();
				explicit GetApiDestinationResult(const std::string &payload);
				~GetApiDestinationResult();
				std::string getMessage()const;
				Data getData()const;
				std::string getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				std::string code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EVENTBRIDGE_MODEL_GETAPIDESTINATIONRESULT_H_