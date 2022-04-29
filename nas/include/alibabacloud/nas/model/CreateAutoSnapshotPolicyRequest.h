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

#ifndef ALIBABACLOUD_NAS_MODEL_CREATEAUTOSNAPSHOTPOLICYREQUEST_H_
#define ALIBABACLOUD_NAS_MODEL_CREATEAUTOSNAPSHOTPOLICYREQUEST_H_

#include <alibabacloud/nas/NASExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace NAS {
namespace Model {
class ALIBABACLOUD_NAS_EXPORT CreateAutoSnapshotPolicyRequest : public RpcServiceRequest {
public:
	CreateAutoSnapshotPolicyRequest();
	~CreateAutoSnapshotPolicyRequest();
	std::string getTimePoints() const;
	void setTimePoints(const std::string &timePoints);
	std::string getRepeatWeekdays() const;
	void setRepeatWeekdays(const std::string &repeatWeekdays);
	std::string getFileSystemType() const;
	void setFileSystemType(const std::string &fileSystemType);
	std::string getAutoSnapshotPolicyName() const;
	void setAutoSnapshotPolicyName(const std::string &autoSnapshotPolicyName);
	int getRetentionDays() const;
	void setRetentionDays(int retentionDays);

private:
	std::string timePoints_;
	std::string repeatWeekdays_;
	std::string fileSystemType_;
	std::string autoSnapshotPolicyName_;
	int retentionDays_;
};
} // namespace Model
} // namespace NAS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_NAS_MODEL_CREATEAUTOSNAPSHOTPOLICYREQUEST_H_
