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

#ifndef ALIBABACLOUD_MARKET_MODEL_CREATEORDERREQUEST_H_
#define ALIBABACLOUD_MARKET_MODEL_CREATEORDERREQUEST_H_

#include <alibabacloud/market/MarketExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Market {
namespace Model {
class ALIBABACLOUD_MARKET_EXPORT CreateOrderRequest : public RpcServiceRequest {
public:
	CreateOrderRequest();
	~CreateOrderRequest();
	std::string getOrderSouce() const;
	void setOrderSouce(const std::string &orderSouce);
	std::string getCommodity() const;
	void setCommodity(const std::string &commodity);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getOwnerId() const;
	void setOwnerId(const std::string &ownerId);
	std::string getPaymentType() const;
	void setPaymentType(const std::string &paymentType);
	std::string getOrderType() const;
	void setOrderType(const std::string &orderType);

private:
	std::string orderSouce_;
	std::string commodity_;
	std::string clientToken_;
	std::string ownerId_;
	std::string paymentType_;
	std::string orderType_;
};
} // namespace Model
} // namespace Market
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MARKET_MODEL_CREATEORDERREQUEST_H_
