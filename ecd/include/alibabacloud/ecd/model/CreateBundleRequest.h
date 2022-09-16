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

#ifndef ALIBABACLOUD_ECD_MODEL_CREATEBUNDLEREQUEST_H_
#define ALIBABACLOUD_ECD_MODEL_CREATEBUNDLEREQUEST_H_

#include <alibabacloud/ecd/EcdExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecd {
namespace Model {
class ALIBABACLOUD_ECD_EXPORT CreateBundleRequest : public RpcServiceRequest {
public:
	CreateBundleRequest();
	~CreateBundleRequest();
	std::string getRootDiskPerformanceLevel() const;
	void setRootDiskPerformanceLevel(const std::string &rootDiskPerformanceLevel);
	std::string getImageId() const;
	void setImageId(const std::string &imageId);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getLanguage() const;
	void setLanguage(const std::string &language);
	std::string getUserDiskPerformanceLevel() const;
	void setUserDiskPerformanceLevel(const std::string &userDiskPerformanceLevel);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getDesktopType() const;
	void setDesktopType(const std::string &desktopType);
	std::string getBundleName() const;
	void setBundleName(const std::string &bundleName);
	std::vector<int> getUserDiskSizeGib() const;
	void setUserDiskSizeGib(const std::vector<int> &userDiskSizeGib);
	int getRootDiskSizeGib() const;
	void setRootDiskSizeGib(int rootDiskSizeGib);

private:
	std::string rootDiskPerformanceLevel_;
	std::string imageId_;
	std::string description_;
	std::string language_;
	std::string userDiskPerformanceLevel_;
	std::string regionId_;
	std::string desktopType_;
	std::string bundleName_;
	std::vector<int> userDiskSizeGib_;
	int rootDiskSizeGib_;
};
} // namespace Model
} // namespace Ecd
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECD_MODEL_CREATEBUNDLEREQUEST_H_
