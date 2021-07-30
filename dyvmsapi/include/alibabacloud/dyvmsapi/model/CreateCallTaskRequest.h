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

#ifndef ALIBABACLOUD_DYVMSAPI_MODEL_CREATECALLTASKREQUEST_H_
#define ALIBABACLOUD_DYVMSAPI_MODEL_CREATECALLTASKREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dyvmsapi/DyvmsapiExport.h>

namespace AlibabaCloud
{
	namespace Dyvmsapi
	{
		namespace Model
		{
			class ALIBABACLOUD_DYVMSAPI_EXPORT CreateCallTaskRequest : public RpcServiceRequest
			{

			public:
				CreateCallTaskRequest();
				~CreateCallTaskRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getScheduleType()const;
				void setScheduleType(const std::string& scheduleType);
				std::string getData()const;
				void setData(const std::string& data);
				std::string getTaskName()const;
				void setTaskName(const std::string& taskName);
				std::string getStopTime()const;
				void setStopTime(const std::string& stopTime);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getDataType()const;
				void setDataType(const std::string& dataType);
				std::string getTemplateName()const;
				void setTemplateName(const std::string& templateName);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getResource()const;
				void setResource(const std::string& resource);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getResourceType()const;
				void setResourceType(const std::string& resourceType);
				std::string getBizType()const;
				void setBizType(const std::string& bizType);
				std::string getFireTime()const;
				void setFireTime(const std::string& fireTime);
				std::string getTemplateCode()const;
				void setTemplateCode(const std::string& templateCode);

            private:
				long resourceOwnerId_;
				std::string scheduleType_;
				std::string data_;
				std::string taskName_;
				std::string stopTime_;
				std::string accessKeyId_;
				std::string dataType_;
				std::string templateName_;
				std::string resourceOwnerAccount_;
				std::string resource_;
				long ownerId_;
				std::string resourceType_;
				std::string bizType_;
				std::string fireTime_;
				std::string templateCode_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DYVMSAPI_MODEL_CREATECALLTASKREQUEST_H_