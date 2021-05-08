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

#ifndef ALIBABACLOUD_IOT_MODEL_CREATEJOBREQUEST_H_
#define ALIBABACLOUD_IOT_MODEL_CREATEJOBREQUEST_H_

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
			class ALIBABACLOUD_IOT_EXPORT CreateJobRequest : public RpcServiceRequest
			{

			public:
				CreateJobRequest();
				~CreateJobRequest();

				std::string getJobDocument()const;
				void setJobDocument(const std::string& jobDocument);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getType()const;
				void setType(const std::string& type);
				std::string getRolloutConfig()const;
				void setRolloutConfig(const std::string& rolloutConfig);
				std::string getIotInstanceId()const;
				void setIotInstanceId(const std::string& iotInstanceId);
				std::string getJobName()const;
				void setJobName(const std::string& jobName);
				std::string getTimeoutConfig()const;
				void setTimeoutConfig(const std::string& timeoutConfig);
				std::string getTargetConfig()const;
				void setTargetConfig(const std::string& targetConfig);
				std::string getJobFile()const;
				void setJobFile(const std::string& jobFile);
				std::string getApiProduct()const;
				void setApiProduct(const std::string& apiProduct);
				std::string getApiRevision()const;
				void setApiRevision(const std::string& apiRevision);
				long getScheduledTime()const;
				void setScheduledTime(long scheduledTime);

            private:
				std::string jobDocument_;
				std::string description_;
				std::string type_;
				std::string rolloutConfig_;
				std::string iotInstanceId_;
				std::string jobName_;
				std::string timeoutConfig_;
				std::string targetConfig_;
				std::string jobFile_;
				std::string apiProduct_;
				std::string apiRevision_;
				long scheduledTime_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IOT_MODEL_CREATEJOBREQUEST_H_