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

#ifndef ALIBABACLOUD_EMR_MODEL_MODIFYSCALINGTASKGROUPREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_MODIFYSCALINGTASKGROUPREQUEST_H_

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
			class ALIBABACLOUD_EMR_EXPORT ModifyScalingTaskGroupRequest : public RpcServiceRequest
			{

			public:
				ModifyScalingTaskGroupRequest();
				~ModifyScalingTaskGroupRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getHostGroupId()const;
				void setHostGroupId(const std::string& hostGroupId);
				std::string getActiveRuleCategory()const;
				void setActiveRuleCategory(const std::string& activeRuleCategory);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				int getMinSize()const;
				void setMinSize(int minSize);
				int getMaxSize()const;
				void setMaxSize(int maxSize);
				int getDefaultCooldown()const;
				void setDefaultCooldown(int defaultCooldown);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);

            private:
				long resourceOwnerId_;
				std::string regionId_;
				std::string hostGroupId_;
				std::string activeRuleCategory_;
				std::string clusterId_;
				int minSize_;
				int maxSize_;
				int defaultCooldown_;
				std::string accessKeyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_MODIFYSCALINGTASKGROUPREQUEST_H_