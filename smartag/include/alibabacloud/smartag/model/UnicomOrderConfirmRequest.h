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

#ifndef ALIBABACLOUD_SMARTAG_MODEL_UNICOMORDERCONFIRMREQUEST_H_
#define ALIBABACLOUD_SMARTAG_MODEL_UNICOMORDERCONFIRMREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/smartag/SmartagExport.h>

namespace AlibabaCloud
{
	namespace Smartag
	{
		namespace Model
		{
			class ALIBABACLOUD_SMARTAG_EXPORT UnicomOrderConfirmRequest : public RpcServiceRequest
			{
				struct OrderItem
				{
					std::string scItemName;
					std::string itemAmount;
					std::vector<std::string> snList;
					std::string orderItemId;
					std::string scItemCode;
					int itemQuantity;
					std::string tradeId;
					std::string tradeItemId;
				};

			public:
				UnicomOrderConfirmRequest();
				~UnicomOrderConfirmRequest();

				std::string getTmsCode()const;
				void setTmsCode(const std::string& tmsCode);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::vector<OrderItem> getOrderItem()const;
				void setOrderItem(const std::vector<OrderItem>& orderItem);
				std::string getOwnerUserId()const;
				void setOwnerUserId(const std::string& ownerUserId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOrderPostFee()const;
				void setOrderPostFee(long orderPostFee);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getTmsOrderCode()const;
				void setTmsOrderCode(const std::string& tmsOrderCode);
				std::string getTradeId()const;
				void setTradeId(const std::string& tradeId);

            private:
				std::string tmsCode_;
				long resourceOwnerId_;
				std::vector<OrderItem> orderItem_;
				std::string ownerUserId_;
				std::string resourceOwnerAccount_;
				std::string regionId_;
				std::string ownerAccount_;
				long orderPostFee_;
				long ownerId_;
				std::string tmsOrderCode_;
				std::string tradeId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SMARTAG_MODEL_UNICOMORDERCONFIRMREQUEST_H_