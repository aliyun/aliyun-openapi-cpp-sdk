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

#ifndef ALIBABACLOUD_ALB_MODEL_UPDATEHEALTHCHECKTEMPLATEATTRIBUTEREQUEST_H_
#define ALIBABACLOUD_ALB_MODEL_UPDATEHEALTHCHECKTEMPLATEATTRIBUTEREQUEST_H_

#include <alibabacloud/alb/AlbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Alb {
namespace Model {
class ALIBABACLOUD_ALB_EXPORT UpdateHealthCheckTemplateAttributeRequest : public RpcServiceRequest {
public:
	UpdateHealthCheckTemplateAttributeRequest();
	~UpdateHealthCheckTemplateAttributeRequest();
	int getHealthCheckTimeout() const;
	void setHealthCheckTimeout(int healthCheckTimeout);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getHealthCheckProtocol() const;
	void setHealthCheckProtocol(const std::string &healthCheckProtocol);
	int getUnhealthyThreshold() const;
	void setUnhealthyThreshold(int unhealthyThreshold);
	int getHealthyThreshold() const;
	void setHealthyThreshold(int healthyThreshold);
	bool getHealthCheckTcpFastCloseEnabled() const;
	void setHealthCheckTcpFastCloseEnabled(bool healthCheckTcpFastCloseEnabled);
	std::string getHealthCheckPath() const;
	void setHealthCheckPath(const std::string &healthCheckPath);
	std::vector<std::string> getHealthCheckCodes() const;
	void setHealthCheckCodes(const std::vector<std::string> &healthCheckCodes);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	std::string getHealthCheckMethod() const;
	void setHealthCheckMethod(const std::string &healthCheckMethod);
	std::string getHealthCheckHost() const;
	void setHealthCheckHost(const std::string &healthCheckHost);
	int getHealthCheckInterval() const;
	void setHealthCheckInterval(int healthCheckInterval);
	std::string getHealthCheckTemplateName() const;
	void setHealthCheckTemplateName(const std::string &healthCheckTemplateName);
	std::vector<std::string> getHealthCheckHttpCodes() const;
	void setHealthCheckHttpCodes(const std::vector<std::string> &healthCheckHttpCodes);
	std::string getHealthCheckTemplateId() const;
	void setHealthCheckTemplateId(const std::string &healthCheckTemplateId);
	std::string getHealthCheckHttpVersion() const;
	void setHealthCheckHttpVersion(const std::string &healthCheckHttpVersion);
	int getHealthCheckConnectPort() const;
	void setHealthCheckConnectPort(int healthCheckConnectPort);

private:
	int healthCheckTimeout_;
	std::string clientToken_;
	std::string healthCheckProtocol_;
	int unhealthyThreshold_;
	int healthyThreshold_;
	bool healthCheckTcpFastCloseEnabled_;
	std::string healthCheckPath_;
	std::vector<std::string> healthCheckCodes_;
	bool dryRun_;
	std::string healthCheckMethod_;
	std::string healthCheckHost_;
	int healthCheckInterval_;
	std::string healthCheckTemplateName_;
	std::vector<std::string> healthCheckHttpCodes_;
	std::string healthCheckTemplateId_;
	std::string healthCheckHttpVersion_;
	int healthCheckConnectPort_;
};
} // namespace Model
} // namespace Alb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ALB_MODEL_UPDATEHEALTHCHECKTEMPLATEATTRIBUTEREQUEST_H_
