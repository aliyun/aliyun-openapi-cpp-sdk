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

#ifndef ALIBABACLOUD_EMR_MODEL_MODIFYCLUSTERSERVICECONFIGFORADMINREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_MODIFYCLUSTERSERVICECONFIGFORADMINREQUEST_H_

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
			class ALIBABACLOUD_EMR_EXPORT ModifyClusterServiceConfigForAdminRequest : public RpcServiceRequest
			{

			public:
				ModifyClusterServiceConfigForAdminRequest();
				~ModifyClusterServiceConfigForAdminRequest();

				bool getRefreshHostConfig()const;
				void setRefreshHostConfig(bool refreshHostConfig);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getConfigType()const;
				void setConfigType(const std::string& configType);
				std::string getHostInstanceId()const;
				void setHostInstanceId(const std::string& hostInstanceId);
				std::string getAuthor()const;
				void setAuthor(const std::string& author);
				std::string getGroupId()const;
				void setGroupId(const std::string& groupId);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getUserId()const;
				void setUserId(const std::string& userId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getCustomConfigParams()const;
				void setCustomConfigParams(const std::string& customConfigParams);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getServiceName()const;
				void setServiceName(const std::string& serviceName);
				std::string getComment()const;
				void setComment(const std::string& comment);
				std::vector<std::string> getGatewayClusterIdList()const;
				void setGatewayClusterIdList(const std::vector<std::string>& gatewayClusterIdList);
				std::string getConfigParams()const;
				void setConfigParams(const std::string& configParams);

            private:
				bool refreshHostConfig_;
				long resourceOwnerId_;
				std::string configType_;
				std::string hostInstanceId_;
				std::string author_;
				std::string groupId_;
				std::string clusterId_;
				std::string userId_;
				std::string accessKeyId_;
				std::string customConfigParams_;
				std::string regionId_;
				std::string serviceName_;
				std::string comment_;
				std::vector<std::string> gatewayClusterIdList_;
				std::string configParams_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_MODIFYCLUSTERSERVICECONFIGFORADMINREQUEST_H_