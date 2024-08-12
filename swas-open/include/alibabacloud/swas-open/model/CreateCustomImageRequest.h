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

#ifndef ALIBABACLOUD_SWAS_OPEN_MODEL_CREATECUSTOMIMAGEREQUEST_H_
#define ALIBABACLOUD_SWAS_OPEN_MODEL_CREATECUSTOMIMAGEREQUEST_H_

#include <alibabacloud/swas-open/SWAS_OPENExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace SWAS_OPEN {
namespace Model {
class ALIBABACLOUD_SWAS_OPEN_EXPORT CreateCustomImageRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string key;
		std::string value;
	};
	CreateCustomImageRequest();
	~CreateCustomImageRequest();
	std::string getSystemSnapshotId() const;
	void setSystemSnapshotId(const std::string &systemSnapshotId);
	std::string getDataSnapshotId() const;
	void setDataSnapshotId(const std::string &dataSnapshotId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getPlatform() const;
	void setPlatform(const std::string &platform);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getImageName() const;
	void setImageName(const std::string &imageName);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);

private:
	std::string systemSnapshotId_;
	std::string dataSnapshotId_;
	std::string clientToken_;
	std::string description_;
	std::string platform_;
	std::string resourceGroupId_;
	std::string regionId_;
	std::string imageName_;
	std::vector<Tag> tag_;
	std::string instanceId_;
};
} // namespace Model
} // namespace SWAS_OPEN
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SWAS_OPEN_MODEL_CREATECUSTOMIMAGEREQUEST_H_
