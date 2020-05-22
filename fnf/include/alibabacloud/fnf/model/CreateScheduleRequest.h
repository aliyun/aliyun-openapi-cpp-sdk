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

#ifndef ALIBABACLOUD_FNF_MODEL_CREATESCHEDULEREQUEST_H_
#define ALIBABACLOUD_FNF_MODEL_CREATESCHEDULEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/fnf/FnfExport.h>

namespace AlibabaCloud
{
	namespace Fnf
	{
		namespace Model
		{
			class ALIBABACLOUD_FNF_EXPORT CreateScheduleRequest : public RpcServiceRequest
			{

			public:
				CreateScheduleRequest();
				~CreateScheduleRequest();

				std::string getScheduleName()const;
				void setScheduleName(const std::string& scheduleName);
				std::string getCronExpression()const;
				void setCronExpression(const std::string& cronExpression);
				std::string getPayload()const;
				void setPayload(const std::string& payload);
				std::string getRequestId()const;
				void setRequestId(const std::string& requestId);
				bool getEnable()const;
				void setEnable(bool enable);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getFlowName()const;
				void setFlowName(const std::string& flowName);

            private:
				std::string scheduleName_;
				std::string cronExpression_;
				std::string payload_;
				std::string requestId_;
				bool enable_;
				std::string description_;
				std::string flowName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_FNF_MODEL_CREATESCHEDULEREQUEST_H_