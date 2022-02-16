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

#ifndef ALIBABACLOUD_EMR_MODEL_CREATEONACKCLUSTERREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_CREATEONACKCLUSTERREQUEST_H_

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
			class ALIBABACLOUD_EMR_EXPORT CreateOnAckClusterRequest : public RpcServiceRequest
			{

			public:
				CreateOnAckClusterRequest();
				~CreateOnAckClusterRequest();

				std::string getClusterName()const;
				void setClusterName(const std::string& clusterName);
				Array getAckNodePools()const;
				void setAckNodePools(const Array& ackNodePools);
				std::string getResourceGroupId()const;
				void setResourceGroupId(const std::string& resourceGroupId);
				std::string getOssPath()const;
				void setOssPath(const std::string& ossPath);
				std::string getClusterType()const;
				void setClusterType(const std::string& clusterType);
				std::string getSystemDebug()const;
				void setSystemDebug(const std::string& systemDebug);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getAckClusterId()const;
				void setAckClusterId(const std::string& ackClusterId);
				std::string getAckNamespace()const;
				void setAckNamespace(const std::string& ackNamespace);
				std::string getToken()const;
				void setToken(const std::string& token);
				Array getAckNodes()const;
				void setAckNodes(const Array& ackNodes);
				std::string getProductRoleName()const;
				void setProductRoleName(const std::string& productRoleName);
				Array getApplications()const;
				void setApplications(const Array& applications);

            private:
				std::string clusterName_;
				Array ackNodePools_;
				std::string resourceGroupId_;
				std::string ossPath_;
				std::string clusterType_;
				std::string systemDebug_;
				std::string clientToken_;
				std::string regionId_;
				std::string ackClusterId_;
				std::string ackNamespace_;
				std::string token_;
				Array ackNodes_;
				std::string productRoleName_;
				Array applications_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_CREATEONACKCLUSTERREQUEST_H_