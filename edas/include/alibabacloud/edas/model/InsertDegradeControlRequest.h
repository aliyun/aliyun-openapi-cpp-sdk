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

#ifndef ALIBABACLOUD_EDAS_MODEL_INSERTDEGRADECONTROLREQUEST_H_
#define ALIBABACLOUD_EDAS_MODEL_INSERTDEGRADECONTROLREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <alibabacloud/edas/EdasExport.h>

namespace AlibabaCloud
{
	namespace Edas
	{
		namespace Model
		{
			class ALIBABACLOUD_EDAS_EXPORT InsertDegradeControlRequest : public RoaServiceRequest
			{

			public:
				InsertDegradeControlRequest();
				~InsertDegradeControlRequest();

				int getDuration()const;
				void setDuration(int duration);
				std::string getRuleType()const;
				void setRuleType(const std::string& ruleType);
				std::string getAppId()const;
				void setAppId(const std::string& appId);
				std::string getUrlVar()const;
				void setUrlVar(const std::string& urlVar);
				int getRtThreshold()const;
				void setRtThreshold(int rtThreshold);
				std::string getServiceName()const;
				void setServiceName(const std::string& serviceName);
				std::string getMethodName()const;
				void setMethodName(const std::string& methodName);

            private:
				int duration_;
				std::string ruleType_;
				std::string appId_;
				std::string urlVar_;
				int rtThreshold_;
				std::string serviceName_;
				std::string methodName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EDAS_MODEL_INSERTDEGRADECONTROLREQUEST_H_