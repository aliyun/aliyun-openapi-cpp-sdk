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

#ifndef ALIBABACLOUD_LMZTEST_MODEL_UPDATELISTENERREQUEST_H_
#define ALIBABACLOUD_LMZTEST_MODEL_UPDATELISTENERREQUEST_H_

#include <alibabacloud/lmztest/LmzTestExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace LmzTest {
namespace Model {
class ALIBABACLOUD_LMZTEST_EXPORT UpdateListenerRequest : public RpcServiceRequest {
public:
	struct BackendPorts {
		int fromPort;
		int toPort;
	};
	struct PortRanges {
		int fromPort;
		int toPort;
	};
	struct Certificates {
		std::string id;
	};
	UpdateListenerRequest();
	~UpdateListenerRequest();
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::vector<BackendPorts> getBackendPorts() const;
	void setBackendPorts(const std::vector<BackendPorts> &backendPorts);
	std::string getListenerId() const;
	void setListenerId(const std::string &listenerId);
	std::string getProtocol() const;
	void setProtocol(const std::string &protocol);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getProxyProtocol() const;
	void setProxyProtocol(const std::string &proxyProtocol);
	std::vector<PortRanges> getPortRanges() const;
	void setPortRanges(const std::vector<PortRanges> &portRanges);
	std::vector<Certificates> getCertificates() const;
	void setCertificates(const std::vector<Certificates> &certificates);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getClientAffinity() const;
	void setClientAffinity(const std::string &clientAffinity);

private:
	std::string clientToken_;
	std::string description_;
	std::vector<BackendPorts> backendPorts_;
	std::string listenerId_;
	std::string protocol_;
	std::string regionId_;
	std::string proxyProtocol_;
	std::vector<PortRanges> portRanges_;
	std::vector<Certificates> certificates_;
	std::string name_;
	std::string clientAffinity_;
};
} // namespace Model
} // namespace LmzTest
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LMZTEST_MODEL_UPDATELISTENERREQUEST_H_
