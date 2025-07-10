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

#ifndef ALIBABACLOUD_VPC_MODEL_GETDHCPOPTIONSSETRESULT_H_
#define ALIBABACLOUD_VPC_MODEL_GETDHCPOPTIONSSETRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vpc/VpcExport.h>

namespace AlibabaCloud
{
	namespace Vpc
	{
		namespace Model
		{
			class ALIBABACLOUD_VPC_EXPORT GetDhcpOptionsSetResult : public ServiceResult
			{
			public:
				struct DhcpOptions
				{
					std::string domainName;
					std::string ipv6LeaseTime;
					std::string tFTPServerName;
					std::string bootFileName;
					std::string domainNameServers;
					std::string leaseTime;
				};
				struct AssociateVpc
				{
					std::string vpcId;
					std::string associateStatus;
				};
				struct Tag
				{
					std::string value;
					std::string key;
				};


				GetDhcpOptionsSetResult();
				explicit GetDhcpOptionsSetResult(const std::string &payload);
				~GetDhcpOptionsSetResult();
				std::string getStatus()const;
				std::string getDhcpOptionsSetId()const;
				DhcpOptions getDhcpOptions()const;
				long getOwnerId()const;
				std::string getResourceGroupId()const;
				std::vector<AssociateVpc> getAssociateVpcs()const;
				std::string getDhcpOptionsSetName()const;
				std::string getDhcpOptionsSetDescription()const;
				std::string getCreationTime()const;
				std::vector<Tag> getTags()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string status_;
				std::string dhcpOptionsSetId_;
				DhcpOptions dhcpOptions_;
				long ownerId_;
				std::string resourceGroupId_;
				std::vector<AssociateVpc> associateVpcs_;
				std::string dhcpOptionsSetName_;
				std::string dhcpOptionsSetDescription_;
				std::string creationTime_;
				std::vector<Tag> tags_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_GETDHCPOPTIONSSETRESULT_H_