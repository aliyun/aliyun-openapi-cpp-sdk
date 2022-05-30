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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_UPDATEDATASERVICEAPIREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_UPDATEDATASERVICEAPIREQUEST_H_

#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dataworks_public {
namespace Model {
class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT UpdateDataServiceApiRequest : public RpcServiceRequest {
public:
	UpdateDataServiceApiRequest();
	~UpdateDataServiceApiRequest();
	std::string getScriptDetails() const;
	void setScriptDetails(const std::string &scriptDetails);
	int getRequestMethod() const;
	void setRequestMethod(int requestMethod);
	std::string getApiPath() const;
	void setApiPath(const std::string &apiPath);
	std::string getWizardDetails() const;
	void setWizardDetails(const std::string &wizardDetails);
	int getVisibleRange() const;
	void setVisibleRange(int visibleRange);
	std::string getApiDescription() const;
	void setApiDescription(const std::string &apiDescription);
	int getTimeout() const;
	void setTimeout(int timeout);
	std::string getRegistrationDetails() const;
	void setRegistrationDetails(const std::string &registrationDetails);
	long getTenantId() const;
	void setTenantId(long tenantId);
	std::string getProtocols() const;
	void setProtocols(const std::string &protocols);
	long getProjectId() const;
	void setProjectId(long projectId);
	long getApiId() const;
	void setApiId(long apiId);
	int getResponseContentType() const;
	void setResponseContentType(int responseContentType);

private:
	std::string scriptDetails_;
	int requestMethod_;
	std::string apiPath_;
	std::string wizardDetails_;
	int visibleRange_;
	std::string apiDescription_;
	int timeout_;
	std::string registrationDetails_;
	long tenantId_;
	std::string protocols_;
	long projectId_;
	long apiId_;
	int responseContentType_;
};
} // namespace Model
} // namespace Dataworks_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_UPDATEDATASERVICEAPIREQUEST_H_
