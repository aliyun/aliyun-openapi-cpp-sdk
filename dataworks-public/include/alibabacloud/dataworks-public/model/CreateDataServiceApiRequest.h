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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_CREATEDATASERVICEAPIREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_CREATEDATASERVICEAPIREQUEST_H_

#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dataworks_public {
namespace Model {
class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT CreateDataServiceApiRequest : public RpcServiceRequest {
public:
	CreateDataServiceApiRequest();
	~CreateDataServiceApiRequest();
	std::string getScriptDetails() const;
	void setScriptDetails(const std::string &scriptDetails);
	int getRequestMethod() const;
	void setRequestMethod(int requestMethod);
	std::string getApiDescription() const;
	void setApiDescription(const std::string &apiDescription);
	int getTimeout() const;
	void setTimeout(int timeout);
	long getFolderId() const;
	void setFolderId(long folderId);
	long getResourceGroupId() const;
	void setResourceGroupId(long resourceGroupId);
	long getSqlMode() const;
	void setSqlMode(long sqlMode);
	long getTenantId() const;
	void setTenantId(long tenantId);
	int getRequestContentType() const;
	void setRequestContentType(int requestContentType);
	std::string getProtocols() const;
	void setProtocols(const std::string &protocols);
	long getProjectId() const;
	void setProjectId(long projectId);
	int getResponseContentType() const;
	void setResponseContentType(int responseContentType);
	std::string getGroupId() const;
	void setGroupId(const std::string &groupId);
	std::string getApiPath() const;
	void setApiPath(const std::string &apiPath);
	std::string getWizardDetails() const;
	void setWizardDetails(const std::string &wizardDetails);
	int getApiMode() const;
	void setApiMode(int apiMode);
	int getVisibleRange() const;
	void setVisibleRange(int visibleRange);
	std::string getRegistrationDetails() const;
	void setRegistrationDetails(const std::string &registrationDetails);
	std::string getApiName() const;
	void setApiName(const std::string &apiName);

private:
	std::string scriptDetails_;
	int requestMethod_;
	std::string apiDescription_;
	int timeout_;
	long folderId_;
	long resourceGroupId_;
	long sqlMode_;
	long tenantId_;
	int requestContentType_;
	std::string protocols_;
	long projectId_;
	int responseContentType_;
	std::string groupId_;
	std::string apiPath_;
	std::string wizardDetails_;
	int apiMode_;
	int visibleRange_;
	std::string registrationDetails_;
	std::string apiName_;
};
} // namespace Model
} // namespace Dataworks_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_CREATEDATASERVICEAPIREQUEST_H_
