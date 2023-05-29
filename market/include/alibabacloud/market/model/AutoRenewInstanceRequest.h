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

#ifndef ALIBABACLOUD_MARKET_MODEL_AUTORENEWINSTANCEREQUEST_H_
#define ALIBABACLOUD_MARKET_MODEL_AUTORENEWINSTANCEREQUEST_H_

#include <alibabacloud/market/MarketExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Market {
namespace Model {
class ALIBABACLOUD_MARKET_EXPORT AutoRenewInstanceRequest : public RpcServiceRequest {
public:
	AutoRenewInstanceRequest();
	~AutoRenewInstanceRequest();
	std::string getType() const;
	void setType(const std::string &type);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	int getAutoRenewDuration() const;
	void setAutoRenewDuration(int autoRenewDuration);
	std::string getAutoRenewCycle() const;
	void setAutoRenewCycle(const std::string &autoRenewCycle);
	long getOrderBizId() const;
	void setOrderBizId(long orderBizId);

private:
	std::string type_;
	long ownerId_;
	int autoRenewDuration_;
	std::string autoRenewCycle_;
	long orderBizId_;
};
} // namespace Model
} // namespace Market
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MARKET_MODEL_AUTORENEWINSTANCEREQUEST_H_
