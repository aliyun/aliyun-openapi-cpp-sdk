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

#ifndef ALIBABACLOUD_DOMAIN_MODEL_SAVEBATCHTASKFORMODIFYINGDOMAINDNSREQUEST_H_
#define ALIBABACLOUD_DOMAIN_MODEL_SAVEBATCHTASKFORMODIFYINGDOMAINDNSREQUEST_H_

#include <alibabacloud/domain/DomainExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Domain {
namespace Model {
class ALIBABACLOUD_DOMAIN_EXPORT SaveBatchTaskForModifyingDomainDnsRequest : public RpcServiceRequest {
public:
	SaveBatchTaskForModifyingDomainDnsRequest();
	~SaveBatchTaskForModifyingDomainDnsRequest();
	std::vector<std::string> getDomainName() const;
	void setDomainName(const std::vector<std::string> &domainName);
	bool getAliyunDns() const;
	void setAliyunDns(bool aliyunDns);
	std::string getUserClientIp() const;
	void setUserClientIp(const std::string &userClientIp);
	std::vector<std::string> getDomainNameServer() const;
	void setDomainNameServer(const std::vector<std::string> &domainNameServer);
	std::string getLang() const;
	void setLang(const std::string &lang);

private:
	std::vector<std::string> domainName_;
	bool aliyunDns_;
	std::string userClientIp_;
	std::vector<std::string> domainNameServer_;
	std::string lang_;
};
} // namespace Model
} // namespace Domain
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DOMAIN_MODEL_SAVEBATCHTASKFORMODIFYINGDOMAINDNSREQUEST_H_
