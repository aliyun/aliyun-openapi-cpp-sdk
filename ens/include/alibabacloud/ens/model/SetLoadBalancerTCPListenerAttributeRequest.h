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

#ifndef ALIBABACLOUD_ENS_MODEL_SETLOADBALANCERTCPLISTENERATTRIBUTEREQUEST_H_
#define ALIBABACLOUD_ENS_MODEL_SETLOADBALANCERTCPLISTENERATTRIBUTEREQUEST_H_

#include <alibabacloud/ens/EnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ens {
namespace Model {
class ALIBABACLOUD_ENS_EXPORT SetLoadBalancerTCPListenerAttributeRequest : public RpcServiceRequest {
public:
	SetLoadBalancerTCPListenerAttributeRequest();
	~SetLoadBalancerTCPListenerAttributeRequest();
	std::string getHealthCheckURI() const;
	void setHealthCheckURI(const std::string &healthCheckURI);
	std::string getProtocol() const;
	void setProtocol(const std::string &protocol);
	int getEstablishedTimeout() const;
	void setEstablishedTimeout(int establishedTimeout);
	int getPersistenceTimeout() const;
	void setPersistenceTimeout(int persistenceTimeout);
	std::string getHealthCheckDomain() const;
	void setHealthCheckDomain(const std::string &healthCheckDomain);
	std::string getLoadBalancerId() const;
	void setLoadBalancerId(const std::string &loadBalancerId);
	int getHealthCheckInterval() const;
	void setHealthCheckInterval(int healthCheckInterval);
	int getHealthCheckConnectTimeout() const;
	void setHealthCheckConnectTimeout(int healthCheckConnectTimeout);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	int getUnhealthyThreshold() const;
	void setUnhealthyThreshold(int unhealthyThreshold);
	int getHealthyThreshold() const;
	void setHealthyThreshold(int healthyThreshold);
	std::string getScheduler() const;
	void setScheduler(const std::string &scheduler);
	std::string getEipTransmit() const;
	void setEipTransmit(const std::string &eipTransmit);
	int getListenerPort() const;
	void setListenerPort(int listenerPort);
	std::string getHealthCheckType() const;
	void setHealthCheckType(const std::string &healthCheckType);
	int getHealthCheckConnectPort() const;
	void setHealthCheckConnectPort(int healthCheckConnectPort);
	std::string getHealthCheckHttpCode() const;
	void setHealthCheckHttpCode(const std::string &healthCheckHttpCode);

private:
	std::string healthCheckURI_;
	std::string protocol_;
	int establishedTimeout_;
	int persistenceTimeout_;
	std::string healthCheckDomain_;
	std::string loadBalancerId_;
	int healthCheckInterval_;
	int healthCheckConnectTimeout_;
	std::string description_;
	int unhealthyThreshold_;
	int healthyThreshold_;
	std::string scheduler_;
	std::string eipTransmit_;
	int listenerPort_;
	std::string healthCheckType_;
	int healthCheckConnectPort_;
	std::string healthCheckHttpCode_;
};
} // namespace Model
} // namespace Ens
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ENS_MODEL_SETLOADBALANCERTCPLISTENERATTRIBUTEREQUEST_H_
