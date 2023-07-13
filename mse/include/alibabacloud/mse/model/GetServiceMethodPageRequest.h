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

#ifndef ALIBABACLOUD_MSE_MODEL_GETSERVICEMETHODPAGEREQUEST_H_
#define ALIBABACLOUD_MSE_MODEL_GETSERVICEMETHODPAGEREQUEST_H_

#include <alibabacloud/mse/MseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Mse {
namespace Model {
class ALIBABACLOUD_MSE_EXPORT GetServiceMethodPageRequest : public RpcServiceRequest {
public:
	GetServiceMethodPageRequest();
	~GetServiceMethodPageRequest();
	std::string getMseSessionId() const;
	void setMseSessionId(const std::string &mseSessionId);
	std::string getServiceGroup() const;
	void setServiceGroup(const std::string &serviceGroup);
	std::string getPath() const;
	void setPath(const std::string &path);
	std::string getAppName() const;
	void setAppName(const std::string &appName);
	std::string getIp() const;
	void setIp(const std::string &ip);
	std::string getServiceVersion() const;
	void setServiceVersion(const std::string &serviceVersion);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getRegion() const;
	void setRegion(const std::string &region);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getServiceName() const;
	void setServiceName(const std::string &serviceName);
	std::string getServiceType() const;
	void setServiceType(const std::string &serviceType);
	std::string getAppId() const;
	void setAppId(const std::string &appId);
	std::string getAcceptLanguage() const;
	void setAcceptLanguage(const std::string &acceptLanguage);
	std::string getMethodController() const;
	void setMethodController(const std::string &methodController);

private:
	std::string mseSessionId_;
	std::string serviceGroup_;
	std::string path_;
	std::string appName_;
	std::string ip_;
	std::string serviceVersion_;
	std::string name_;
	std::string region_;
	int pageNumber_;
	int pageSize_;
	std::string serviceName_;
	std::string serviceType_;
	std::string appId_;
	std::string acceptLanguage_;
	std::string methodController_;
};
} // namespace Model
} // namespace Mse
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MSE_MODEL_GETSERVICEMETHODPAGEREQUEST_H_
