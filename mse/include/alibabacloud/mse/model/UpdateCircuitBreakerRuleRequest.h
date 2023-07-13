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

#ifndef ALIBABACLOUD_MSE_MODEL_UPDATECIRCUITBREAKERRULEREQUEST_H_
#define ALIBABACLOUD_MSE_MODEL_UPDATECIRCUITBREAKERRULEREQUEST_H_

#include <alibabacloud/mse/MseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Mse {
namespace Model {
class ALIBABACLOUD_MSE_EXPORT UpdateCircuitBreakerRuleRequest : public RpcServiceRequest {
public:
	UpdateCircuitBreakerRuleRequest();
	~UpdateCircuitBreakerRuleRequest();
	std::string getMseSessionId() const;
	void setMseSessionId(const std::string &mseSessionId);
	float getThreshold() const;
	void setThreshold(float threshold);
	int getRetryTimeoutMs() const;
	void setRetryTimeoutMs(int retryTimeoutMs);
	std::string getAppName() const;
	void setAppName(const std::string &appName);
	bool getEnable() const;
	void setEnable(bool enable);
	int getMinRequestAmount() const;
	void setMinRequestAmount(int minRequestAmount);
	int getMaxAllowedRtMs() const;
	void setMaxAllowedRtMs(int maxAllowedRtMs);
	long getRuleId() const;
	void setRuleId(long ruleId);
	int getHalfOpenBaseAmountPerStep() const;
	void setHalfOpenBaseAmountPerStep(int halfOpenBaseAmountPerStep);
	int getStatIntervalMs() const;
	void setStatIntervalMs(int statIntervalMs);
	std::string getAppId() const;
	void setAppId(const std::string &appId);
	std::string get_Namespace() const;
	void set_Namespace(const std::string &_namespace);
	int getHalfOpenRecoveryStepNum() const;
	void setHalfOpenRecoveryStepNum(int halfOpenRecoveryStepNum);
	std::string getAcceptLanguage() const;
	void setAcceptLanguage(const std::string &acceptLanguage);
	int getStrategy() const;
	void setStrategy(int strategy);

private:
	std::string mseSessionId_;
	float threshold_;
	int retryTimeoutMs_;
	std::string appName_;
	bool enable_;
	int minRequestAmount_;
	int maxAllowedRtMs_;
	long ruleId_;
	int halfOpenBaseAmountPerStep_;
	int statIntervalMs_;
	std::string appId_;
	std::string _namespace_;
	int halfOpenRecoveryStepNum_;
	std::string acceptLanguage_;
	int strategy_;
};
} // namespace Model
} // namespace Mse
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MSE_MODEL_UPDATECIRCUITBREAKERRULEREQUEST_H_
