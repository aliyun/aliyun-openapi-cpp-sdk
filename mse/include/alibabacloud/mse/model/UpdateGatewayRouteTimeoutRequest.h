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

#ifndef ALIBABACLOUD_MSE_MODEL_UPDATEGATEWAYROUTETIMEOUTREQUEST_H_
#define ALIBABACLOUD_MSE_MODEL_UPDATEGATEWAYROUTETIMEOUTREQUEST_H_

#include <alibabacloud/mse/MseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Mse {
namespace Model {
class ALIBABACLOUD_MSE_EXPORT UpdateGatewayRouteTimeoutRequest : public RpcServiceRequest {
public:
	struct TimeoutJSON {
		std::string timeUnit;
		int unitNum;
		std::string status;
	};
	UpdateGatewayRouteTimeoutRequest();
	~UpdateGatewayRouteTimeoutRequest();
	TimeoutJSON getTimeoutJSON() const;
	void setTimeoutJSON(const TimeoutJSON &timeoutJSON);
	std::string getMseSessionId() const;
	void setMseSessionId(const std::string &mseSessionId);
	std::string getGatewayUniqueId() const;
	void setGatewayUniqueId(const std::string &gatewayUniqueId);
	long getId() const;
	void setId(long id);
	long getGatewayId() const;
	void setGatewayId(long gatewayId);
	std::string getAcceptLanguage() const;
	void setAcceptLanguage(const std::string &acceptLanguage);

private:
	TimeoutJSON timeoutJSON_;
	std::string mseSessionId_;
	std::string gatewayUniqueId_;
	long id_;
	long gatewayId_;
	std::string acceptLanguage_;
};
} // namespace Model
} // namespace Mse
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MSE_MODEL_UPDATEGATEWAYROUTETIMEOUTREQUEST_H_
