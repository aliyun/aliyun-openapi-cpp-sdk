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

#ifndef ALIBABACLOUD_EMR_MODEL_MODIFYCLUSTERHOSTGROUPREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_MODIFYCLUSTERHOSTGROUPREQUEST_H_

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
			class ALIBABACLOUD_EMR_EXPORT ModifyClusterHostGroupRequest : public RpcServiceRequest
			{

			public:
				ModifyClusterHostGroupRequest();
				~ModifyClusterHostGroupRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getSecurityGroupId()const;
				void setSecurityGroupId(const std::string& securityGroupId);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getHostGroupName()const;
				void setHostGroupName(const std::string& hostGroupName);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getVswitchId()const;
				void setVswitchId(const std::string& vswitchId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getHostGroupId()const;
				void setHostGroupId(const std::string& hostGroupId);
				std::string getComment()const;
				void setComment(const std::string& comment);

            private:
				long resourceOwnerId_;
				std::string securityGroupId_;
				std::string clusterId_;
				std::string hostGroupName_;
				std::string accessKeyId_;
				std::string vswitchId_;
				std::string regionId_;
				std::string hostGroupId_;
				std::string comment_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_MODIFYCLUSTERHOSTGROUPREQUEST_H_