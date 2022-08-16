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

#ifndef ALIBABACLOUD_SAS_MODEL_CREATEHONEYPOTPROBEREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_CREATEHONEYPOTPROBEREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT CreateHoneypotProbeRequest : public RpcServiceRequest {
public:
	struct HoneypotBindList {
		struct BindPortList {
			int startPort;
			bool bindPort;
			bool fixed;
			int endPort;
			int targetPort;
		};
		std::vector<BindPortList> bindPortList;
		std::string honeypotId;
	};
	CreateHoneypotProbeRequest();
	~CreateHoneypotProbeRequest();
	std::string getControlNodeId() const;
	void setControlNodeId(const std::string &controlNodeId);
	std::string getProxyIp() const;
	void setProxyIp(const std::string &proxyIp);
	bool getPing() const;
	void setPing(bool ping);
	std::string getProbeId() const;
	void setProbeId(const std::string &probeId);
	std::string getUuid() const;
	void setUuid(const std::string &uuid);
	std::string getProbeVersion() const;
	void setProbeVersion(const std::string &probeVersion);
	std::vector<std::string> getServiceIpList() const;
	void setServiceIpList(const std::vector<std::string> &serviceIpList);
	std::vector<HoneypotBindList> getHoneypotBindList() const;
	void setHoneypotBindList(const std::vector<HoneypotBindList> &honeypotBindList);
	std::string getLang() const;
	void setLang(const std::string &lang);
	bool getArp() const;
	void setArp(bool arp);
	std::string getProbeType() const;
	void setProbeType(const std::string &probeType);
	std::string getProbeStatus() const;
	void setProbeStatus(const std::string &probeStatus);
	std::string getBusinessGroupId() const;
	void setBusinessGroupId(const std::string &businessGroupId);
	std::string getDisplayName() const;
	void setDisplayName(const std::string &displayName);
	std::string getVpcId() const;
	void setVpcId(const std::string &vpcId);

private:
	std::string controlNodeId_;
	std::string proxyIp_;
	bool ping_;
	std::string probeId_;
	std::string uuid_;
	std::string probeVersion_;
	std::vector<std::string> serviceIpList_;
	std::vector<HoneypotBindList> honeypotBindList_;
	std::string lang_;
	bool arp_;
	std::string probeType_;
	std::string probeStatus_;
	std::string businessGroupId_;
	std::string displayName_;
	std::string vpcId_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_CREATEHONEYPOTPROBEREQUEST_H_
