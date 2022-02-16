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

#ifndef ALIBABACLOUD_EMR_MODEL_UPDATEAUTOSCALINGRULEREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_UPDATEAUTOSCALINGRULEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/emr/EmrExport.h>

namespace AlibabaCloud
{
	namespace Emr
	{
		namespace Model
		{
			class ALIBABACLOUD_EMR_EXPORT UpdateAutoScalingRuleRequest : public RpcServiceRequest
			{

			public:
				UpdateAutoScalingRuleRequest();
				~UpdateAutoScalingRuleRequest();

				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getScalingRuleId()const;
				void setScalingRuleId(const std::string& scalingRuleId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				Struct getScalingRuleSpec()const;
				void setScalingRuleSpec(const Struct& scalingRuleSpec);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getSystemDebug()const;
				void setSystemDebug(const std::string& systemDebug);

            private:
				std::string clientToken_;
				std::string scalingRuleId_;
				std::string regionId_;
				Struct scalingRuleSpec_;
				std::string clusterId_;
				std::string systemDebug_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_UPDATEAUTOSCALINGRULEREQUEST_H_