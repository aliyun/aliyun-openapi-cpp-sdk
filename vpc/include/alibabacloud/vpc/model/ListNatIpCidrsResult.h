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

#ifndef ALIBABACLOUD_VPC_MODEL_LISTNATIPCIDRSRESULT_H_
#define ALIBABACLOUD_VPC_MODEL_LISTNATIPCIDRSRESULT_H_

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
			class ALIBABACLOUD_VPC_EXPORT ListNatIpCidrsResult : public ServiceResult
			{
			public:
				struct NatIpCidr
				{
					bool isDefault;
					std::string natIpCidr;
					std::string creationTime;
					std::string natIpCidrId;
					std::string natIpCidrDescription;
					std::string regionId;
					std::string natIpCidrName;
					std::string natGatewayId;
					std::string natIpCidrStatus;
				};


				ListNatIpCidrsResult();
				explicit ListNatIpCidrsResult(const std::string &payload);
				~ListNatIpCidrsResult();
				std::string getTotalCount()const;
				std::string getNextToken()const;
				std::string getMaxResults()const;
				std::vector<NatIpCidr> getNatIpCidrs()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string totalCount_;
				std::string nextToken_;
				std::string maxResults_;
				std::vector<NatIpCidr> natIpCidrs_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_LISTNATIPCIDRSRESULT_H_