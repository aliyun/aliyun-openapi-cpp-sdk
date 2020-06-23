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

#ifndef ALIBABACLOUD_DOMAIN_MODEL_CHANGEAUCTIONREQUEST_H_
#define ALIBABACLOUD_DOMAIN_MODEL_CHANGEAUCTIONREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/domain/DomainExport.h>

namespace AlibabaCloud
{
	namespace Domain
	{
		namespace Model
		{
			class ALIBABACLOUD_DOMAIN_EXPORT ChangeAuctionRequest : public RpcServiceRequest
			{
			public:
				struct AuctionList
				{
					std::string winner;
					std::string reserveRange;
					std::string domainName;
					std::string endTime;
					long timeLeft;
					int isReserve;
					struct BidRecords
					{
						std::string createTime;
						float price;
						std::string userId;
					};
					std::vector<BidRecords> bidRecords;
					float winnerPrice;
					std::string status;
					float reservePrice;
				};

			public:
				ChangeAuctionRequest();
				~ChangeAuctionRequest();

				std::vector<AuctionList> getAuctionList()const;
				void setAuctionList(const std::vector<AuctionList>& auctionList);

            private:
				std::vector<AuctionList> auctionList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DOMAIN_MODEL_CHANGEAUCTIONREQUEST_H_