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

#ifndef ALIBABACLOUD_EDAS_MODEL_UPPATEENVHSFTRAFFICCONTROLREQUEST_H_
#define ALIBABACLOUD_EDAS_MODEL_UPPATEENVHSFTRAFFICCONTROLREQUEST_H_

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
			class ALIBABACLOUD_EDAS_EXPORT UppateEnvHsfTrafficControlRequest : public RoaServiceRequest
			{

			public:
				UppateEnvHsfTrafficControlRequest();
				~UppateEnvHsfTrafficControlRequest();

				std::string getParamTypes()const;
				void setParamTypes(const std::string& paramTypes);
				std::string getCondition()const;
				void setCondition(const std::string& condition);
				std::string getAppId()const;
				void setAppId(const std::string& appId);
				std::string getLabelAdviceName()const;
				void setLabelAdviceName(const std::string& labelAdviceName);
				std::string getPointcutName()const;
				void setPointcutName(const std::string& pointcutName);
				std::string getServiceName()const;
				void setServiceName(const std::string& serviceName);
				std::string getTriggerPolicy()const;
				void setTriggerPolicy(const std::string& triggerPolicy);
				std::string getGroup()const;
				void setGroup(const std::string& group);
				std::string getMethodName()const;
				void setMethodName(const std::string& methodName);

            private:
				std::string paramTypes_;
				std::string condition_;
				std::string appId_;
				std::string labelAdviceName_;
				std::string pointcutName_;
				std::string serviceName_;
				std::string triggerPolicy_;
				std::string group_;
				std::string methodName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EDAS_MODEL_UPPATEENVHSFTRAFFICCONTROLREQUEST_H_