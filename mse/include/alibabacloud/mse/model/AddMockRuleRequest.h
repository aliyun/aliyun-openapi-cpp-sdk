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

#ifndef ALIBABACLOUD_MSE_MODEL_ADDMOCKRULEREQUEST_H_
#define ALIBABACLOUD_MSE_MODEL_ADDMOCKRULEREQUEST_H_

#include <alibabacloud/mse/MseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Mse {
namespace Model {
class ALIBABACLOUD_MSE_EXPORT AddMockRuleRequest : public RpcServiceRequest {
public:
	AddMockRuleRequest();
	~AddMockRuleRequest();
	std::string getMseSessionId() const;
	void setMseSessionId(const std::string &mseSessionId);
	std::string getExtraJson() const;
	void setExtraJson(const std::string &extraJson);
	std::string getSource() const;
	void setSource(const std::string &source);
	bool getEnable() const;
	void setEnable(bool enable);
	std::string getScMockItems() const;
	void setScMockItems(const std::string &scMockItems);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getRegion() const;
	void setRegion(const std::string &region);
	std::string getProviderAppId() const;
	void setProviderAppId(const std::string &providerAppId);
	std::string getProviderAppName() const;
	void setProviderAppName(const std::string &providerAppName);
	std::string getConsumerAppIds() const;
	void setConsumerAppIds(const std::string &consumerAppIds);
	std::string getDubboMockItems() const;
	void setDubboMockItems(const std::string &dubboMockItems);
	std::string getAcceptLanguage() const;
	void setAcceptLanguage(const std::string &acceptLanguage);
	long getMockType() const;
	void setMockType(long mockType);

private:
	std::string mseSessionId_;
	std::string extraJson_;
	std::string source_;
	bool enable_;
	std::string scMockItems_;
	std::string name_;
	std::string region_;
	std::string providerAppId_;
	std::string providerAppName_;
	std::string consumerAppIds_;
	std::string dubboMockItems_;
	std::string acceptLanguage_;
	long mockType_;
};
} // namespace Model
} // namespace Mse
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MSE_MODEL_ADDMOCKRULEREQUEST_H_
