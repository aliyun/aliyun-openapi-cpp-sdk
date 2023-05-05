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

#ifndef ALIBABACLOUD_ECD_MODEL_DESCRIBEIMAGESREQUEST_H_
#define ALIBABACLOUD_ECD_MODEL_DESCRIBEIMAGESREQUEST_H_

#include <alibabacloud/ecd/EcdExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecd {
namespace Model {
class ALIBABACLOUD_ECD_EXPORT DescribeImagesRequest : public RpcServiceRequest {
public:
	DescribeImagesRequest();
	~DescribeImagesRequest();
	std::vector<std::string> getImageId() const;
	void setImageId(const std::vector<std::string> &imageId);
	bool getGpuCategory() const;
	void setGpuCategory(bool gpuCategory);
	std::string getDesktopInstanceType() const;
	void setDesktopInstanceType(const std::string &desktopInstanceType);
	std::string getLanguageType() const;
	void setLanguageType(const std::string &languageType);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getFotaChannel() const;
	void setFotaChannel(const std::string &fotaChannel);
	std::string getImageType() const;
	void setImageType(const std::string &imageType);
	std::string getSessionType() const;
	void setSessionType(const std::string &sessionType);
	std::string getOsType() const;
	void setOsType(const std::string &osType);
	std::string getImageStatus() const;
	void setImageStatus(const std::string &imageStatus);
	int getMaxResults() const;
	void setMaxResults(int maxResults);
	std::string getProtocolType() const;
	void setProtocolType(const std::string &protocolType);
	std::string getGpuDriverVersion() const;
	void setGpuDriverVersion(const std::string &gpuDriverVersion);

private:
	std::vector<std::string> imageId_;
	bool gpuCategory_;
	std::string desktopInstanceType_;
	std::string languageType_;
	std::string regionId_;
	std::string nextToken_;
	std::string fotaChannel_;
	std::string imageType_;
	std::string sessionType_;
	std::string osType_;
	std::string imageStatus_;
	int maxResults_;
	std::string protocolType_;
	std::string gpuDriverVersion_;
};
} // namespace Model
} // namespace Ecd
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECD_MODEL_DESCRIBEIMAGESREQUEST_H_
