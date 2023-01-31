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

#ifndef ALIBABACLOUD_VPC_MODEL_LISTPUBLICIPADDRESSPOOLCIDRBLOCKSRESULT_H_
#define ALIBABACLOUD_VPC_MODEL_LISTPUBLICIPADDRESSPOOLCIDRBLOCKSRESULT_H_

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
			class ALIBABACLOUD_VPC_EXPORT ListPublicIpAddressPoolCidrBlocksResult : public ServiceResult
			{
			public:
				struct PublicIpPoolCidrBlock
				{
					std::string status;
					int usedIpNum;
					int totalIpNum;
					std::string creationTime;
					std::string cidrBlock;
					std::string publicIpAddressPoolId;
				};


				ListPublicIpAddressPoolCidrBlocksResult();
				explicit ListPublicIpAddressPoolCidrBlocksResult(const std::string &payload);
				~ListPublicIpAddressPoolCidrBlocksResult();
				std::vector<PublicIpPoolCidrBlock> getPublicIpPoolCidrBlockList()const;
				int getTotalCount()const;
				std::string getNextToken()const;
				int getMaxResults()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<PublicIpPoolCidrBlock> publicIpPoolCidrBlockList_;
				int totalCount_;
				std::string nextToken_;
				int maxResults_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_LISTPUBLICIPADDRESSPOOLCIDRBLOCKSRESULT_H_