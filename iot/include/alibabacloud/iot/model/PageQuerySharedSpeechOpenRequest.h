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

#ifndef ALIBABACLOUD_IOT_MODEL_PAGEQUERYSHAREDSPEECHOPENREQUEST_H_
#define ALIBABACLOUD_IOT_MODEL_PAGEQUERYSHAREDSPEECHOPENREQUEST_H_

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
			class ALIBABACLOUD_IOT_EXPORT PageQuerySharedSpeechOpenRequest : public RpcServiceRequest
			{

			public:
				PageQuerySharedSpeechOpenRequest();
				~PageQuerySharedSpeechOpenRequest();

				int getPageId()const;
				void setPageId(int pageId);
				std::string getIotId()const;
				void setIotId(const std::string& iotId);
				std::string getIotInstanceId()const;
				void setIotInstanceId(const std::string& iotInstanceId);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getShareTaskCode()const;
				void setShareTaskCode(const std::string& shareTaskCode);
				std::string getProductKey()const;
				void setProductKey(const std::string& productKey);
				std::string getApiProduct()const;
				void setApiProduct(const std::string& apiProduct);
				std::string getApiRevision()const;
				void setApiRevision(const std::string& apiRevision);
				std::string getDeviceName()const;
				void setDeviceName(const std::string& deviceName);
				int getStatus()const;
				void setStatus(int status);

            private:
				int pageId_;
				std::string iotId_;
				std::string iotInstanceId_;
				int pageSize_;
				std::string shareTaskCode_;
				std::string productKey_;
				std::string apiProduct_;
				std::string apiRevision_;
				std::string deviceName_;
				int status_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IOT_MODEL_PAGEQUERYSHAREDSPEECHOPENREQUEST_H_