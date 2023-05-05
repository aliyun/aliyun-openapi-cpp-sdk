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

#ifndef ALIBABACLOUD_ECD_MODEL_DESCRIBEBUNDLESREQUEST_H_
#define ALIBABACLOUD_ECD_MODEL_DESCRIBEBUNDLESREQUEST_H_

#include <alibabacloud/ecd/EcdExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecd {
namespace Model {
class ALIBABACLOUD_ECD_EXPORT DescribeBundlesRequest : public RpcServiceRequest {
public:
	DescribeBundlesRequest();
	~DescribeBundlesRequest();
	float getGpuCount() const;
	void setGpuCount(float gpuCount);
	std::vector<std::string> getImageId() const;
	void setImageId(const std::vector<std::string> &imageId);
	std::vector<std::string> getBundleId() const;
	void setBundleId(const std::vector<std::string> &bundleId);
	std::string getDesktopTypeFamily() const;
	void setDesktopTypeFamily(const std::string &desktopTypeFamily);
	bool getSelectedBundle() const;
	void setSelectedBundle(bool selectedBundle);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	bool getFromDesktopGroup() const;
	void setFromDesktopGroup(bool fromDesktopGroup);
	std::string getBundleType() const;
	void setBundleType(const std::string &bundleType);
	std::string getFotaChannel() const;
	void setFotaChannel(const std::string &fotaChannel);
	bool getVolumeEncryptionEnabled() const;
	void setVolumeEncryptionEnabled(bool volumeEncryptionEnabled);
	int getMemorySize() const;
	void setMemorySize(int memorySize);
	std::string getSessionType() const;
	void setSessionType(const std::string &sessionType);
	std::string getOsType() const;
	void setOsType(const std::string &osType);
	int getMaxResults() const;
	void setMaxResults(int maxResults);
	bool getCheckStock() const;
	void setCheckStock(bool checkStock);
	std::string getProtocolType() const;
	void setProtocolType(const std::string &protocolType);
	int getCpuCount() const;
	void setCpuCount(int cpuCount);
	bool getSupportMultiSession() const;
	void setSupportMultiSession(bool supportMultiSession);

private:
	float gpuCount_;
	std::vector<std::string> imageId_;
	std::vector<std::string> bundleId_;
	std::string desktopTypeFamily_;
	bool selectedBundle_;
	std::string regionId_;
	std::string nextToken_;
	bool fromDesktopGroup_;
	std::string bundleType_;
	std::string fotaChannel_;
	bool volumeEncryptionEnabled_;
	int memorySize_;
	std::string sessionType_;
	std::string osType_;
	int maxResults_;
	bool checkStock_;
	std::string protocolType_;
	int cpuCount_;
	bool supportMultiSession_;
};
} // namespace Model
} // namespace Ecd
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECD_MODEL_DESCRIBEBUNDLESREQUEST_H_
