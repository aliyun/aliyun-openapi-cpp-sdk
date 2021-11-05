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

#ifndef ALIBABACLOUD_IOT_MODEL_QUERYJOBRESULT_H_
#define ALIBABACLOUD_IOT_MODEL_QUERYJOBRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/iot/IotExport.h>

namespace AlibabaCloud
{
	namespace Iot
	{
		namespace Model
		{
			class ALIBABACLOUD_IOT_EXPORT QueryJobResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct RolloutConfig
					{
						int maximumPerMinute;
						std::string messageQoS;
					};
					struct TimeoutConfig
					{
						int inProgressTimeoutInMinutes;
					};
					struct JobFile
					{
						std::string fileUrl;
						std::string sign;
						std::string signMethod;
					};
					struct TargetConfig
					{
						struct TargetDevicesItem
						{
							std::string productKey;
							std::string deviceName;
						};
						std::vector<TargetDevicesItem> targetDevices;
						std::string targetGroup;
						std::string targetType;
						std::string targetProduct;
					};
					std::string status;
					TimeoutConfig timeoutConfig;
					long scheduledTime;
					std::string description;
					JobFile jobFile;
					std::string jobDocument;
					std::string jobName;
					TargetConfig targetConfig;
					RolloutConfig rolloutConfig;
					std::string type;
					std::string utcCreate;
					std::string utcModified;
					std::string jobId;
				};


				QueryJobResult();
				explicit QueryJobResult(const std::string &payload);
				~QueryJobResult();
				Data getData()const;
				std::string getErrorMessage()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				Data data_;
				std::string errorMessage_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IOT_MODEL_QUERYJOBRESULT_H_