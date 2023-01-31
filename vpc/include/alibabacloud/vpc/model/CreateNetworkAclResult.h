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

#ifndef ALIBABACLOUD_VPC_MODEL_CREATENETWORKACLRESULT_H_
#define ALIBABACLOUD_VPC_MODEL_CREATENETWORKACLRESULT_H_

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
			class ALIBABACLOUD_VPC_EXPORT CreateNetworkAclResult : public ServiceResult
			{
			public:
				struct NetworkAclAttribute
				{
					struct IngressAclEntry
					{
						std::string policy;
						std::string entryType;
						std::string description;
						std::string sourceCidrIp;
						std::string port;
						std::string networkAclEntryName;
						std::string protocol;
						std::string networkAclEntryId;
					};
					struct EgressAclEntry
					{
						std::string policy;
						std::string entryType;
						std::string description;
						std::string destinationCidrIp;
						std::string port;
						std::string networkAclEntryName;
						std::string protocol;
						std::string networkAclEntryId;
					};
					struct Resource
					{
						std::string status;
						std::string resourceId;
						std::string resourceType;
					};
					std::vector<IngressAclEntry> ingressAclEntries;
					std::string status;
					std::string description;
					std::string vpcId;
					std::string networkAclId;
					std::vector<EgressAclEntry> egressAclEntries;
					std::string creationTime;
					std::string networkAclName;
					std::vector<Resource> resources;
					std::string regionId;
				};


				CreateNetworkAclResult();
				explicit CreateNetworkAclResult(const std::string &payload);
				~CreateNetworkAclResult();
				std::string getNetworkAclId()const;
				NetworkAclAttribute getNetworkAclAttribute()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string networkAclId_;
				NetworkAclAttribute networkAclAttribute_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_CREATENETWORKACLRESULT_H_