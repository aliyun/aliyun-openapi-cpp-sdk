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

#ifndef ALIBABACLOUD_MSE_MODEL_CREATEFLOWRULEREQUEST_H_
#define ALIBABACLOUD_MSE_MODEL_CREATEFLOWRULEREQUEST_H_

#include <alibabacloud/mse/MseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Mse {
namespace Model {
class ALIBABACLOUD_MSE_EXPORT CreateFlowRuleRequest : public RpcServiceRequest {
public:
	CreateFlowRuleRequest();
	~CreateFlowRuleRequest();
	std::string getMseSessionId() const;
	void setMseSessionId(const std::string &mseSessionId);
	int getControlBehavior() const;
	void setControlBehavior(int controlBehavior);
	int getThreshold() const;
	void setThreshold(int threshold);
	std::string getAppName() const;
	void setAppName(const std::string &appName);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	bool getEnable() const;
	void setEnable(bool enable);
	std::string getResource() const;
	void setResource(const std::string &resource);
	std::string getAppId() const;
	void setAppId(const std::string &appId);
	std::string get_Namespace() const;
	void set_Namespace(const std::string &_namespace);
	std::string getAcceptLanguage() const;
	void setAcceptLanguage(const std::string &acceptLanguage);
	int getMaxQueueingTimeMs() const;
	void setMaxQueueingTimeMs(int maxQueueingTimeMs);

private:
	std::string mseSessionId_;
	int controlBehavior_;
	int threshold_;
	std::string appName_;
	std::string regionId_;
	bool enable_;
	std::string resource_;
	std::string appId_;
	std::string _namespace_;
	std::string acceptLanguage_;
	int maxQueueingTimeMs_;
};
} // namespace Model
} // namespace Mse
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MSE_MODEL_CREATEFLOWRULEREQUEST_H_
