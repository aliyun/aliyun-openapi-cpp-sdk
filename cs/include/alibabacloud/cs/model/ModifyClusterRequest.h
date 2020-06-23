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

#ifndef ALIBABACLOUD_CS_MODEL_MODIFYCLUSTERREQUEST_H_
#define ALIBABACLOUD_CS_MODEL_MODIFYCLUSTERREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <alibabacloud/cs/CSExport.h>

namespace AlibabaCloud
{
	namespace CS
	{
		namespace Model
		{
			class ALIBABACLOUD_CS_EXPORT ModifyClusterRequest : public RoaServiceRequest
			{

			public:
				ModifyClusterRequest();
				~ModifyClusterRequest();

				bool getApi_server_eip()const;
				void setApi_server_eip(bool api_server_eip);
				std::string getResource_group_id()const;
				void setResource_group_id(const std::string& resource_group_id);
				std::string getIngress_domain_rebinding()const;
				void setIngress_domain_rebinding(const std::string& ingress_domain_rebinding);
				bool getDeletion_protection()const;
				void setDeletion_protection(bool deletion_protection);
				std::string getIngress_loadbalancer_id()const;
				void setIngress_loadbalancer_id(const std::string& ingress_loadbalancer_id);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getApi_server_eip_id()const;
				void setApi_server_eip_id(const std::string& api_server_eip_id);

            private:
				bool api_server_eip_;
				std::string resource_group_id_;
				std::string ingress_domain_rebinding_;
				bool deletion_protection_;
				std::string ingress_loadbalancer_id_;
				std::string clusterId_;
				std::string api_server_eip_id_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CS_MODEL_MODIFYCLUSTERREQUEST_H_