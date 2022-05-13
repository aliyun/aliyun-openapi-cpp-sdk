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

#ifndef ALIBABACLOUD_MSE_MODEL_ADDSEATASERVERREQUEST_H_
#define ALIBABACLOUD_MSE_MODEL_ADDSEATASERVERREQUEST_H_

#include <alibabacloud/mse/MseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Mse {
namespace Model {
class ALIBABACLOUD_MSE_EXPORT AddSeataServerRequest : public RpcServiceRequest {
public:
	AddSeataServerRequest();
	~AddSeataServerRequest();
	int getReplica() const;
	void setReplica(int replica);
	std::string getPrimaryUser() const;
	void setPrimaryUser(const std::string &primaryUser);
	std::string getVpc() const;
	void setVpc(const std::string &vpc);
	std::string getVswitch() const;
	void setVswitch(const std::string &vswitch);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getAcceptLanguage() const;
	void setAcceptLanguage(const std::string &acceptLanguage);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);
	std::string getRegion() const;
	void setRegion(const std::string &region);

private:
	int replica_;
	std::string primaryUser_;
	std::string vpc_;
	std::string vswitch_;
	std::string name_;
	std::string acceptLanguage_;
	std::string zoneId_;
	std::string region_;
};
} // namespace Model
} // namespace Mse
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MSE_MODEL_ADDSEATASERVERREQUEST_H_
