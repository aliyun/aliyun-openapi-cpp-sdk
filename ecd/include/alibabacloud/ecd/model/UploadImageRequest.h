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

#ifndef ALIBABACLOUD_ECD_MODEL_UPLOADIMAGEREQUEST_H_
#define ALIBABACLOUD_ECD_MODEL_UPLOADIMAGEREQUEST_H_

#include <alibabacloud/ecd/EcdExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecd {
namespace Model {
class ALIBABACLOUD_ECD_EXPORT UploadImageRequest : public RpcServiceRequest {
public:
	UploadImageRequest();
	~UploadImageRequest();
	bool getEnableSecurityCheck() const;
	void setEnableSecurityCheck(bool enableSecurityCheck);
	bool getGpuCategory() const;
	void setGpuCategory(bool gpuCategory);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getOssObjectPath() const;
	void setOssObjectPath(const std::string &ossObjectPath);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getImageName() const;
	void setImageName(const std::string &imageName);
	std::string getLicenseType() const;
	void setLicenseType(const std::string &licenseType);
	std::string getOsType() const;
	void setOsType(const std::string &osType);
	int getDataDiskSize() const;
	void setDataDiskSize(int dataDiskSize);
	std::string getProtocolType() const;
	void setProtocolType(const std::string &protocolType);
	std::string getGpuDriverType() const;
	void setGpuDriverType(const std::string &gpuDriverType);

private:
	bool enableSecurityCheck_;
	bool gpuCategory_;
	std::string description_;
	std::string ossObjectPath_;
	std::string regionId_;
	std::string imageName_;
	std::string licenseType_;
	std::string osType_;
	int dataDiskSize_;
	std::string protocolType_;
	std::string gpuDriverType_;
};
} // namespace Model
} // namespace Ecd
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECD_MODEL_UPLOADIMAGEREQUEST_H_
