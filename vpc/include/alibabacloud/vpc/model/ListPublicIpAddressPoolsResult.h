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

#ifndef ALIBABACLOUD_VPC_MODEL_LISTPUBLICIPADDRESSPOOLSRESULT_H_
#define ALIBABACLOUD_VPC_MODEL_LISTPUBLICIPADDRESSPOOLSRESULT_H_

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
			class ALIBABACLOUD_VPC_EXPORT ListPublicIpAddressPoolsResult : public ServiceResult
			{
			public:
				struct PublicIpAddressPool
				{
					struct PublicIpCidrBlock
					{
						std::string status;
						int usedIpNum;
						int totalIpNum;
						std::string creationTime;
						std::string cidrBlock;
					};
					struct Tag
					{
						std::string value;
						std::string key;
					};
					std::string status;
					std::string description;
					std::string resourceGroupId;
					std::string isp;
					bool ipAddressRemaining;
					std::string publicIpAddressPoolId;
					std::string bizType;
					std::string businessStatus;
					std::string name;
					std::vector<std::string> zones;
					std::vector<PublicIpAddressPool::PublicIpCidrBlock> publicIpCidrBlockList;
					int usedIpNum;
					long ownerId;
					int totalIpNum;
					std::string creationTime;
					std::vector<std::string> securityProtectionTypes;
					std::string regionId;
					std::string userType;
					std::vector<PublicIpAddressPool::Tag> tags;
					std::string shareType;
				};


				ListPublicIpAddressPoolsResult();
				explicit ListPublicIpAddressPoolsResult(const std::string &payload);
				~ListPublicIpAddressPoolsResult();
				int getTotalCount()const;
				std::string getNextToken()const;
				std::vector<PublicIpAddressPool> getPublicIpAddressPoolList()const;
				int getMaxResults()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::string nextToken_;
				std::vector<PublicIpAddressPool> publicIpAddressPoolList_;
				int maxResults_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_LISTPUBLICIPADDRESSPOOLSRESULT_H_