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

#ifndef ALIBABACLOUD_LINKWAN_MODEL_SUBMITNODELOCALCONFIGADDINGTASKREQUEST_H_
#define ALIBABACLOUD_LINKWAN_MODEL_SUBMITNODELOCALCONFIGADDINGTASKREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/linkwan/LinkWANExport.h>

namespace AlibabaCloud
{
	namespace LinkWAN
	{
		namespace Model
		{
			class ALIBABACLOUD_LINKWAN_EXPORT SubmitNodeLocalConfigAddingTaskRequest : public RpcServiceRequest
			{

			public:
				SubmitNodeLocalConfigAddingTaskRequest();
				~SubmitNodeLocalConfigAddingTaskRequest();

				int getFreq()const;
				void setFreq(int freq);
				int getDatr()const;
				void setDatr(int datr);
				std::string getD2dKey()const;
				void setD2dKey(const std::string& d2dKey);
				std::string getDevEui()const;
				void setDevEui(const std::string& devEui);
				std::string getD2dAddr()const;
				void setD2dAddr(const std::string& d2dAddr);
				std::string getApiProduct()const;
				void setApiProduct(const std::string& apiProduct);
				std::string getApiRevision()const;
				void setApiRevision(const std::string& apiRevision);

            private:
				int freq_;
				int datr_;
				std::string d2dKey_;
				std::string devEui_;
				std::string d2dAddr_;
				std::string apiProduct_;
				std::string apiRevision_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LINKWAN_MODEL_SUBMITNODELOCALCONFIGADDINGTASKREQUEST_H_