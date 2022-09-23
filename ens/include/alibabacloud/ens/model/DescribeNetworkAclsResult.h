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

#ifndef ALIBABACLOUD_ENS_MODEL_DESCRIBENETWORKACLSRESULT_H_
#define ALIBABACLOUD_ENS_MODEL_DESCRIBENETWORKACLSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ens/EnsExport.h>

namespace AlibabaCloud
{
	namespace Ens
	{
		namespace Model
		{
			class ALIBABACLOUD_ENS_EXPORT DescribeNetworkAclsResult : public ServiceResult
			{
			public:
				struct NetworkAcl
				{
					struct IngressAclRule
					{
						std::string policy;
						std::string portRange;
						std::string type;
						std::string description;
						int priority;
						std::string cidrBlock;
						std::string networkAclEntryName;
						std::string protocol;
						std::string networkAclEntryId;
					};
					struct EgressAclRule
					{
						std::string policy;
						std::string portRange;
						std::string type;
						std::string description;
						int priority;
						std::string cidrBlock;
						std::string networkAclEntryName;
						std::string protocol;
						std::string networkAclEntryId;
					};
					struct Resource
					{
						std::string status;
						std::string resourceId;
						std::string resourceType;
						std::string ensRegionId;
					};
					std::vector<NetworkAcl::IngressAclRule> ingressAclEntries;
					std::string status;
					std::string description;
					std::string networkAclId;
					std::vector<NetworkAcl::EgressAclRule> egressAclEntries;
					std::string creationTime;
					std::string networkAclName;
					std::vector<NetworkAcl::Resource> resources;
				};


				DescribeNetworkAclsResult();
				explicit DescribeNetworkAclsResult(const std::string &payload);
				~DescribeNetworkAclsResult();
				std::vector<NetworkAcl> getNetworkAcls()const;
				std::string getTotalCount()const;
				std::string getPageSize()const;
				std::string getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<NetworkAcl> networkAcls_;
				std::string totalCount_;
				std::string pageSize_;
				std::string pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ENS_MODEL_DESCRIBENETWORKACLSRESULT_H_