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

#ifndef ALIBABACLOUD_ALIDNS_MODEL_UPDATEDNSGTMADDRESSPOOLREQUEST_H_
#define ALIBABACLOUD_ALIDNS_MODEL_UPDATEDNSGTMADDRESSPOOLREQUEST_H_

#include <alibabacloud/alidns/AlidnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Alidns {
namespace Model {
class ALIBABACLOUD_ALIDNS_EXPORT UpdateDnsGtmAddressPoolRequest : public RpcServiceRequest {
public:
	struct Addr {
		std::string attributeInfo;
		std::string mode;
		std::string remark;
		int lbaWeight;
		std::string addr;
	};
	UpdateDnsGtmAddressPoolRequest();
	~UpdateDnsGtmAddressPoolRequest();
	std::string getLbaStrategy() const;
	void setLbaStrategy(const std::string &lbaStrategy);
	std::string getAddrPoolId() const;
	void setAddrPoolId(const std::string &addrPoolId);
	std::string getUserClientIp() const;
	void setUserClientIp(const std::string &userClientIp);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getLang() const;
	void setLang(const std::string &lang);
	std::vector<Addr> getAddr() const;
	void setAddr(const std::vector<Addr> &addr);

private:
	std::string lbaStrategy_;
	std::string addrPoolId_;
	std::string userClientIp_;
	std::string name_;
	std::string lang_;
	std::vector<Addr> addr_;
};
} // namespace Model
} // namespace Alidns
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ALIDNS_MODEL_UPDATEDNSGTMADDRESSPOOLREQUEST_H_
