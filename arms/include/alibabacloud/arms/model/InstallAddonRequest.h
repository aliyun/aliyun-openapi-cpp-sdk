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

#ifndef ALIBABACLOUD_ARMS_MODEL_INSTALLADDONREQUEST_H_
#define ALIBABACLOUD_ARMS_MODEL_INSTALLADDONREQUEST_H_

#include <alibabacloud/arms/ARMSExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ARMS {
namespace Model {
class ALIBABACLOUD_ARMS_EXPORT InstallAddonRequest : public RpcServiceRequest {
public:
	InstallAddonRequest();
	~InstallAddonRequest();
	std::string getAddonVersion() const;
	void setAddonVersion(const std::string &addonVersion);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	std::string getAliyunLang() const;
	void setAliyunLang(const std::string &aliyunLang);
	std::string getValues() const;
	void setValues(const std::string &values);
	std::string getReleaseName() const;
	void setReleaseName(const std::string &releaseName);
	std::string getEnvironmentId() const;
	void setEnvironmentId(const std::string &environmentId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getName() const;
	void setName(const std::string &name);

private:
	std::string addonVersion_;
	bool dryRun_;
	std::string aliyunLang_;
	std::string values_;
	std::string releaseName_;
	std::string environmentId_;
	std::string regionId_;
	std::string name_;
};
} // namespace Model
} // namespace ARMS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ARMS_MODEL_INSTALLADDONREQUEST_H_
