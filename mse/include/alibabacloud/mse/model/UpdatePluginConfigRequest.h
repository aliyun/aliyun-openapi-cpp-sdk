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

#ifndef ALIBABACLOUD_MSE_MODEL_UPDATEPLUGINCONFIGREQUEST_H_
#define ALIBABACLOUD_MSE_MODEL_UPDATEPLUGINCONFIGREQUEST_H_

#include <alibabacloud/mse/MseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Mse {
namespace Model {
class ALIBABACLOUD_MSE_EXPORT UpdatePluginConfigRequest : public RpcServiceRequest {
public:
	UpdatePluginConfigRequest();
	~UpdatePluginConfigRequest();
	std::string getMseSessionId() const;
	void setMseSessionId(const std::string &mseSessionId);
	std::string getGatewayUniqueId() const;
	void setGatewayUniqueId(const std::string &gatewayUniqueId);
	std::string getGmtModified() const;
	void setGmtModified(const std::string &gmtModified);
	bool getEnable() const;
	void setEnable(bool enable);
	long getId() const;
	void setId(long id);
	long getGatewayId() const;
	void setGatewayId(long gatewayId);
	long getPluginId() const;
	void setPluginId(long pluginId);
	std::string getGmtCreate() const;
	void setGmtCreate(const std::string &gmtCreate);
	std::string getAcceptLanguage() const;
	void setAcceptLanguage(const std::string &acceptLanguage);
	int getConfigLevel() const;
	void setConfigLevel(int configLevel);
	std::string getConfig() const;
	void setConfig(const std::string &config);

private:
	std::string mseSessionId_;
	std::string gatewayUniqueId_;
	std::string gmtModified_;
	bool enable_;
	long id_;
	long gatewayId_;
	long pluginId_;
	std::string gmtCreate_;
	std::string acceptLanguage_;
	int configLevel_;
	std::string config_;
};
} // namespace Model
} // namespace Mse
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MSE_MODEL_UPDATEPLUGINCONFIGREQUEST_H_
