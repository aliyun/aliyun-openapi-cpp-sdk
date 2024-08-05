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

#ifndef ALIBABACLOUD_ARMS_MODEL_CREATEENVIRONMENTREQUEST_H_
#define ALIBABACLOUD_ARMS_MODEL_CREATEENVIRONMENTREQUEST_H_

#include <alibabacloud/arms/ARMSExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ARMS {
namespace Model {
class ALIBABACLOUD_ARMS_EXPORT CreateEnvironmentRequest : public RpcServiceRequest {
public:
	struct Tags {
		std::string value;
		std::string key;
	};
	CreateEnvironmentRequest();
	~CreateEnvironmentRequest();
	std::string getAliyunLang() const;
	void setAliyunLang(const std::string &aliyunLang);
	std::string getEnvironmentName() const;
	void setEnvironmentName(const std::string &environmentName);
	bool getInitEnvironment() const;
	void setInitEnvironment(bool initEnvironment);
	std::string getPrometheusInstanceId() const;
	void setPrometheusInstanceId(const std::string &prometheusInstanceId);
	std::string getEnvironmentSubType() const;
	void setEnvironmentSubType(const std::string &environmentSubType);
	std::vector<Tags> getTags() const;
	void setTags(const std::vector<Tags> &tags);
	std::string getGrafanaWorkspaceId() const;
	void setGrafanaWorkspaceId(const std::string &grafanaWorkspaceId);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getEnvironmentType() const;
	void setEnvironmentType(const std::string &environmentType);
	std::string getManagedType() const;
	void setManagedType(const std::string &managedType);
	std::string getBindResourceId() const;
	void setBindResourceId(const std::string &bindResourceId);
	std::string getFeePackage() const;
	void setFeePackage(const std::string &feePackage);

private:
	std::string aliyunLang_;
	std::string environmentName_;
	bool initEnvironment_;
	std::string prometheusInstanceId_;
	std::string environmentSubType_;
	std::vector<Tags> tags_;
	std::string grafanaWorkspaceId_;
	std::string resourceGroupId_;
	std::string regionId_;
	std::string environmentType_;
	std::string managedType_;
	std::string bindResourceId_;
	std::string feePackage_;
};
} // namespace Model
} // namespace ARMS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ARMS_MODEL_CREATEENVIRONMENTREQUEST_H_
