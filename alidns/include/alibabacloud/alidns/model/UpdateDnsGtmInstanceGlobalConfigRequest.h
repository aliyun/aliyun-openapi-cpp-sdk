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

#ifndef ALIBABACLOUD_ALIDNS_MODEL_UPDATEDNSGTMINSTANCEGLOBALCONFIGREQUEST_H_
#define ALIBABACLOUD_ALIDNS_MODEL_UPDATEDNSGTMINSTANCEGLOBALCONFIGREQUEST_H_

#include <alibabacloud/alidns/AlidnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Alidns {
namespace Model {
class ALIBABACLOUD_ALIDNS_EXPORT UpdateDnsGtmInstanceGlobalConfigRequest : public RpcServiceRequest {
public:
	struct AlertConfig {
		bool dingtalkNotice;
		bool smsNotice;
		std::string noticeType;
		bool emailNotice;
	};
	UpdateDnsGtmInstanceGlobalConfigRequest();
	~UpdateDnsGtmInstanceGlobalConfigRequest();
	std::string getAlertGroup() const;
	void setAlertGroup(const std::string &alertGroup);
	std::string getCnameType() const;
	void setCnameType(const std::string &cnameType);
	std::string getLang() const;
	void setLang(const std::string &lang);
	std::vector<AlertConfig> getAlertConfig() const;
	void setAlertConfig(const std::vector<AlertConfig> &alertConfig);
	std::string getPublicCnameMode() const;
	void setPublicCnameMode(const std::string &publicCnameMode);
	std::string getPublicUserDomainName() const;
	void setPublicUserDomainName(const std::string &publicUserDomainName);
	int getTtl() const;
	void setTtl(int ttl);
	bool getForceUpdate() const;
	void setForceUpdate(bool forceUpdate);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getInstanceName() const;
	void setInstanceName(const std::string &instanceName);
	std::string getPublicRr() const;
	void setPublicRr(const std::string &publicRr);
	std::string getUserClientIp() const;
	void setUserClientIp(const std::string &userClientIp);
	std::string getPublicZoneName() const;
	void setPublicZoneName(const std::string &publicZoneName);

private:
	std::string alertGroup_;
	std::string cnameType_;
	std::string lang_;
	std::vector<AlertConfig> alertConfig_;
	std::string publicCnameMode_;
	std::string publicUserDomainName_;
	int ttl_;
	bool forceUpdate_;
	std::string instanceId_;
	std::string instanceName_;
	std::string publicRr_;
	std::string userClientIp_;
	std::string publicZoneName_;
};
} // namespace Model
} // namespace Alidns
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ALIDNS_MODEL_UPDATEDNSGTMINSTANCEGLOBALCONFIGREQUEST_H_
