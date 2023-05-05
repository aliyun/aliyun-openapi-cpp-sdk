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

#ifndef ALIBABACLOUD_ECD_MODEL_MODIFYCLOUDDRIVEGROUPSREQUEST_H_
#define ALIBABACLOUD_ECD_MODEL_MODIFYCLOUDDRIVEGROUPSREQUEST_H_

#include <alibabacloud/ecd/EcdExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecd {
namespace Model {
class ALIBABACLOUD_ECD_EXPORT ModifyCloudDriveGroupsRequest : public RpcServiceRequest {
public:
	ModifyCloudDriveGroupsRequest();
	~ModifyCloudDriveGroupsRequest();
	long getTotalSize() const;
	void setTotalSize(long totalSize);
	std::vector<std::string> getGroupId() const;
	void setGroupId(const std::vector<std::string> &groupId);
	std::string getCdsId() const;
	void setCdsId(const std::string &cdsId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	long totalSize_;
	std::vector<std::string> groupId_;
	std::string cdsId_;
	std::string regionId_;
	std::string status_;
};
} // namespace Model
} // namespace Ecd
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECD_MODEL_MODIFYCLOUDDRIVEGROUPSREQUEST_H_
