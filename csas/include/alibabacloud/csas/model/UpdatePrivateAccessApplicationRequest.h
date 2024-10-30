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

#ifndef ALIBABACLOUD_CSAS_MODEL_UPDATEPRIVATEACCESSAPPLICATIONREQUEST_H_
#define ALIBABACLOUD_CSAS_MODEL_UPDATEPRIVATEACCESSAPPLICATIONREQUEST_H_

#include <alibabacloud/csas/CsasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Csas {
namespace Model {
class ALIBABACLOUD_CSAS_EXPORT UpdatePrivateAccessApplicationRequest : public RpcServiceRequest {
public:
	struct PortRanges {
		int end;
		int begin;
	};
	UpdatePrivateAccessApplicationRequest();
	~UpdatePrivateAccessApplicationRequest();
	std::vector<std::string> getAddresses() const;
	void setAddresses(const std::vector<std::string> &addresses);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getProtocol() const;
	void setProtocol(const std::string &protocol);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	std::string getApplicationId() const;
	void setApplicationId(const std::string &applicationId);
	std::string getL7ProxyDomainCustom() const;
	void setL7ProxyDomainCustom(const std::string &l7ProxyDomainCustom);
	std::string getL7ProxyDomainPrivate() const;
	void setL7ProxyDomainPrivate(const std::string &l7ProxyDomainPrivate);
	std::vector<std::string> getTagIds() const;
	void setTagIds(const std::vector<std::string> &tagIds);
	std::string getL7ProxyDomainAutomaticPrefix() const;
	void setL7ProxyDomainAutomaticPrefix(const std::string &l7ProxyDomainAutomaticPrefix);
	std::vector<PortRanges> getPortRanges() const;
	void setPortRanges(const std::vector<PortRanges> &portRanges);
	std::string getModifyType() const;
	void setModifyType(const std::string &modifyType);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	std::vector<std::string> addresses_;
	std::string description_;
	std::string protocol_;
	std::string sourceIp_;
	std::string applicationId_;
	std::string l7ProxyDomainCustom_;
	std::string l7ProxyDomainPrivate_;
	std::vector<std::string> tagIds_;
	std::string l7ProxyDomainAutomaticPrefix_;
	std::vector<PortRanges> portRanges_;
	std::string modifyType_;
	std::string status_;
};
} // namespace Model
} // namespace Csas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CSAS_MODEL_UPDATEPRIVATEACCESSAPPLICATIONREQUEST_H_
