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

#ifndef ALIBABACLOUD_ECD_MODEL_CREATEIMAGEREQUEST_H_
#define ALIBABACLOUD_ECD_MODEL_CREATEIMAGEREQUEST_H_

#include <alibabacloud/ecd/EcdExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecd {
namespace Model {
class ALIBABACLOUD_ECD_EXPORT CreateImageRequest : public RpcServiceRequest {
public:
	CreateImageRequest();
	~CreateImageRequest();
	std::string getSnapshotId() const;
	void setSnapshotId(const std::string &snapshotId);
	std::vector<std::string> getSnapshotIds() const;
	void setSnapshotIds(const std::vector<std::string> &snapshotIds);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getDiskType() const;
	void setDiskType(const std::string &diskType);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getImageName() const;
	void setImageName(const std::string &imageName);
	bool getAutoCleanUserdata() const;
	void setAutoCleanUserdata(bool autoCleanUserdata);
	std::string getDesktopId() const;
	void setDesktopId(const std::string &desktopId);
	std::string getImageResourceType() const;
	void setImageResourceType(const std::string &imageResourceType);

private:
	std::string snapshotId_;
	std::vector<std::string> snapshotIds_;
	std::string description_;
	std::string diskType_;
	std::string regionId_;
	std::string imageName_;
	bool autoCleanUserdata_;
	std::string desktopId_;
	std::string imageResourceType_;
};
} // namespace Model
} // namespace Ecd
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECD_MODEL_CREATEIMAGEREQUEST_H_
