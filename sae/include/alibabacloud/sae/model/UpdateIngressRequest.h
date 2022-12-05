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

#ifndef ALIBABACLOUD_SAE_MODEL_UPDATEINGRESSREQUEST_H_
#define ALIBABACLOUD_SAE_MODEL_UPDATEINGRESSREQUEST_H_

#include <alibabacloud/sae/SaeExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sae {
namespace Model {
class ALIBABACLOUD_SAE_EXPORT UpdateIngressRequest : public RoaServiceRequest {
public:
	UpdateIngressRequest();
	~UpdateIngressRequest();
	long getIngressId() const;
	void setIngressId(long ingressId);
	std::string getListenerPort() const;
	void setListenerPort(const std::string &listenerPort);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getLoadBalanceType() const;
	void setLoadBalanceType(const std::string &loadBalanceType);
	std::string getRules() const;
	void setRules(const std::string &rules);
	std::string getCertId() const;
	void setCertId(const std::string &certId);
	std::string getCertIds() const;
	void setCertIds(const std::string &certIds);
	std::string getListenerProtocol() const;
	void setListenerProtocol(const std::string &listenerProtocol);
	std::string getDefaultRule() const;
	void setDefaultRule(const std::string &defaultRule);

private:
	long ingressId_;
	std::string listenerPort_;
	std::string description_;
	std::string loadBalanceType_;
	std::string rules_;
	std::string certId_;
	std::string certIds_;
	std::string listenerProtocol_;
	std::string defaultRule_;
};
} // namespace Model
} // namespace Sae
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAE_MODEL_UPDATEINGRESSREQUEST_H_
