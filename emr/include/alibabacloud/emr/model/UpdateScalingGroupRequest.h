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

#ifndef ALIBABACLOUD_EMR_MODEL_UPDATESCALINGGROUPREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_UPDATESCALINGGROUPREQUEST_H_

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
			class ALIBABACLOUD_EMR_EXPORT UpdateScalingGroupRequest : public RpcServiceRequest
			{

			public:
				UpdateScalingGroupRequest();
				~UpdateScalingGroupRequest();

				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getScalingGroupId()const;
				void setScalingGroupId(const std::string& scalingGroupId);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				Struct getScalingGroupConfig()const;
				void setScalingGroupConfig(const Struct& scalingGroupConfig);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				Array getScalingRules()const;
				void setScalingRules(const Array& scalingRules);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getSystemDebug()const;
				void setSystemDebug(const std::string& systemDebug);

            private:
				std::string clientToken_;
				std::string scalingGroupId_;
				std::string description_;
				Struct scalingGroupConfig_;
				std::string regionId_;
				Array scalingRules_;
				std::string clusterId_;
				std::string name_;
				std::string systemDebug_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_UPDATESCALINGGROUPREQUEST_H_