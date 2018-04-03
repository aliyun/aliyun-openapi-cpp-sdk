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

#ifndef ALIBABACLOUD_DOMAIN_MODEL_QUERYAUCTIONDETAILRESULT_H_
#define ALIBABACLOUD_DOMAIN_MODEL_QUERYAUCTIONDETAILRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/domain/DomainExport.h>

namespace AlibabaCloud
{
	namespace Domain
	{
		namespace Model
		{
			class ALIBABACLOUD_DOMAIN_EXPORT QueryAuctionDetailResult : public ServiceResult
			{
			public:


				QueryAuctionDetailResult();
				explicit QueryAuctionDetailResult(const std::string &payload);
				~QueryAuctionDetailResult();
				std::string getPartnerType()const;
				std::string getStatus()const;
				float getTransferInPrice()const;
				std::string getPayStatus()const;
				std::string getDomainName()const;
				std::string getHighBidder()const;
				std::string getFailCode()const;
				float getYourCurrentBid()const;
				float getPayPrice()const;
				long getDeliveryTime()const;
				float getHighBid()const;
				std::string getDomainType()const;
				std::string getBookedPartner()const;
				std::string getCurrency()const;
				bool getReserveMet()const;
				std::string getProduceStatus()const;
				float getNextValidBid()const;
				float getYourMaxBid()const;
				long getAuctionEndTime()const;
				long getBookEndTime()const;
				long getPayEndTime()const;
				std::string getAuctionId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string partnerType_;
				std::string status_;
				float transferInPrice_;
				std::string payStatus_;
				std::string domainName_;
				std::string highBidder_;
				std::string failCode_;
				float yourCurrentBid_;
				float payPrice_;
				long deliveryTime_;
				float highBid_;
				std::string domainType_;
				std::string bookedPartner_;
				std::string currency_;
				bool reserveMet_;
				std::string produceStatus_;
				float nextValidBid_;
				float yourMaxBid_;
				long auctionEndTime_;
				long bookEndTime_;
				long payEndTime_;
				std::string auctionId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DOMAIN_MODEL_QUERYAUCTIONDETAILRESULT_H_